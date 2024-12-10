_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {

	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base" or _veh isKindOf "73_M875") : {
		_veh attachTo [_pelican,[0,-7.2, -0.37105]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L" or _veh isKindOf "73_M808BM_MBT") :
	{
		_veh attachTo [_pelican,[0,-7.2, -2.7805]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "73_M19_GMG" or _veh isKindOf "73_M19_HMG") : {
		_veh attachTo [_pelican,[0,-4.50,0.25]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican,[0,-4.25,0.70]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494" or _veh isKindOf "73_M494_Oryx") : {
		_veh attachTo [_pelican,[0,-7.2, -2.67105]];
		_loaded = true;
	};
	case (_veh isKindOf "B_T_AFV_Wheeled_01_up_cannon_F" or _veh isKindOf "B_T_AFV_Wheeled_01_cannon_F" or _veh isKindOf "LM_OPCAN_MGS_MC_WDL" or _veh isKindOf "LM_OPCAN_MGS_AR_WDL" or _veh isKindOf "LM_OPCAN_MGS_AR_MIX" or _veh isKindOf "LM_OPCAN_MGS_AR_DES") : {
		_veh attachTo [_pelican,[0,-6.2, -0.17105]];
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_Silverback_base" or _veh isKindOf "DMNS_Silverback_FAV" or _veh isKindOf "DMNS_Silverback_Armoured_FAV" or _veh isKindOf "DMNS_Silverback_LRV" or _veh isKindOf "DMNS_Silverback_TOW" or _veh isKindOf "DMNS_Silverback_Armoured_TOW") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_Bulldog_base" or _veh isKindOf "DMNS_Bulldog_FAV" or _veh isKindOf "DMNS_Bulldog_LRV_MG" or _veh isKindOf "DMNS_Bulldog_LRV_AGL") : {
		_veh attachTo [_pelican,[0,-3.6,0.30]];
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_M511_Springbok_base" or _veh isKindOf "DMNS_M511_Springbok_APC" or _veh isKindOf "DMNS_M511_Springbok_IFV" or _veh isKindOf "DMNS_M511_Springbok_MGS" or _veh isKindOf "DMNS_M511_Springbok_AA") : {
		_veh attachTo [_pelican,[0,-6.2, -0.17105]];
		_loaded = true;
	};
    case (_veh isKindOf "73_IFV76_A") : {
        _veh attachTo [_pelican,[0,-6,-0.20]];
        _veh setDir 180;
        _loaded = true;
    };
    case (_veh isKindOf "73_IFV76") : {
        _veh attachTo [_pelican,[0,-6,-0.20]]; //[0,-6.5,0.9]
        _veh setDir 180;
        _loaded = true;
    };
	/*case (_veh isKindOf "OPTRE_falcon_base") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_hornet_base") : {
		_veh attachTo [_pelican,[0,-5,-0.35]];
		_loaded = true;
	};*/
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
};

if (_loaded) then {
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
