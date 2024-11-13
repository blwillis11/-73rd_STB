params ["_held"];
private ["_held","_velC","_vel","_pos","_height","_arrayDir","_dir","_addDir"];

_backpack = backpack player;
if ((_backpack != "JJP_JumpPack_on"  AND _backpack != "JJP_JumpPack")) exitWith {};
if !(JJP_JumpPack_Enabled) exitWith {hint "JumpPacks are currently disabled by an admin";};

if ((player getVariable ["ace_medical_isUnconscious", false]) or (not (alive player)) or (vehicle player != player)) exitWith {};


if (not _held) exitWith {
    JJP_JumpPack_ON = false;
    WMO_Enabled = true;
    playSound "OPTRE_Sounds_Jetpack_End";
    _backpackItems = backpackItems player;
    removeBackpack player;
    player addBackpack "JJP_JumpPack";
    {player addItemToBackpack _x;} forEach _backpackItems;
    if(not (isNil "JJP_JumpPack_Effects")) then {
        {deleteVehicle _x;} forEach JJP_JumpPack_Effects;
    };
    JJP_JumpPack_Effects = nil;
    if(not (isNil "JJP_JumpPackWaiting")) then {
        if(JJP_JumpPackWaiting) exitWith {};
    };
    if(not isTouchingGround player and (vehicle player == player)) then {
        waitUntil{
            uiSleep .1;
            [(getPosASL player),velocity (vehicle player)] call JJP_JumpPack_fnc_RoofStuckCheck;
            (isTouchingGround player);
        };
    };
    JJP_JumpPackWaiting = false;
    if (!isNil "JJP_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",JJP_JumpPack_keyDownEH];};
    JJP_JumpPack_keyDownEH = nil;
    //player switchMove "";
};

if(stance player == "PRONE") exitWith {player playMoveNow "AmovPercMstpSrasWrflDnon";};

_heat = player getVariable ["JJP_JumpPack_heat",0];
_fuel = player getVariable ["JJP_JumpPack_fuel",1];
if(_heat >= 1 and _fuel <= 0) exitWith {};

if(isNil "JJP_JumpPack_UI") then {
    // Control Variables
    82 cutRsc ["JumpPackUI","PLAIN"];
    _dialog = uiNamespace getVariable "JJP_JumpPack_UI";
     uiNamespace setVariable ["JJP_JumpPack_UI_heat",(_dialog displayCtrl 37202)];
     uiNamespace setVariable ["JJP_JumpPack_UI_fuel",(_dialog displayCtrl 37204)];
     uiNamespace setVariable ["JJP_JumpPack_UI_heat2",(_dialog displayCtrl 37206)];

    // Fuel Variables
    _heat = player getVariable ["JJP_JumpPack_heat",0];
    _fuel = player getVariable ["JJP_JumpPack_fuel",1];

    (uiNamespace getVariable "JJP_JumpPack_UI_heat") progressSetPosition _heat;
    (uiNamespace getVariable "JJP_JumpPack_UI_heat2") progressSetPosition _heat;
    (uiNamespace getVariable "JJP_JumpPack_UI_fuel")  progressSetPosition _fuel;

    player setVariable ["JJP_JumpPack_heat",_heat,false];
    player setVariable ["JJP_JumpPack_fuel",_fuel,false];
};

if(isNil "JJP_JumpPack_ON") then {
    JJP_JumpPack_ON = false;
};

if(JJP_JumpPack_ON) exitWith {};
playSound "OPTRE_Sounds_Jetpack_StartUp";
player playMoveNow "PlayerStand";
JJP_JumpPack_ON = true;
WMO_Enabled = false;

_backpackItems = backpackItems player;
removeBackpack player;
player addBackpack "JJP_JumpPack_on";
{player addItemToBackpack _x;} forEach _backpackItems;

if(isNil "JJP_JumpPack_Effects") then {
    _fireSparks1 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks1 setParticleClass "LaptopSparks";
    _fireSparks1 attachTo [vehicle player,[0.225,-0.1,1.5]];
    _fireSparks2 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks2 setParticleClass "LaptopSparks";
    _fireSparks2 attachTo [vehicle player,[-0.225,-0.1,1.5]];

    JJP_JumpPack_Effects = [_fireSparks1,_fireSparks2];
};

[] call JJP_JumpPack_fnc_EventHandlers;

while {JJP_JumpPack_ON} do {
	_heat = player getVariable ["JJP_JumpPack_heat",0];
	_fuel = player getVariable ["JJP_JumpPack_fuel",1];

	// Normal Fuel & Heat Changes
	_newHeat = _heat + 0.035;
    _newFuel = _fuel - 0.01;

    _pos = getPosATL player;
    _vel = velocity player;
    _yInc = (_vel select 2);
    if(!([(getPosASL player),_vel] call JJP_JumpPack_fnc_RoofStuckCheck)) then {
        if (not (isTouchingGround player)) then {
            if(_yInc < 0) then {
                // Half Fuel & Heat Changes
	            _newHeat = _heat + 0.01;
	            _newFuel = _fuel - 0.0035;
                if(_yInc < -1.5) then {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
                } else {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 0.8];
                };
            } else {
                if(_yInc > 4) then {
                    player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
                } else {
	                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 2];
	            };
	        };
	    } else {
	        player setVelocity [_vel select 0,_vel select 1,1.6];
	    };
	};

    player setVariable ["JJP_JumpPack_heat",_newHeat,false];
	player setVariable ["JJP_JumpPack_fuel",_newFuel,false];

	(uiNamespace getVariable "JJP_JumpPack_UI_heat") progressSetPosition _newHeat;
    (uiNamespace getVariable "JJP_JumpPack_UI_heat2") progressSetPosition _newHeat;
    (uiNamespace getVariable "JJP_JumpPack_UI_fuel") progressSetPosition _newFuel;

    if(_newFuel <= 0 or _newHeat >= 1) then {
        JJP_JumpPack_ON = false;
        playSound "OPTRE_Sounds_Jetpack_End";
        _backpackItems = backpackItems player;
        removeBackpack player;
        player addBackpack "JJP_JumpPack";
        {player addItemToBackpack _x;} forEach _backpackItems;
        if(not (isNil "JJP_JumpPack_Effects")) then {
            {deleteVehicle _x;} forEach JJP_JumpPack_Effects;
        };
        JJP_JumpPack_Effects = nil;
    };

    playSound "OPTRE_Sounds_Jetpack_LoopShort";
    uiSleep .1;
};


//  JumpPack Refueling Handler
uiSleep 1;
[] spawn JJP_JumpPack_fnc_JumpPackRefuel;