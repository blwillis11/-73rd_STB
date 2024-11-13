class CfgPatches
{
    class 73_vehicles
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_Oryx",
            "73_IFV76",
            "73_APC76",
            "73_M875",
            "73_HDV134_Resupply",
            "73_HDV134_TT",
            "73_HDV134_TT_C",
            "73_M19_GMG",
            "73_M19_HMG",
            "73_M808BM_MBT",
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
			"OPTRE_UNSC_Units_Army",
            "OPTRE_FunctionsLibrary",
            "73_units"
			
        };
    };
};


class CfgFunctions {

    
};

class CfgVehicles {

    class VES_M494_ORYX;

    class 73_Oryx: VES_M494_ORYX 
    {
        displayName="[73] M494 Oryx";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
        {
            "\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_A_CO",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_T_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa",
			"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
        };
    };
    
    class VES_IFV76_A;

    class 73_IFV76:VES_IFV76_A
    {
        displayName="[73] IFV-76 Honeybadger";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa"
        };
    };

    class VES_IFV76;

    class 73_APC76:VES_IFV76
    {
        displayName="[73] APC-76 Honeybadger";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scope=2;
        scopeCurator=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa",
            "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa"
        };
    };

    class VES_M875_SPH;

    class 73_M875:VES_M875_SPH
    {
        displayName="[73] M875 Scorpion [SPH]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_ART_CO.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_DET1_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa"
		};
    };

    class VES_HDV134_Resupply;

    class 73_HDV134_Resupply:VES_HDV134_Resupply
    {
        displayName="[73] HDV-134 Buffalo [Resupply]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
    };

    class VES_HDV134_TT;

    class 73_HDV134_TT:VES_HDV134_TT
    {
        displayName="[73] HDV-134 Buffalo [TT]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
    };
    class VES_HDV134_TT_C;

    class 73_HDV134_TT_C:VES_HDV134_TT_C
    {
        displayName="[73] HDV-134 Buffalo [TT-C]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
			"\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_C_CO.paa"
		};
    };

    class VES_M19_GMG;

    class 73_M19_GMG:VES_M19_GMG
    {
        displayName="[73] M19 Hyena [GMG]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_OD3_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_BLK_T_CO.paa"
		};
    };

    class VES_M19_HMG;

    class 73_M19_HMG:VES_M19_HMG
    {
        displayName="[73] M19 Hyena [HMG]";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_OD3_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Mattock\V_M19_BLK_T_CO.paa"
		};
    }

    class VES_M808BM_MBT;

    class 73_M808BM_MBT:VES_M808BM_MBT
    {
        displayName="[73] M808B/M Scorpion";
        author="73rd S-4 Team"
        editorCategory = "73_STB";
        scopeCurator=2;
        scope=2;
        crew = "73_ODST_Rifleman";
        armor=575;
        armorStructural=5;
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
            "V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa",
            "V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa",
            "OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
            "OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa",
            "V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"
        };
    };
};