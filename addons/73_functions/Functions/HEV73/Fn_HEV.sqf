/*
	STB73_Fnc_HEV
	
	Description:
	
	Author: Big_Wilk
	
	Return: none
	
	Prams:
	
	Example 1:
	0 = [[0, 0, 0], [unit1, unit2, unit3], "Frigate Lowering Arm"] spawn
	0 = [[0, 0, 0], [unit1, unit2, unit3]] spawn
	Result: Both examples but units1-3 into hevs attached to frigate, defaults heights are used.
	
	Example 2:
	0 = [[0, 0, 0], [unit1, unit2, unit3], "No Frigate"] spawn
	Result: Puts unit1-3 into hevs above their current location.
	
	MP: Should be run by one machine only, typically server.
	
*/

private ["_units", "_allHEVs", "_frigate", "_aiHevOverWater", "_chuteArray"];

_pos= ([_this, 0, [0, 0, 0]] call BIS_fnc_param) call BIS_fnc_position; // The central position, where the ship will spawn (if wanted).
_units = [_this, 1, []] call BIS_fnc_param;// units that will be effected
_shipDeployment = [_this, 2, "Frigate Lowering Arm"] call BIS_fnc_param;// Lanch Sequence: "No Frigate" or "Frigate Lowering Arm"
_launchDelay = [_this, 3, 15] call BIS_fnc_param;// Launch count Down, this will be set to 30 seconds if the mission is MP and the game has been running for less than 30 seconds to allow smooth start.
_randomXYVelocity = [_this, 4, 0.5] call BIS_fnc_param;// Randomised velocity
_launchSpeed = [_this, 5, -1] call BIS_fnc_param;// speed HEVs will be launched at
_manualControl= [_this, 6, 1] call BIS_fnc_param;// Can the player take manual control of the HEV? 0: No, 1: Rotate Only 2: Full Control (not Implemented).

_startHeight = [_this, 7, 5500] call BIS_fnc_param;// The Height your start at and the ship your are deployed from will spawn (if wanted)
_hevDropArmtmosphereStartHeight = [_this, 8, 3000] call BIS_fnc_param;// The height atmospheric entry effects start at
_hevDropArmtmosphereEndHeight = [_this, 9, 2000] call BIS_fnc_param;// The height atmospheric entry effects end at
_chuteDeployHeightHeight = [_this, 10, 1000] call BIS_fnc_param;// The height HEvs chute deploy at, the height engines switch off at
_chuteDetachHeight= [_this, 11, 500] call BIS_fnc_param;// The height the HEVs chute detaches at
_boasterHeight = [_this, 12, 100] call BIS_fnc_param;// The height for the final stage rockets

_deleteFrigate= [_this, 13, true] call BIS_fnc_param;// Should the frigate be deleted after the drop finished set this value to true, else false (if created).
_deleteChutesOnDetach= [_this, 14, false] call BIS_fnc_param;// true chutes are deleted after they are detached fro, HEVs, false they be added to the clean up system.
_deleteHEVsAfter = [_this, 15, 600] call BIS_fnc_param;// Number in seconds representing how much time must pass before the HEVs are allowed to be deleted.

_DirOfShip = 0; // direction ship faces WIP.

if (str _pos == "[0, 0, 0]" or {
	alive _x
} count _units < 1) exitWith {};
waitUntil {
	time > 0
};

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /////////////////////////// spawn HEVs// ////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

// spawn Frigate & HEVs
_allHEVs = switch _shipDeployment do {
	case "Frigate Lowering Arm": {
		_pos = [_pos, 100, _DirOfShip] call BIS_fnc_relPos;
		_frigate = createVehicle ["Halberd_Empty_Skybox_F", [(_pos select 0), (_pos select 1), _startHeight], [], 0, "none"];
		_frigate setDir _DirOfShip;
		([_frigate, _units] call STB73_Fnc_SpawnHEVsFrigate);
	};
	case "No Frigate": {
		([_units, _startHeight] call STB73_Fnc_SpawnHEVsNoFrigate);
	};
	case "ODST Frigate Room": {};
	default {
		([_units, _startHeight] call STB73_Fnc_SpawnHEVsNoFrigate);
	};
};

