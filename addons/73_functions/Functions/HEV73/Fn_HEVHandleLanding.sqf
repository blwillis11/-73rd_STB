/*
	OPTRE_fnc_HandleHEVLanding
	
	Description: Handles landing of HEVs, make sets drive vunrable to damaged after exit creates effects on landing.
	
	Author: Big_Wilk
	
	Return: Bool
	
	params:
	0: Object: Ment for HEVs
	
*/

(_this select 0) setVariable ["DMNS_HEV_DoorEjectedWanted", true, true]; // Allow exit addactions!

(_this select 0) addEventHandler ["HandleDamage", {
	if (isTouchingGround (_this select 0) or ((getPos (_this select 0)) select 2 < 100)) then {
		_hev = (_this select 0);
		_gunner = gunner _hev;
		_hev removeAllEventHandlers "HandleDamage";
		_hev setVelocity [0, 0, 0];
		_hev setVariable ["DMNS_HEV_Landed", true, true];
		playSound3d ["A3\Sounds_F\sfx\missions\vehicle_collision.wss", (_this select 0), false, getPos (_this select 0), 0.5, 1, 1000];
		if !(isPlayer _gunner) then {
			_hev lock false;
			0 = [_hev, round (random 1), true] spawn STB73_fnc_HEVDoor;
		} else {
			resetCamShake;
			addCamShake [40, 1.2, 50];

			if (!isNil "DMNS_HEV_CONTROL_KDEH") then {
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", DMNS_HEV_CONTROL_KDEH];
				player removeEventHandler ["killed", DMNS_HEV_CONTROL_KEH];
			};
		};
	};
}];

(_this select 0) addEventHandler ["GetOut", {
	resetCamShake;
	(_this select 2) allowDamage true;
	(_this select 0) removeAllEventHandlers "GetOut";
	(_this select 0) removeAllEventHandlers "HandleDamage";
	(_this select 0) setVariable ["DMNS_HEV_Landed", true, true];
}];

true