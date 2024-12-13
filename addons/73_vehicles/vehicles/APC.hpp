class VES_M494_ORYX;
class 73_M494_Oryx: VES_M494_ORYX
{
    displayName="[73] M494 Oryx";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
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



class 73_IFV76_A:VES_IFV76_A
{
    displayName="[73] IFV-76 Honeybadger";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Honeybadger";
            Type = "IFV-76";
            cost = 1;

            priority = 1;
        };
    };
};

class VES_IFV76;
class 73_IFV76:VES_IFV76
{
    displayName="[73] APC-76 Honeybadger";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_CN_CO.paa",
        "V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_OD3_C_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Honeybadger";
            Type = "APC-76";
            cost = 1;

            priority = 1;
        };
    };
};

class VES_M412_IFV;
class 73_M412_IFV:VES_M412_IFV
{
    displayName="[73] M412 Bison IFV";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_I_CO.paa",
        "OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Bison";
            Type = "IFV";
            cost = 1;

            priority = 1;
        };
    };
};
class VES_M413_MGS;
class 73_M413_MGS:VES_M413_MGS
{
    displayName="[73] M413 Bison MGS";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_APCs_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_I_CO.paa",
        "OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
        "V_FZ_Ground_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "Bison";
            Type = "MGS";
            cost = 1;

            priority = 1;
        };
    };
};

