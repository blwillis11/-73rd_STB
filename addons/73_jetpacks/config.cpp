class CfgPatches
{
    class 73_jetpacks
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
        }; 
        weapons[] = 
        {
        }; 
		vehicles[] =
		{
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        { 
			"OPTRE_Weapons",
			"OPTRE_Weapons_Backpacks",
			
        };
    };
};

class CfgVehicles
{
	// Jetpacks
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_S12_SOLA_Jetpack_ON;

    class JJP_JumpPack: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[73] JetPack";
        maximumLoad=350;
    };

    class JJP_JumpPack_on: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[73] JetPack";
        maximumLoad=350;
    };
    class JJP_JumpPack_LR: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[73] JetPack";
        maximumLoad=350;
    };

    class JJP_JumpPack_on_LR: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[73] JetPack";
        maximumLoad=350;
    };
};

class CfgFunctions
{
	class JJP_JumpPack
	{
		class Functions
		{
			file = "73_jetpacks\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class JumpPack
			{
			};
			class EventHandlers
			{
			};
			class JumpPackRefuel
			{
			};
			class RoofStuckCheck
			{
			};
		};
	};
};

class RscTitles
{
	#include "ui\jumpPackUI.hpp"
};