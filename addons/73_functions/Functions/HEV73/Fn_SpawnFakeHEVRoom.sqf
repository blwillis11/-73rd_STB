private ["_podArray", "_varArray"];

_posStart = (_this param [0, [0, 0, 0], [[0, 0, 0], objNull, "marker"]]) call BIS_fnc_position;
_dir = _this param [1, 0, [0]];
_numberOfColums = _this param [2, 4, [4]];
_numberPerRow = _this param [3, 6, [6]];
_name = _this param [4, "", [""]];
_logic = _this param [5, objNull, [objNull]];

if (_name == "") exitWith {
	systemChat "No Variable Name, Enter A Unique Variable Name!";
};
if ( ({
	(((_x get3DENAttribute "name") select 0) == (format ["%1_0_1", _name]));
} count vehicles) > 0 ) exitWith {
	systemChat "Variable Name Is Not Unique!";
};
if !(isNull _logic) then {
	delete3DENEntities [_logic];
};

_rowNumber = _numberPerRow / 2;

_dirLeft = (_dir + 90);
_dirRight = (_dir - 90);

_podArray = [];
_varArray = "[";

	for "_x" from 0 to _numberOfColums do {
		private ["_row"];

		_pos = [_posStart, (_x*9), (_dir + 90)] call BIS_fnc_relPos;

		_startPosLeft = [_pos, 3, _dirLeft] call BIS_fnc_relPos;
		_startPosRight = [_pos, 3, _dirRight] call BIS_fnc_relPos;

		_row = _x;

		for "_i" from 1 to _rowNumber do {
			_pos = [_startPosLeft, (_i*3), _dir] call BIS_fnc_relPos;
			_var = (format ["%3_%1_%2", _row, _i, _name]);
			_varArray = _varArray + (_var + ", ");
			_veh = create3DENEntity ["Object", "DMNS_SOEIV", _pos, true];
			_veh set3DENAttribute ["Rotation", [0, 0, _dirRight]];
			_veh set3DENAttribute ["Name", _var];
			_veh set3DENAttribute ["init", "this setVariable [""DMNS_PlayerControled"", true, true];
				this animate [""door_translation_a"", 1]; this animate [""door_translation_b"", 1]; this animate [""door_translation_c"", 1]; this animate [""door_translation_d"", 1]; this animate [""door_translation_e"", 1]; this animate [""door_translation_f"", 1]; "];
			_podArray pushBack _veh;
		};
		for "_i" from 1 to _rowNumber do {
			_pos = [_startPosRight, (_i*3), _dir] call BIS_fnc_relPos;
			_var = (format ["%3_%1_%2", _row, (_rowNumber+_i), _name]);
			_varArray = _varArray + (_var + ", ");
			_veh = create3DENEntity ["Object", "DMNS_SOEIV", _pos, true];
			_veh set3DENAttribute ["Rotation", [0, 0, _dirLeft]];
			_veh set3DENAttribute ["Name", _var];
			_veh set3DENAttribute ["init", "this setVariable [""DMNS_PlayerControled"", true, true];
				this animate [""door_translation_a"", 1]; this animate [""door_translation_b"", 1]; this animate [""door_translation_c"", 1]; this animate [""door_translation_d"", 1]; this animate [""door_translation_e"", 1]; this animate [""door_translation_f"", 1];"];
			_podArray pushBack _veh;
		};
	};

	_consolePos = [_posStart, (((_numberOfColums / 2) * 9) -4.5) + (9 / 2), (_dir + 90)] call BIS_fnc_relPos;
	_console = create3DENEntity ["Object", "OPTRE_RS_ConsoleDoor", _consolePos];
	_console set3DENAttribute ["Rotation", [0, 0, (_dir + 90)]];
	_console set3DENAttribute ["Init", "this addAction [""OPEN CONTROL MENU"", STB73_Fnc_Menu, [""UNSC_HEV"", ""UNSC_DATABASE""]];
	this setVariable [""DMNS_PodsLaunchIn"", -1, true];this setVariable [""DMNS_PodsLinkedToConsole"", ("+_varArray+"objNull]"+"- [objNull])"+", true];"];

	_result = (_podArray + [_console]);

	_result;