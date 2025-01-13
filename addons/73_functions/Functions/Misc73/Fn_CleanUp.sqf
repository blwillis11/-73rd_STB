/*
	STB73_Fnc_CleanUp
	
	Description: Adds a object or objects to a list of objects to be deleted, if number of objects exceeds max allowed then the first objects added will be deleted.
	
	Author: Big_Wilk
	
	Return: true, when finished.
	
	Note: If the variable DMNS_CleanUpMaxRubish is set to -1 then the script will not delete any objects. DMNS_CleanUpMaxRubish's default is -1. Incorrectly adding will destroy the clean up system.
	
	Prams:
	0: Array: Of objects to be added to list.
	1: Bool: Should be brought to the front of the que to be deleted.
	
	MP: Must be run by one machine, usually server. ]
	
	Example 1:
	[[_door, _pod], false] remoteExec ["STB73_fnc_CleanUp", 2, false];
	Result: Sends message from client to server, adding the objects _door and _pod to the clean up system.
	
*/

if !isServer exitWith {};

_objects = [_this, 0, []] call BIS_fnc_param;
_priority = [_this, 1, false] call BIS_fnc_param;

if (typeName _objects != "ARRAY") exitWith {};
if ({
	typeName _x != "OBJECT";
} count _objects > 0) exitWith {};

if (isNil "DMNS_CleanUpObjectArray") then {
	DMNS_CleanUpObjectArray = [];
};
if (isNil "DMNS_CleanUpMaxRubish") then {
	DMNS_CleanUpMaxRubish = -1;
};

if _priority then {
	DMNS_CleanUpObjectArray = _objects + DMNS_CleanUpObjectArray;
} else {
	DMNS_CleanUpObjectArray = DMNS_CleanUpObjectArray + _objects;
};

if (DMNS_CleanUpMaxRubish < 0) exitWith {};

_arraySize = count DMNS_CleanUpObjectArray;
if (_arraySize > DMNS_CleanUpMaxRubish) then {
	for "_i" from 0 to ((_arraySize - 1) - DMNS_CleanUpMaxRubish) do {
		_object = DMNS_CleanUpObjectArray select 0;
		DMNS_CleanUpObjectArray = DMNS_CleanUpObjectArray - [_object];
		deleteVehicle _object;
	};
};