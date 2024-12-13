_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {
	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base" or _veh isKindOf "73_M875") : {
		_veh attachTo [_pelican,[0,-9.5, -1.3]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L" or _veh isKindOf "73_M808BM_MBT") :
	{
		_veh attachTo [_pelican,[0,-9.5, -1.75]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "73_M19_GMG" or _veh isKindOf "73_M19_HMG") : {
		_veh attachTo [_pelican,[0,-6.5,-1.0]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_pelican,[0,-6.5,-0.25]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494" or _veh isKindOf "73_M494_Oryx") : {
		_veh attachTo [_pelican,[0,-7.2, -2.67105]];
		_loaded = true;
	};
    case (_veh isKindOf "73_IFV76_A") : {
        _veh attachTo [_pelican,[0,-8,-0.40]];
        _veh setDir 180;
        _loaded = true;
    };
    case (_veh isKindOf "73_M412_IFV") : {
        _veh attachTo [_pelican,[0,-8,-0.60]];
        _veh setDir 180;
        _loaded = true;
    };
    case (_veh isKindOf "73_M413_MGS") : {
        _veh attachTo [_pelican,[0,-8,-0.60]];
        _veh setDir 180;
        _loaded = true;
    };
    case (_veh isKindOf "73_IFV76") : {
        _veh attachTo [_pelican,[0,-8,-0.20]];
        _loaded = true;
        _veh setDir 180;
    };
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f") : {
		_veh attachTo [_pelican,[0,-4.8,-0.1]];
		_loaded = true;
	};
};

if (_loaded) then {
	_pelican setVariable ["STB73_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
