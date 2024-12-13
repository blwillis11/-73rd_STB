class CfgPatches
{
    class 73_functions
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] =
        {
            ""
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
            "first_meu_aux",
            "73_vehicles"
        };
    };
};
class CfgFunctions
{
    class STB73
    {
        class PelicanMagLiftSystem
        {
            file="73_functions\Functions\PelicanMagLiftSystem";
            class PelicanLoadValidate
            {
            };
            class PelicanUnLoadValidate
            {
            };
        };
    };
};