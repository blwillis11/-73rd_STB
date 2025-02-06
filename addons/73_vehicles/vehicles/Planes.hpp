class FIR_F35B_Blank2;

class 73_F35B_Standard : FIR_F35B_Blank2
{
    displayName="[73] F-35B Nocturne";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenselectionstextures[] =
    {
        "FIR_F35B_Armaverse\skin\Blank2\body_co.paa",
        "FIR_F35B_Armaverse\skin\Blank2\wing_co.paa"
    };

    FIR_F35B_Armaverse_custom_skin = 0;
    FIR_F35B_Armaverse_custom_code = "";
    FIR_F35B_Armaverse_custom_name = "";
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "F-35B";
            Type = "Nocturne";
            cost = 5;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""FIR_F35B_Armaverse\skin\Blank2\body_co.paa"",""FIR_F35B_Armaverse\skin\Blank2\wing_co.paa""]]",
            };
        };
    };
};

class FIR_F22_Blank2;
class 73_F22_Standard: FIR_F22_Blank2
{
    displayName="[73] F-22 Aether";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";

    hiddenselectionstextures[] = {"FIR_F22\skin\blank2\body_co.paa","FIR_F22\skin\blank2\wing_co.paa",""};

    fir_f22_custom_name = "";
    fir_f22_custom_code = "";
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "F-22";
            Type = "Aether";
            cost = 5;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""FIR_F22\skin\blank2\body_co.paa"",""FIR_F22\skin\blank2\wing_co.paa"",""""]]",
            };
        };
    };
};

class FIR_EA18G_Blank;

class 73_EA18G_Standard: FIR_EA18G_Blank
{
    displayName="[73] EA-18G Maverick";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Planes_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";

	hiddenselectionstextures[] =
	{
        "\FLAN_EA18G\skin\Blank\nose_co.paa",
        "\FLAN_EA18G\skin\Blank\body_co.paa",
        "\FLAN_EA18G\skin\Blank\fuse_co.paa",
        "\FLAN_EA18G\skin\Blank\leftwing_co.paa",
        "\FLAN_EA18G\skin\Blank\rightwing_co.paa"
	};

	flan_ea18g_custom_skin = 0;
    flan_ea18g_custom_name = "";
    flan_ea18g_custom_code = "";
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "EA-18G";
            Type = "Maverick";
            cost = 5;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""\FLAN_EA18G\skin\Blank\nose_co.paa"",""\FLAN_EA18G\skin\Blank\body_co.paa"",""\FLAN_EA18G\skin\Blank\fuse_co.paa"",""\FLAN_EA18G\skin\Blank\leftwing_co.paa"",""\FLAN_EA18G\skin\Blank\rightwing_co.paa""]]",
            };
        };
    };
};