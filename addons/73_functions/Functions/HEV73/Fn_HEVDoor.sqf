/*
	OPTRE_Fnc_HEVDoor
	
	Description: Can be used to open the HEVs door, or eject it, can also be to make ai or players eject from vehicle afterwards.
	
	Author: Big_Wilk
	
	type: spawn
	
	Return: None
	
	Prams:
	0: Object: HEV
	1: Number: 0 = emergency eject door, 1 = open door
	2: Bool: true forces the HEV gunner to leave the vehicle, false does nothing
	
	Example 1:
	0 = [vehicle player, 0, true] spawn OPTRE_Fnc_HEVDoor;
	Result: Door ejects, player exits hev.
	
	Example 1:
	0 = [vehicle player, 1, false] spawn OPTRE_Fnc_HEVDoor;
	Result: Door opens, player does not exits hev.
	
*/

private ["_pod", "_mode", "_eject"];

_pod = vehicle ([_this, 0, objNull] call BIS_fnc_param);
_mode = [_this, 1, 0] call BIS_fnc_param;
_eject = [_this, 2, false] call BIS_fnc_param;

0 = switch _mode do {
	case 0: {
		_dir = getDir _pod;

		_door = "DMNS_SOEIV_Door" createVehicle [0, 0, 0];
		// _door = createVehicle ["OPTRE_HEV_Door", [0, 0, 0], [], 0, ""]; // Dec 2017 start causing error!?!?
		_door setDir (_dir - 180);
		_door attachTo [_pod, [0, 1, 0.5]];

		_pod setobjecttextureglobal [1, ""];
		_pod setobjecttextureglobal [2, ""];
		_pod setobjecttextureglobal [3, ""];
		_pod setobjecttextureglobal [6, ""];
		_pod setobjecttextureglobal [7, ""];
		_pod setobjecttextureglobal [8, ""];
		_pod setobjecttextureglobal [9, ""];
		_pod setobjecttextureglobal [10, ""];
		_pod setobjecttextureglobal [11, ""];

		detach _door;
		_door setDir (_dir - 180);
		_door setVelocity ([velocity _pod, direction _pod, 20, 2] call OPTRE_fnc_GetVelocityWithAddedSpeedDirAndDown);

		playSound3d ["OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Pop.ogg", _door, false, getPos _door, 5, 1, 250];

		sleep 0.25;

		[[_door], false] remoteExec ["STB73_fnc_CleanUp", 2, false];
	};

	case 1: {
		_pod setobjecttextureglobal [1, ""];
		_pod setobjecttextureglobal [3, ""];
		_pod setobjecttextureglobal [6, ""];
		_pod setobjecttextureglobal [7, ""];
		_pod setobjecttextureglobal [8, ""];
		_pod setobjecttextureglobal [9, ""];
		_pod setobjecttextureglobal [10, ""];
		_pod setobjecttextureglobal [11, ""];
		_pod animate ["door_translation_a", 1];
		_pod animate ["door_translation_b", 1];
		_pod animate ["door_translation_c", 1];
		_pod animate ["door_translation_d", 1];
		_pod animate ["door_translation_e", 1];
		_pod animate ["door_translation_f", 1];

		sleep 2.5;
	};
};

_pod setVelocity [0, 0, 0];

if _eject then {
	_gunner = gunner _pod;
	unassignVehicle _gunner;
	_gunner action ["getOut", _pod];
	_gunner leaveVehicle _pod;
};