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
    class VehicleSpawnerInfo {
    class 73_GroundSpawner
    {
        scope = 1;
        spawner= "73rd Mechanized";
        vehicle = "Oryx";
        Type = "Standard";
        cost = 1;

        priority = 1;
        liveries[]=
        {
         "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_A_CO"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_N_CA.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_T_CO.paa"",""\V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"",""\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa""]]",
        };
    };
};
};

