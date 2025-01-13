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
			"JJP_JumpPack"
			
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
        displayName="[73] JumpPack";
        maximumLoad=350;
    };

    class JJP_JumpPack_on: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[73] JumpPack";
        maximumLoad=350;
    };
    class JJP_JumpPack_LR: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[73] JumpPack";
        maximumLoad=350;
    };

    class JJP_JumpPack_on_LR: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[73] JumpPack";
        maximumLoad=350;
    };
};

class CfgFunctions
{
};

class RscTitles
{
};