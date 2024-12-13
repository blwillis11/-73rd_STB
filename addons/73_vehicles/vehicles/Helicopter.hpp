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
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Hornet";
            Type = "CAP";
            cost = 1;

            priority = 2;
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
        "splits\splits_vehicles\pelican\data\hw2\body_co.paa",
        "splits\splits_vehicles\pelican\data\hw2\wings_and_gear_co.paa",
        "splits\splits_vehicles\pelican\data\hw2\weaponry_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Pelican";
            Type = "Standard";
            cost = 1;

            priority = 1;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Unarmed";
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Side Guns";
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front Gun";
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Falcon";
            Type = "Front + Side Guns";
            cost = 1;

            priority = 2;
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
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22L";
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22ML";
            cost = 1;

            priority = 2;
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
    class VehicleSpawnerInfo {
        class 73_AirSpawner
        {
            scope = 1;
            spawner= "73rd Aviation";
            vehicle = "Sparrowhawk";
            Type = "AV-22";
            cost = 1;

            priority = 2;
        };
    };
};
