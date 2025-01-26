params ["_team", "_additional", "_setAdditonal", "_teamLead", "_Platoon"];

// private _uid = getPlayerUID player;
// Put player ID's here for players who have access to command nets
// Keeps people off channels they are not supposed to be on
private _Access = 1;

_FTName = ["ACE", "Dart 1-1", "Dart 1-2", "Dart 1-3"];
_FreqTeam = [];
_DescTeam = [];
// SR channel 1 = 120.1
// SR channel 2 = 120.2
// SR channel 3 = 120.3
// Overflow SR channel = 120.4
// Medic SR Ad = 220.1
// Platoon net = 120
// Air net = 35
// Ground LR  = 70
// First Platoon
if (_Platoon == 100) then {
	_FreqTeam = ["111.1", "111.2", "111.3", "111.4", "220.1", "111", "35", "70"];
	_DescTeam = ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Overflow Chl", "Plt Med Net", "Plt 1 Net", "Air Net", "Cmpy Net"];
};
// Second Platoon
if (_Platoon == 200) then {
	_FreqTeam = ["112.1", "112.2", "112.3", "112.4", "221.1", "112", "35", "70"];
	_DescTeam = ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Overflow Chl", "Plt Med Net", "Plt 2 Net", "Air Net", "Cmpy Net"];
};
// Third Platoon
if (_Platoon == 300) then {
	_FreqTeam = ["122.1", "122.2", "122.3", "122.4", "222.1", "122", "35", "70"];
	_DescTeam = ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Overflow Chl", "Plt Med Net", "Plt 3 Net", "Air Net", "Cmpy Net"];
};
// Air Platoon
if (_Platoon == 400) then {
	_FreqTeam = ["260", "230", "120", "121", "122", "250", "251", "252"];
	_DescTeam = ["Air Net 1", "Air Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"];
};
// Armoured Platoon
if (_Platoon == 500) then {
	_FreqTeam = ["360", "330", "120", "121", "122", "250", "251", "252"];
};
// Recon Platoon
if (_Platoon == 600) then {
	_FreqTeam = ["360", "330", "120", "121", "122", "250", "251", "252"];
};
// Bco First Platoon
if (_Platoon == 700) then {
	_FreqTeam = ["121.1", "121.2", "121.3", "121.4", "220.1", "111", "35", "70"];
	_DescTeam = ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Overflow Chl", "Plt Med Net", "Plt 1 Net", "Air Net", "Cmpy Net"];
};
// Bco Second Platoon
if (_Platoon == 800) then {
	_FreqTeam = ["122.1", "122.2", "122.3", "122.4", "221.1", "112", "35", "70"];
	_DescTeam = ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Overflow Chl", "Plt Med Net", "Plt 2 Net", "Air Net", "Cmpy Net"];
};
// Bco Third Platoon
if (_Platoon == 900) then {
	_FreqTeam = ["123.1", "123.2", "123.3", "123.4", "222.1", "122", "35", "70"];
	_DescTeam = ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Overflow Chl", "Plt Med Net", "Plt 3 Net", "Air Net", "Cmpy Net"];
};
// _FreqTeam = ["120.1", "120.2", "120.3", "120.4", "220.1", "120", "35"];
// command radio 152
_commandRadioType = 1;
_regularRadioType = 2;

_teamLeadStatus = 1;
_teamLeadNonStatus = 2;

