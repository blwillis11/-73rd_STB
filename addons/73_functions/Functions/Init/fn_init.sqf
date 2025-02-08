STB73_ThrusterMultiplier = 20;

["73rd Vehicles", "STB73_Vehicles_ThrustersUp", ["Thrusters Up", "Thrusters go up a tier (none > forward > afterburners)"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if ((_unit != driver _vic) or !(alive _vic) or !(isEngineOn _vic) or (((getPosATL _vic) select 2) < 1)) exitWith {};
	[_vic] call STB73_fnc_increaseThrusterLevel;
}, {}, [0xF4, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "STB73_Vehicles_ThrustersDown", ["Thrusters Down", "Thrusters go down a tier (afterburners > forward > none)"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	[_vic] call STB73_fnc_decreaseThrusterLevel;
}, {}, [0xF3, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "STB73_Vehicles_AirBrakes", ["Air Brakes", "Airbrake button when over 50km"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_unit == _vic or _unit != driver _vic || !(alive _vic)) exitWith {};
	if ((speed _vic) < 50 or !(_vic getVariable ["STB73_Thrusters_Usable", false])) exitWith {};
	[_vic] call STB73_fnc_engageAirbrakes;
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "STB73_Vehicles_ManualFireToggle", ["Manual Fire (Toggle)", "Swap to either manual fire or not"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if (isManualFire _vic) then {
		_unit action ["MANUALFIRECANCEL", _vic];
		hint "MANUAL FIRE CANCELLED";
	} else {
		_unit action ["MANUALFIRE", _vic];
		hint "MANUAL FIRE ACTIVATED";
	};
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["73rd Vehicles", "STB73_Vehicles_OpenI_TGT_System", ["Open I-TGT System", "Allows quick access to the I-TGT System"], {
	private _unit = [player, remoteControlled player] select (isRemoteControlling player);
	private _vic = (vehicle _unit);
	if (_vic == _unit) exitWith {};
	if (!((driver _vic) isEqualTo _unit)) exitWith {};
	_vic execVM "\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf";
}, {}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["CAManBase", "hitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
	private _increase = getNumber (configFile >> "CfgAmmo" >> (_ammo select 4) >> "dosage");
	if (_increase <= 0) exitWith {};

	private _initialDosage = _target getVariable ["dosage", 0];

	if (_initialDosage > 0) then {
		private _lastDosage = _target getVariable ["lastDosage", ([time, serverTime] select isMultiplayer)];
		private _timeSince = ([time, serverTime] select isMultiplayer) - _lastDosage;

		_initialDosage = _initialDosage - ((_timeSince/30) * 0.1);
		if (_initialDosage < 0) then {
			_initialDosage = 0;
		};
	};

	private _dosage = _initialDosage + _increase;
	if (_dosage >= 1) then {
		[_target, true, floor(_dosage * 90)] call ace_medical_fnc_setUnconscious;
	};
	_target setVariable ["lastDosage", ([time, serverTime] select isMultiplayer), true];
	_target setVariable ["dosage", _dosage, true];
}] call CBA_fnc_addClassEventHandler;

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["73rd Jumpack", "STB73_JumpPack_Use", ["Jump Pack Use", "Hold this key to activate JumpPack"], {
    [true] spawn STB73_JumpPack_fnc_JumpPack;
}, {
    [false] spawn STB73_JumpPack_fnc_JumpPack;
}, [DIK_SPACE, [true, false, false]]] call CBA_fnc_addKeybind;

["73rd Jumpack", "STB73_JumpPack_Toggle", ["Jump Pack Toggle", "Press this key to toggle activate the JumpPack"], {
    [!(STB73_JumpPack_ON)] spawn STB73_JumpPack_fnc_JumpPack;
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

// Removing fall damage

// Default values
STB73_JumpPack_stuckCount = 0;
STB73_JumpPack_lastY = -1.45;
STB73_JumpPack_timesStuck = 0;


[] spawn {
    waitUntil {time > 5};
    if (hasInterface) then {
        waitUntil {sleep 1; player == player};
        waitUntil {sleep 1; alive player};
        player removeAllEventHandlers "HandleDamage"; 
        player addEventHandler ["HandleDamage", { 
            private _damage = _this select 2; 
            private _type = _this select 4;
            if (backpack player == "STB73_JumpPack" AND _type == "") then {
                if(_damage > 0.3) then {
                     _this set [2,(_damage - 0.3)];
                     _this call ACE_medical_engine_fnc_handleDamage; 
                } else { 
                    0; 
                }; 
            } else { 
                _this call ACE_medical_engine_fnc_handleDamage; 
            };
        }];
    };
};