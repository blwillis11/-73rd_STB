class VES_M875_SPH;

class 73_M875:VES_M875_SPH
{
    displayName="[73] M875 Scorpion [SPH]";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
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
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Scorpion";
            Type = "SPH";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_ART_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_DET1_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa""]]",
            };
        };
    };
};
class VES_M808BM_MBT;

class 73_M808BM_MBT:VES_M808BM_MBT
{
    displayName="[73] M808B/M Scorpion";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
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
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Scorpion";
            Type = "MBT";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa"",""V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa""]]",
            };
        };
    };
};
class VES_M808B2_MBT;

class 73_M808B2_MBT:VES_M808B2_MBT
{
    displayName="[73] M808B2 Sun Devil";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Tanks_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    armor=575;
    armorStructural=5;
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Sun Devil";
            Type = "AA";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa"",""V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa""]]",
            };
        };
    };
};