_hevArray = _allHEVs select 0;// All hevs created
_hevArrayPlayer = _allHEVs select 1;// All hevs createdfor players
_hevArrayAi = _allHEVs select 2;// All hevs created for ai
_listOfPlayers = _allHEVs select 3;// All players units
_listOfAi = _allHEVs select 4; // All ai units
_objectsToAlwaysBeDeleted = [_allHEVs, 5, []] call BIS_fnc_param;

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /////////////////////////// Start drop + Down Boaster Effects// /////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

_launchDelay = if (isMultiplayer and (time < 30) or (isMultiplayer and _launchDelay < 30)) then {
	30
} else {
	_launchDelay
};
{
	[_launchDelay] remoteExec ["OPTRE_fnc_CountDown", _x, false];
} forEach _listOfPlayers;
sleep (_launchDelay + 2.5); // Admire the veiw!

{
	detach _x; // Start the drop!

	_light = "#lightpoint" createVehicle [0, 0, 0];
	[0, _x, _light] remoteExec ["STB73_fnc_PlayerHEVEffectsUpdate_Light", 0, false];

	_fire = "#particlesource" createVehicle [0, 0, 0];
	_fire setParticleClass "RocketBackfireRPG";
	_fire setParticleClass "IncinerateFire";
	_fire attachTo [_x, [0, -0.2, -2]];

	sleep (random 0.5); // Brief Pause

	if (_x getVariable ["DMNS_PlayerControled", false]) then {
		[(random _randomXYVelocity), (random _randomXYVelocity), _launchSpeed, _manualControl] remoteExec ["STB73_fnc_PlayerHEVEffectsUpdate_BoasterDown", _x, false];
	} else {
		[_x, [(random _randomXYVelocity), (random _randomXYVelocity), _launchSpeed]] remoteExec ["setVelocity", _x, false];
	};

	_x setVariable ["DMNS_HEVeffects", [_fire, _light], false];

	{
		if !(isNull attachedTo _x) then {
			"OPTRE_Sounds_Detach" remoteExec ["playSound", gunner _x, false];
		};
	} forEach _hevArrayPlayer;
} forEach _hevArray;

_secondsOfSleep = count _hevArray * 0.5;
sleep (if (_secondsOfSleep > 22) then {
	0
} else {
	22 - _secondsOfSleep
});

{
	{
		deleteVehicle _x;
		sleep 0.5;
	} forEach (_x getVariable ["DMNS_HEVeffects", []]);
} forEach _hevArray;

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////// Atmosphere Entry Effects// ////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (_hevDropArmtmosphereStartHeight > -1) then {
	waitUntil {
		{
			(((getPos _x) select 2) < _hevDropArmtmosphereStartHeight)
		} count _hevArray > 0
	};
	{
		_light = "#lightpoint" createVehicle [1, 1, 1];
		[1, _x, _light] remoteExec ["STB73_fnc_PlayerHEVEffectsUpdate_Light", 0, false];

		_fire = "#particlesource" createVehicle [0, 0, 0];
		_fire setParticleClass "IncinerateFire";
		_fire attachTo [ _x, [0, 1.5, -2]];

		_x setVariable ["DMNS_HEVeffects", [_fire, _light], false];

		if (_x getVariable ["DMNS_PlayerControled", false]) then {
			[_hevDropArmtmosphereEndHeight] remoteExec ["STB73_fnc_PlayerHEVEffectsUpdate_ReEntrySounds", _x, false];
		};

		sleep (random 0.5);
	} forEach _hevArray;

	waitUntil {
		{
			(((getPos _x) select 2) < _hevDropArmtmosphereEndHeight)
		} count _hevArray > 0
	};
	{
		{
			deleteVehicle _x;
		} forEach (_x getVariable ["DMNS_HEVeffects", []]);
		sleep .5;
	} forEach _hevArray;
};

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////// Chute Open// //////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

