_vehicles = ((_this select 0) getVariable ["STB73_Pelican_AttachedToVehiclesEffect",[]]);

if (
		(
			{
				(_x isKindOf "OPTRE_M808B_base") OR
                (_x isKindOf "OPTRE_M808B2") OR
                (_x isKindOf "OPTRE_M808S") OR
                (_x isKindOf "OPTRE_M12A1_LRV") OR
                (_x isKindOf "OPTRE_M12_LRV") OR
                (_x isKindOf "OPTRE_M12G1_LRV") OR
                (_x isKindOf "OPTRE_M12R_AA") OR
                (_x isKindOf "OPTRE_M12_FAV_APC") OR
                (_x isKindOf "OPTRE_M12_FAV") OR
                (_x isKindOf "OPTRE_M12_TD_ins") OR
                (_x isKindOf "OPTRE_M813_TT") OR
                (_x isKindOf "OPTRE_M413_base") OR
                (_x isKindOf "73_M494_Oryx") OR
                (_x isKindOf "OPTRE_M914_RV") OR
                (_x isKindOf "73_M808BM_MBT") OR
                (_x isKindOf "73_M875") OR
                (_x isKindOf "73_IFV76_A") OR
                (_x isKindOf "73_IFV76") OR
                (_x isKindOf "73_M412_IFV") OR
                (_x isKindOf "73_M413_MGS")

			} count _vehicles > 0
		)
) then {

	if (((getPosATL (_this select 0)) select 2) < 2) then {

		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>UNLOADING FAILED!</t><br/>-------------------------------------------<br/>Your landing gears must be raised to unload larger vehicles! Your landing gears will automatically raise when unloading large vehicles if you're flying above 2m.", "PLAIN DOWN", -1, true, true];
		playSound "FD_CP_Not_Clear_F";

	} else {

		(_this select 0) allowDamage false;
		player action ["LandGearUp", (_this select 0)];

		sleep 2;
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE UNLOADED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
		playSound "FD_Finish_F";

		{
			detach _x;
			_x setVelocity [0,0,-1];
			_x allowDamage false;
		} forEach _vehicles;

		sleep 0.5;

		{_x allowDamage true;} forEach _vehicles;
		(_this select 0) allowDamage true;
		(_this select 0) setVariable ["STB73_Pelican_AttachedToVehiclesEffect", [], true];

		};

} else {

	0 = (_this select 0) spawn OPTRE_fnc_PelicanLoad_UnloadAllSupplyPods;

};