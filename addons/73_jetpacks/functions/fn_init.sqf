#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["Jerry's Jumppack", "JJP_JumpPack_Use", ["Jump Pack Use", "Hold this key to activate JumpPack"], {
    [true] spawn JJP_JumpPack_fnc_JumpPack;
}, {
    [false] spawn JJP_JumpPack_fnc_JumpPack;
}, [DIK_SPACE, [true, false, false]]] call CBA_fnc_addKeybind;

["Jerry's Jumppack", "JJP_JumpPack_Toggle", ["Jump Pack Toggle", "Press this key to toggle activate the JumpPack"], {
    [!(JJP_JumpPack_ON)] spawn JJP_JumpPack_fnc_JumpPack;
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

// Removing fall damage

// Default values
JJP_JumpPack_stuckCount = 0;
JJP_JumpPack_lastY = -1.45;
JJP_JumpPack_timesStuck = 0;


[] spawn {
    waitUntil {time > 5};
    if (hasInterface) then {
        waitUntil {sleep 1; player == player};
        waitUntil {sleep 1; alive player};
        player removeAllEventHandlers "HandleDamage"; 
        player addEventHandler ["HandleDamage", { 
            private _damage = _this select 2; 
            private _type = _this select 4;
            if (backpack player == "JJP_JumpPack" AND _type == "") then {
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