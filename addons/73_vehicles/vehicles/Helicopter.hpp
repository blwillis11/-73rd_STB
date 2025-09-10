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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "73_Aviator";
    hiddenSelectionsTextures[] =
    {
        "optre_vehicles_air\hornet\data\hornet_hull_standard_co.paa",
        "",
        "",
        ""
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
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
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
    };
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true,false] call STB73_fnc_RegisterThrusters;";
        };
        class FIR_AWS_Common_EH
        {
            init = "[_this select 0,'yes'] execVM ""FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
        };
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
        #include "cfg\PelicanActions.hpp"
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
        "73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa"
    };
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
             "[""Standard"",[""73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa""]]",
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    hiddenSelectionsTextures[]=
    {
        "73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa"
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
             "[""Standard"",[""73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa""]]",
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "73_Aviator";
    hiddenSelectionsTextures[]=
    {
        "73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa"
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
             "[""Standard"",[""73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa""]]",
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "73_Aviator";
    radarIcon="MA_HUD\textures\radar\vehicles\pelican.paa";
    radarIconScale=3;
    hiddenSelectionsTextures[]=
    {
        "73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa",
        "73_vehicles\data\Falcon\73rd_falcon_interior_co.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
        "73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa"
    };
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
             "[""Standard"",[""73_vehicles\data\Falcon\73rd_Falcon_Main_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_attachments_co.paa"",""73_vehicles\data\Falcon\73rd_falcon_interior_co.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"",""73_vehicles\data\Falcon\73rd_falcon_decal_ca.paa""]]",
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
    crew = "73_Aviator";
	class UserActions
	{
	    #include "cfg\UtilityActions.hpp"
		#include "cfg\ThrusterActions.hpp"
	};
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
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
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
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
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
    class EventHandlers: EventHandlers
    {
        class 73_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,false] call STB73_fnc_RegisterThrusters;";
        };
    };
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
    class UserActions
    {
        #include "cfg\UtilityActions.hpp"
        #include "cfg\ThrusterActions.hpp"
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
