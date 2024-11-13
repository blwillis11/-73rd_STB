if (player getVariable ["JJP_JumpPack_Refuelling", false]) exitWith {};
player setVariable ["JJP_JumpPack_Refuelling", true];
_change = true;
while { (not JJP_JumpPack_ON) and _change } do {
	_heat = player getVariable ["JJP_JumpPack_heat", 0];
	_fuel = player getVariable ["JJP_JumpPack_fuel", 1];
	_change = false;
	if (_heat > 0) then {
		_change = true;
		_newHeat = _heat - 0.055;
		player setVariable ["JJP_JumpPack_heat", _newHeat, false];
		(uiNamespace getVariable "JJP_JumpPack_UI_heat") progressSetPosition _newHeat;
		(uiNamespace getVariable "JJP_JumpPack_UI_heat2") progressSetPosition _newHeat;
	};
	if (_fuel < 1) then {
		_change = true;
		_newFuel = _fuel + 0.003;
		player setVariable ["JJP_JumpPack_fuel", _newFuel, false];
		(uiNamespace getVariable "JJP_JumpPack_UI_fuel") progressSetPosition _newFuel;
	};
	uiSleep .1;
};
player setVariable ["JJP_JumpPack_Refuelling", false];

_heat = player getVariable ["JJP_JumpPack_heat", 0];
_fuel = player getVariable ["JJP_JumpPack_fuel", 1];
if (_heat <= 0 and _fuel >= 1) then {
	82 cutText ["", "PLAIN", 0];
};