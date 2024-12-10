class CfgPatches
{
    class 73_functions
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] =
        {
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
            "first_meu_aux"
        };
    };
};
class CfgFunctions
{
    class v73_func
    {
        class PelicanMagLiftSystem

        {
            class PelicanLoadValidate
            {
                file="73_functions\Functions\PelicanMagLiftSystem\fn_PelicanLoadValidate.sqf";
            };
            class PelicanUnLoadValidate
            {
                file="73_functions\Functions\PelicanMagLiftSystem\fn_PelicanUnLoadValidate.sqf";
            };
        };
    };
};