_array = _this select 0;
_console = _this select 1;

if ((_console getVariable ["DMNS_PodsLaunchIn",-1]) == -2) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPos _console, 0.5, 1, 300];}; // Cool Down in Progress.
if ((_console getVariable ["DMNS_PodsLaunchIn",-1]) >  -1) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPos _console, 0.5, 1, 300];}; // Count down in progress.

_console setVariable ["DMNS_PodsLaunchIn",30,true];

While {(_console getVariable ["DMNS_PodsLaunchIn",-1]) > 0} do {
	_number = _console getVariable ["DMNS_PodsLaunchIn",-1];
	_console setVariable ["DMNS_PodsLaunchIn",(_number-1),true];
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\timer.wss", _console,false, getPos _console, 0.5, 1, 300];
	sleep 1;
};

if ((_console getVariable ["DMNS_PodsLaunchIn",-1]) == -1) exitWith {playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console, false, getPos _console, 0.5, 1, 300];};

if ((_console getVariable ["DMNS_PodsLaunchIn",-1]) == 0) then {


	{
		//_x lock true;
		[_x, true] remoteExec ["lock", _X, false];
		_x animate ["door_translation_a",0];
		_x animate ["door_translation_b",0];
		_x animate ["door_translation_c",0];
		_x animate ["door_translation_d",0];
		_x animate ["door_translation_e",0];
		_x animate ["door_translation_f",0];

	} forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);

	sleep 4;

	_units = [];

	{
		_gunner = gunner _x;
		if !(isNull _gunner AND !alive _gunner) then {
			_units pushBack _gunner;
			if (isPlayer _gunner) then {[999,["OPTRE_LoadScreen", "PLAIN"]] remoteExec ["cutRsc", _gunner, false];};
		};
	} forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);

	sleep 2;

	{
		[_x,[10,-10,10000]] remoteExec ["setPos", _x, false];
	} forEach _units;

	sleep .5;

	if (count _units > 0) then {
		_array set [1, _units];
		_array spawn DMNS_Fnc_HEV;
		_console setVariable ["DMNS_PodsLaunchIn",-2,true];
		sleep 90;
	};

	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console,false, getPos _console, 0.5, 1, 300];

	{
			//_x lock false;
		[_x, false] remoteExec ["lock", _X, false];
		_x animate ["door_translation_a",1];
		_x animate ["door_translation_b",1];
		_x animate ["door_translation_c",1];
		_x animate ["door_translation_d",1];
		_x animate ["door_translation_e",1];
		_x animate ["door_translation_f",1];

	} forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);
	_console setVariable ["DMNS_PodsLaunchIn",-1,true];

};