if (playerSide in [west]) then {
	_currentRadio = getUnitLoadout player param [9, []] param [2, ""];
	if (_currentRadio == "") then {
		if (_teamLead == _teamLeadStatus) then {
			player linkItem "TFAR_anprc152";
			sleep 2;
		} else {
			player linkItem "TFAR_anprc152";
			sleep 2;
		};
	} else {
		_currentRadioType = _regularRadioType;
		_currentRadio = _currentRadio splitString "_";
		{
			if (_x == "anprc152") then {
				_currentRadioType = _commandRadioType;
			};
		} forEach _currentRadio;
		if (_currentRadioType == _commandRadioType && _teamLead == _teamLeadNonStatus) then {
			player linkItem "TFAR_anprc152";
			sleep 2;
		};
		if (_currentRadioType == _regularRadioType && _teamLead == _teamLeadStatus) then {
			player linkItem "TFAR_anprc152";
			sleep 2;
		};
	};
	   // _FreqTeam is array of team frequencies
	[(call TFAR_fnc_activeSwradio), 1, (_FreqTeam select 0)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 2, (_FreqTeam select 1)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 3, (_FreqTeam select 2)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 4, (_FreqTeam select 3)] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 5, "399.5"] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwradio), 6, "379.5"] call TFAR_fnc_setChannelFrequency;
	[(call TFAR_fnc_activeSwRadio), -1] call TFAR_fnc_setAdditionalSwChannel;

	[call TFAR_fnc_activeSwRadio, _team] call TFAR_fnc_setSwChannel;
	   // set additonals if required
	   // Medic
	if (_setAdditonal == 200) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
		[(call TFAR_fnc_activeSwradio), 6, "389.5"] call TFAR_fnc_setChannelFrequency;
		       // format ["%1 radio setup is complete! Team %2 Medic primary freq %3 additional freq %4", name player, (_FTName select _team), (_FreqTeam select _team), 
		       // (_FreqTeam select _additional)] remoteExec ["hint"];
	};
	   // Team leader
	if (_setAdditonal == 300 && _Access == 1) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 6, (_FreqTeam select 5)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 7, (_FreqTeam select 6)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 8, (_FreqTeam select 7)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
		       // format ["%1 radio setup is complete! Team %2 Leader primary freq %3 additional freq %4", name player, (_FTName select _team), (_FreqTeam select _team), 
		       // (_FreqTeam select _additional)] remoteExec ["hint"];
	};
	   // JTAC
	if (_setAdditonal == 400 && _Access == 1) then {
		[(call TFAR_fnc_activeSwradio), 5, (_FreqTeam select 4)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 6, (_FreqTeam select 5)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 7, (_FreqTeam select 6)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwradio), 8, (_FreqTeam select 7)] call TFAR_fnc_setChannelFrequency;
		[(call TFAR_fnc_activeSwRadio), _additional] call TFAR_fnc_setAdditionalSwChannel;
		       // format ["%1 radio setup is complete! Team %2 JTAC primary freq %3 additional freq %4", name player, (_FTName select _team), (_FreqTeam select _team), 
		       // (_FreqTeam select _additional)] remoteExec ["hint"];
	};
	   // Member
	if (_setAdditonal == 100) then {
		// format ["%1 radio setup is complete! Team %2 member primary freq %3 no additonal", name player, (_FTName select _team), (_FreqTeam select _team)] remoteExec ["hint"];
	};

	if (_Platoon == 100) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF", "Plt Med Net", "Plt 1 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF", "Plt Med Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Alpha 1 Act", "Alpha 1-1", "Alpha 1-2", "Alpha 1 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == 200) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF", "Plt Med Net", "Plt 2 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF", "Plt Med Net", "Plt 2 Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Alpha 2 Act", "Alpha 2-1", "Alpha 2-2", "Alpha 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == 300) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 2 OF", "Plt Med Net", "Plt 3 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 2 OF", "Plt Med Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Alpha 3 Act", "Alpha 3-1", "Alpha 3-2", "Alpha 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};

	if (_Platoon == 400) then {
		[true, ["Air Net 1", "Air Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	if (_Platoon == 500) then {
		[true, ["Mech Net 1", "Mech Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	if (_Platoon == 600) then {
		[true, ["Recon Net 1", "Recon Net 2", "Alpha 1", "Alpha 2", "Alpha 3", "Bravo 1", "Bravo 2", "Bravo 3"]] call Rev_TFAR_fnc_setDefaultScribbles;
	};
	if (_Platoon == 700) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF", "Plt Med Net", "Plt 1 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF", "Plt Med Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Bravo 1 Act", "Bravo 1-1", "Bravo 1-2", "Bravo 1 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == 800) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF", "Plt Med Net", "Plt 2 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF", "Plt Med Net", "Plt 2 Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Bravo 2 Act", "Bravo 2-1", "Bravo 2-2", "Bravo 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
	if (_Platoon == 900) then {
		if (_setAdditonal == 300 || _setAdditonal == 400) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 2 OF", "Plt Med Net", "Plt 3 Net", "Air Net", "Cmpy Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 200) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 2 OF", "Plt Med Net"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
		if (_setAdditonal == 100) then {
			[true, ["Bravo 3 Act", "Bravo 3-1", "Bravo 3-2", "Bravo 2 OF"]] call Rev_TFAR_fnc_setDefaultScribbles;
		};
	};
};