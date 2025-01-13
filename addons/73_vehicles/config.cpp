class CfgPatches
{
    class 73_vehicles
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_M494_Oryx",//Load/unload
            "73_IFV76",//Load/unload
            "73_IFV76_A",//Load/unload
            "73_M875",//Load/unload
            "73_HDV134_Resupply",//Load/unload
            "73_HDV134_TT",//Load/unload
            "73_HDV134_TT_C",//Load/unload
            "73_M19_GMG",//Load/unload
            "73_M19_HMG",//Load/unload
            "73_M808BM_MBT",//Load/unload
            "73_D77_TC_Pelican",
            "73_M12",//Load/unload
            "73_M12_LRV",//Load/unload
            "73_M12G1_LRV",//Load/unload
            "73_M12A1_LRV",//Load/unload
            "73_M12R_AA",//Load/unload
            "73_M12_APC",//Load/unload
            "73_M813_TT",//Load/unload
            "73_UNSC_falcon_S",
            "73_UNSC_falcon",
            "73_UNSC_MH_144_Falcon",
            "73_UNSC_MH_144S_Falcon",
            "73_AV22_Sparrowhawk",
            "73_AV22A_Sparrowhawk",
            "73_AV22B_Sparrowhawk",
            "73_AV22C_Sparrowhawk",
            "73_M413_MGS",//Load/unload
            "73_M412_IFV",//Load/unload
            "73_F35B_Standard",
            "73_F22_Standard",
            "73_EA18G_Standard",
            "73_M511_Springbok_APC",//Load/unload
            "73_M511_Springbok_IFV",//Load/unload
            "73_M511_Springbok_MGS",//Load/unload
            "73_M511_Springbok_AA",//Load/unload
            "73_AV14_Hornet_CAS",
            "73_AV14_Hornet_CAP",
            "73_M808BMk2",//Load/unload
            "73_M914_TD",//Load/unload
            "73_Hammerhead_Repair",//Load/unload
            "73_POGV_RCWS",
            "73_COGV_RCWS",
            "73_Iguana_APC",//Load/unload
            "73_Iguana_Medical_APC",//Load/unload
            "73_Komodo",//Load/unload
            "73_Merkava"//Load/unload
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
            "73_units",
            "DMNS_Armour",

        };
    };
};

class CfgVehicles {
    class ViewCargo;
    class ViewOptics;
    class VehicleSystemsTemplateLeftCommander;
    class VehicleSystemsTemplateRightCommander;
    class VehicleSystemsTemplateLeftPilot;
    class VehicleSystemsTemplateRightPilot;
    class Turrets;
    class MainTurret;
    class CommanderOptics;
    class Components;
    class SensorTemplateIR;
    class SensorTemplateVisual;
    class SensorTemplateActiveRadar;
    class SensorTemplatePassiveRadar;
    class SensorTemplateLaser;
    class SensorTemplateNV;
    class CargoTurret_01;
    class animationSources;
    class HitPoints;
    class HitLFWheel;
    class HitLBWheel;
    class HitLMWheel;
    class HitLF2Wheel;
    class HitRFWheel;
    class HitRBWheel;
    class HitRMWheel;
    class HitRF2Wheel;

    #include "vehicles\APC.hpp"
    #include "vehicles\Tanks.hpp"
    #include "vehicles\Cars.hpp"
    #include "vehicles\Helicopter.hpp"
    #include "vehicles\Planes.hpp"
    #include "vehicles\Drone.hpp"
};