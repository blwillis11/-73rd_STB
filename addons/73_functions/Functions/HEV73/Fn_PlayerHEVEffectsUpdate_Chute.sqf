/*
	OPTRE_fnc_PlayerHEVEffectsUpdate_Chute

	Description: Function is designed to be executed only from inside of the HEV scripts, do not execute it directly.

	Author: Big_Wilk

	Return: none

	Type: call
*/

if (isDedicated OR (typeOf vehicle player != "DMNS_SOEIV")) exitWith {};

(vehicle player) disableCollisionWith (_this select 0);

playSound "DMNS_Sounds_HEV_Chute";
addCamShake [20, 3, 20];
