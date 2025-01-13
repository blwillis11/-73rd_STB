/*
	OPTRE_fnc_PlayerHEVEffectsUpdate_ReEntrySounds

	Description: Function is designed to be executed only from inside of the HEV scripts, do not execute it directly.

	Author: Big_Wilk

	Return: none

	Type: spawn
*/

if (isDedicated OR (typeOf vehicle player != "DMNS_SOEIV")) exitWith {};

_endHeight = _this select 0;
_hev = vehicle player;

playSound "OPTRE_Sounds_ReEntryBuildUp";

while {(!(isTouchingGround _hev) AND (alive player) AND (getPos _hev select 2) > _endHeight) OR (_hev getVariable ["DMNS_HEV_Landed",false])} do {
	sleep 0.9;
	playSound "OPTRE_Sounds_ReEntryLoop";
};
