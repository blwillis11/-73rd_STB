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
            "73_D77_TC_Pelican"
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