class CfgPatches
{
    class 73_vehicles
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_M494_Oryx",
            "73_IFV76",
            "73_IFV76_A",
            "73_M875",
            "73_HDV134_Resupply",
            "73_HDV134_TT",
            "73_HDV134_TT_C",
            "73_M19_GMG",
            "73_M19_HMG",
            "73_M808BM_MBT",
            "73_D77_TC_Pelican",
            "73_M12",
            "73_M12_LRV",
            "73_M12G1_LRV",
            "73_M12A1_LRV",
            "73_M12R_AA",
            "73_M12_APC",
            "73_M813_TT",
            "73_UNSC_falcon_S",
            "73_UNSC_falcon",
            "73_UNSC_MH_144_Falcon",
            "73_UNSC_MH_144S_Falcon",
            "73_AV22_Sparrowhawk",
            "73_AV22A_Sparrowhawk",
            "73_AV22B_Sparrowhawk",
            "73_AV22C_Sparrowhawk",
            "73_M413_MGS",
            "73_M412_IFV",
            "73_F35B_Standard",
            "73_F22_Standard",
            "73_EA18G_Standard",
            "73_M511_Springbok_APC",
            "73_M511_Springbok_IFV",
            "73_M511_Springbok_MGS",
            "73_M511_Springbok_AA",
            "73_AV14_Hornet_CAS",
            "73_AV14_Hornet_CAP",
            "73_M808BMk2",
            "73_M914_TD",
            "73_Hammerhead_Repair",
            "73_POGV_RCWS",
            "73_COGV_RCWS",
            "73_Iguana_APC",
            "73_Iguana_Medical_APC",
            "73_Komodo",
            "73_Merkava"
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
            "DMNS_Armour"
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