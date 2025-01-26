class CfgPatches
{
    class 73_innie
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_OCLF_Soldier_Rifleman",
            "73_OCLF_Soldier_Medic",
            "73_OCLF_Soldier_Rifleman_AT",
            "73_OCLF_Soldier_Rifleman_AA",
            "73_OCLF_Soldier_AutoRifleman",
            "73_OCLF_Soldier_Breacher",
            "73_OCLF_Soldier_Grenadier",
            "73_OCLF_Soldier_SquadLead",
            "73_OCLF_Soldier_Grenadier",
            "73_OCLF_Soldier_Radioman",
            "73_OCLF_Soldier_Sniper",
            "73_OCLF_Soldier_Scout"
        }; 
        weapons[] = 
        {
        }; 
		vehicles[] =
		{
		};
		ammo[] = 
		{
			""
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        {
			"73_Units"
        };
    };
};
class cfgFactionClasses
{
    class 73_OCLF
    {
        displayName = "[73] Outer Colony Liberation Front";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
};

class CfgEditorCategories
{
	class 73_OCLF // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Outer Colony Liberation Front"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};
class CfgEditorSubcategories
{
    class 73_Men_EdSubCat
    {
        displayName = "Men";
    };
};
class UniformItem;
class HitPoints;
class HitFace;
class HitNeck;
class HitHead;
class HitPelvis;
class HitAbdomen;
class HitDiaphragm;
class HitChest;
class HitBody;
class HitArms;
class HitHands;
class HitLegs;
class HeadgearItem;
class CfgWeapons
{
//marine

    #include "\73_innie\OCLF\OCLFVest.hpp"
    #include "\73_innie\OCLF\OCLFHelmet.hpp"
    #include "\73_innie\OCLF\OCLFUniform.hpp"
};

class CfgVehicles
{
    #include "\73_innie\OCLF\OCLFUnits.hpp"
};
class CfgGroups
{
    #include "\73_innie\OCLF\OCLFGroups.hpp"
};