/*
	STB73_Fnc_VehicleAbandonmentCleanUp
	
	Author: Big_Wilk
	
	type: call
	Return: true if Function Attempted to Delete vehicles, false Other Wise.
	
	Description: Design to deal with HEVs.
	
	Parameters:
	0: Array: Array of objects. (default []).
	1: Number: time in seconds after the object has been abandoned that it can be deleted. default 300 (5 mins).
	
	Example 1:
	_vehiclesAdded = [[veh1, veh1, car1, air2], 300] call STB73_Fnc_VehicleAbandonmentCleanUp;
	Result:
	
	MP: Run by server only.
*/

if (isNil "DMNS_VehicleCleanUPArray") then {
	DMNS_VehicleCleanUPArray = [];
};
if (isNil "DMNS_VehicleCleanIdealMaxNumber") then {
	DMNS_VehicleCleanIdealMaxNumber = -1;
};

_vehicles = [_this, 0, []] call BIS_fnc_param;
_timer = [_this, 1, 300] call BIS_fnc_param;

DMNS_VehicleCleanUPArray = DMNS_VehicleCleanUPArray + _vehicles;
{
	_x setVariable ["DMNS_VehicleAbandonmentCleanUpTimer", (time + _timer), false];
} forEach _vehicles;
_countArray = count DMNS_VehicleCleanUPArray - 1;

if (DMNS_VehicleCleanIdealMaxNumber < 0) exitWith {
	false
};
if (_countArray < DMNS_VehicleCleanIdealMaxNumber) exitWith {
	false
};

_cleanUpList = [];

for "_i" from 0 to _countArray do {
	_veh = DMNS_VehicleCleanUPArray select _i;
	if (((count DMNS_VehicleCleanUPArray) > DMNS_VehicleCleanIdealMaxNumber) AND (count crew _veh == 0) AND (time > (_veh getVariable ["DMNS_VehicleAbandonmentCleanUpTimer", (time - 1)]))) then {
		_cleanUpList pushBack _veh;
	};
};

{
	deleteVehicle _x;
} forEach _cleanUpList;
DMNS_VehicleCleanUPArray = DMNS_VehicleCleanUPArray - _cleanUpList;

true;