waitUntil {
	{
		(((getPos _x) select 2) < _chuteDeployHeightHeight)
	} count _hevArray > 0
};
_chuteArray = [];
{
	_chute = "DMNS_SOEIV_Chute" createVehicle [0, 0, 0];
	_chute attachTo [_x, [0, -0.2, 1.70]];
	_chuteArray pushBack _chute;
	_x setobjecttextureglobal [1, ""];
	_x setobjecttextureglobal [3, ""];
	_chute animate ["chute_ext_translation", 0];
	_chute animate ["wing1_rotation", 0];
	_chute animate ["wing2_rotation", 0];
	_chute animate ["wing3_rotation", 0];
	_chute animate ["wing4_rotation", 0];
	_chute animate ["wing5_rotation", 0];
	_chute animate ["wing6_rotation", 0];
	_chute animate ["wing7_rotation", 0];
	_chute animate ["wing8_rotation", 0];
	_fire = "#particlesource" createVehicle [0, 0, 0];
	_fire setParticleClass "MediumSmoke";
	_fire attachTo [ _x, [0, -0.2, 1]];

	_x setVariable ["DMNS_HEVeffects", [_fire], false];

	if (_x getVariable ["DMNS_PlayerControled", false]) then {
		[_chute] remoteExec ["STB73_fnc_PlayerHEVEffectsUpdate_Chute", _x, false];
	};

	[_x, [0, 0, -10]] remoteExec ["setVelocity", _x, false];
	_x setVariable ["DMNS_SOEIVChute", _chute, true];

	sleep 0.5;

	_chute animate ["chute_ext_translation", 1];
	_chute animate ["wing1_rotation", 1];
	_chute animate ["wing2_rotation", 1];
	_chute animate ["wing3_rotation", 1];
	_chute animate ["wing4_rotation", 1];
	_chute animate ["wing5_rotation", 1];
	_chute animate ["wing6_rotation", 1];
	_chute animate ["wing7_rotation", 1];
	_chute animate ["wing8_rotation", 1];

	_chute disableCollisionWith _x;
} forEach _hevArray;

sleep 3.5;

waitUntil {
	{
		(((getPos _x) select 2) < _chuteDetachHeight)
	} count _hevArray > 0
};
{
	{
		deleteVehicle _x;
		sleep 0.5;
	} forEach (_x getVariable ["DMNS_HEVeffects", []]);
} forEach _hevArray;
{
	_chute = (_x getVariable ["DMNS_SOEIVChute", objNull]);
	detach _chute;
	_chute setVelocity [(random 2.5), (random 2.5), 20];
	sleep 1.5;
} forEach _hevArray;

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////// Handle Landing// //////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

{
	[_x] remoteExec ["STB73_fnc_HEVHandleLanding", gunner _x, false];
} forEach _hevArray;

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////// Clean Up// ////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (!isNil "_frigate" and _deleteFrigate) then {
	{
		deleteVehicle _x;
	} forEach [_frigate];
};
{
	deleteVehicle _x;
} forEach _objectsToAlwaysBeDeleted;
if _deleteChutesOnDetach then {
	{
		deleteVehicle _x;
	} forEach _chuteArray;
} else {
	[_chuteArray, false] remoteExec ["STB73_fnc_CleanUp", 2, false];
};
[_hevArray, _deleteHEVsAfter] remoteExec ["STB73_fnc_HEVCleanUp", 2, false];

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////// Ai land in Water Fix// ////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
_aiHevOverWater = [];
{
	if (surfaceIsWater getPos _x or (isPlayer (gunner _x))) then {
		_aiHevOverWater pushBack _x;
	};
} forEach _hevArrayAi;
if (count _hevArrayAi > 0) then {
	_time = time + 60;
	{
		waitUntil {
			(((getPosASL _x) select 2) < 1 or (time > _time) or !(alive gunner _x))
		};
		sleep (random 1);
		_x lock false;
		0 = [_x, 0, true] spawn STB73_fnc_HEVDoor;
	} forEach _aiHevOverWater;
};

true