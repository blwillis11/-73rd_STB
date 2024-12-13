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
            "73_M412_IFV"
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

class CfgVehicles {

    #include "vehicles\APC.hpp"
    #include "vehicles\Tanks.hpp"
    #include "vehicles\Cars.hpp"
    #include "vehicles\Helicopter.hpp"
};