class OPTRE_UNSC_hornet_CAS;
class 73_AV14_Hornet_CAS: OPTRE_UNSC_hornet_CAS
{
    displayName = "[73] AV-14 Hornet [CAS]";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Hornet";
            Type = "CAS";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};
class OPTRE_UNSC_hornet_CAP;
class 73_AV14_Hornet_CAP: OPTRE_UNSC_hornet_CAP
{
    displayName = "[73] AV-14 Hornet [CAP]";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Hornet";
            Type = "CAP";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa"","""","""",""""]]",
            };
        };
    };
};

class Splits_UNSC_D77_TC_Pelican;
class 73_D77_TC_Pelican: Splits_UNSC_D77_TC_Pelican
{
    displayName = "[73] D77-TC Pelican";
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "73_vehicles\data\Pelican\body_co.paa",
        "73_vehicles\data\Pelican\wings_and_gear_co.paa",
        "73_vehicles\data\Pelican\weaponry_co.paa"
    };
    class textureSources
    {};
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Pelican";
            Type = "Standard";
            cost = 3;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""73_vehicles\data\Pelican\body_co.paa"",""73_vehicles\data\Pelican\wings_and_gear_co.paa"",""73_vehicles\data\Pelican\weaponry_co.paa""]]",
            };
        };
    };
    class UserActions
    {
        class PelLift_LoadVehicle
        {
            userActionID = 6;
            displayName = "Load Vehicle";
            displayNameDefault = "Load Vehicle";
            textToolTip = "Load Vehicle";
            position = "cargo_door_handle";
            showWindow = 0;
            radius = 15;
            priority = 2;
            onlyForPlayer = 0;
            condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""STB73_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
            statement = "0 = [this,vehicle player] spawn STB73_fnc_PelicanLoadValidate;";
        };
        class PelLift_UnLoadVehicle
        {
            userActionID = 7;
            displayName = "Unload Vehicle / Supply Pods";
            displayNameDefault = "Unload Vehicle / Supply Pods";
            textToolTip = "Unload Vehicle / Supply Pods";
            position = "cargo_door_handle";
            showWindow = 0;
            radius = 5;
            priority = 3;
            onlyForPlayer = 0;
            condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""STB73_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
            statement = "0 = [this] spawn STB73_fnc_PelicanUnLoadValidate;";
        };
        class PelLift_LoadPodMenu
        {
            userActionID = 9;
            displayName = "Load Supply Pods";
            displayNameDefault = "Load Supply Pods";
            textToolTip = "Load Supply Pods";
            position = "cargo_door_handle";
            showWindow = 0;
            radius = 15;
            priority = 2;
            onlyForPlayer = 0;
            condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
            //condition = "( vehicle player != this AND vehicle player != this AND player == driver vehicle player AND (vehicle player) isKindOf ""OPTRE_cart_base"" ) ";
            statement = "Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
        };
        class PelLift_OpenDetachPodMenu
        {
            userActionID = 8;
            displayName = "Detach Individual Supply Pod Menu";
            displayNameDefault = "Detach Individual Supply Pod Menu";
            textToolTip = "Detach Individual Supply Pod Menu";
            position = "cargo_door_handle";
            showWindow = 0;
            radius = 5;
            priority = 3;
            onlyForPlayer = 0;
            condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
            statement = "0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
        };
        class RampOpen
        {
            userActionID = 50;
            displayName = "Close Ramp";
            displayNameDefault = "Close Ramp";
            textToolTip = "Close Ramp";
            position = "cargo_door_handle";
            showWindow = 0;
            radius = 100000;
            priority = 4;
            onlyForPlayer = 0;
            condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
            statement = "this animate [""cargoDoor_1"",1]";
            animPeriod = 5;
        };
        class RampClose : RampOpen
        {
            userActionID = 51;
            displayName = "Open Ramp";
            displayNameDefault = "Open Ramp";
            textToolTip = "Open Ramp";
            priority = 4;
            condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
            statement = "this animate [""cargoDoor_1"",0]";
            animPeriod = 5;
        };
        class ThrusterEngage
        {
            userActionID = 122;
            displayName = "ENGAGE FORWARD THRUSTERS";
            displayNameDefault = "ENGAGE FORWARD THRUSTERS";
            textToolTip = "ENGAGE FORWARD THRUSTERS";
            position = "cargo_door_handle";
            priority = 10;
            radius = 3;
            onlyForPlayer = 0;
            condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
            statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
            animPeriod = 4;
        };
        class ThrusterDisengage : ThrusterEngage
        {
            userActionID = 123;
            displayName = "DISENGAGE FORWARD THRUSTERS";
            displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
            textToolTip = "DISENGAGE FORWARD THRUSTERS";
            condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
            statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
        };
        class AirbrakeEngage: ThrusterEngage
        {
            userActionID = 124;
            displayName = "ENGAGE AIRBRAKES";
            displayNameDefault = "ENGAGE AIRBRAKES";
            textToolTip = "ENGAGE AIRBRAKES";
            condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
            statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
        };
    };
};

class OPTRE_UNSC_falcon;

class 73_UNSC_falcon:OPTRE_UNSC_falcon
{
    displayName = "[73] UH-144 Falcon [Unarmed]";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa"
    };

    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Unarmed";
            cost = 0;

            priority = 2;
            liveries[]=
            {
             "[""\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa""]]",
            };
        };
    };
};

class OPTRE_UNSC_falcon_S;

class 73_UNSC_falcon_S:OPTRE_UNSC_falcon_S
{
    displayName = "[73] UH-144S Falcon";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Side Guns";
            cost = 1;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa""]]",
            };
        };
    };
};
class OPTRE_UNSC_MH_144_Falcon;

class 73_UNSC_MH_144_Falcon:OPTRE_UNSC_MH_144_Falcon
{
    displayName = "[73] MH-144 Falcon";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\decal\unsc_var2\falcon_decal_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front Gun";
            cost = 1;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa""]]",
            };
        };
    };
};
class OPTRE_UNSC_MH_144S_Falcon;

class 73_UNSC_MH_144S_Falcon:OPTRE_UNSC_MH_144S_Falcon
{
    displayName = "[73] MH-144S Falcon";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
        "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front + Side Guns";
            cost = 1;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa"",""\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\decal\unsc_var1\falcon_decal_ca.paa""]]",
            };
        };
    };
};

class OPTRE_AV22_Sparrowhawk;

class 73_AV22_Sparrowhawk:OPTRE_AV22_Sparrowhawk
{
    displayName = "[73] AV-22M Sparrowhawk";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22M";
            cost = 2;
            hiddenSelectionsTextures[]=
            {
                "OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa",
                "OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa"
            };
            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa""]]",
            };
        };
    };
};
class OPTRE_AV22A_Sparrowhawk;

class 73_AV22A_Sparrowhawk:OPTRE_AV22A_Sparrowhawk
{
    displayName = "[73] AV-22L Sparrowhawk";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22L";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa""]]",
            };
        };
    };
};
class OPTRE_AV22B_Sparrowhawk;

class 73_AV22B_Sparrowhawk:OPTRE_AV22B_Sparrowhawk
{
    displayName = "[73] AV-22ML Sparrowhawk";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22ML";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa""]]",
            };
        };
    };
};
class OPTRE_AV22C_Sparrowhawk;

class 73_AV22C_Sparrowhawk:OPTRE_AV22C_Sparrowhawk
{
    displayName = "[73] AV-22 Sparrowhawk";
    author="73rd S-4 Team"
    editorCategory = "73_STB";
    editorSubcategory = "73_Helicopters_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa",
        "OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22";
            cost = 2;

            priority = 2;
            liveries[]=
            {
             "[""Standard"",[""OPTRE_Vehicles_Air\sparrowhawk\data\body_01_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_02_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_03_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_04_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\body_05_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\autocannon_co.paa"",""OPTRE_Vehicles_Air\sparrowhawk\data\feed_autocannon_co.paa""]]",
            };
        };
    };
};
