class CfgPatches 
{ 
    class 73_units
    { 
        author = "73rd S-4 Team";
		name = "73rd STB Aux";
		units[] = 
        {
			"73_ACo_ODST_Rifleman",
			"73_ACo_ODST_Autorifleman",
			"73_ACo_ODST_Grenadier",
			"73_ACo_ODST_Demo",
			"73_ACo_ODST_Medic",
			"73_ACo_ODST_Sniper",
			"73_ACo_ODST_Marksman",
			"73_ACo_ODST_Officer",
			"73_ACo_ODST_AT",
			"73_ACo_ODST_TeamLead",
			"73_ACo_ODST_SquadLead",
			"73_Crewman",
			"73_Crewman_Officer",
			"73_Aviator",
			"73_Aviator_Officer",
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
			"OPTRE_UNSC_Units",
			"V_FZ_Armor",
			"OPTRE_UNSC_Units",
			"MA_Armor"
        };
    }; 
}; 

//Ace Extended
#include "data\XtdGear\XtdGearModels.hpp"

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class 73_STB
    { 
        displayName = "[73] Shock Trooper Battalion";
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "73_units\UI\73odstSTB.paa"; //Custom Icon
    };
    class 73_ACo
    {
        displayName = "[73] Alpha Company";
        priority = 3; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = "73_units\UI\73odst512ACO.paa"; //Custom Icon
    };
};

class CfgEditorCategories
{
	class 73_STB // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Shock Trooper Battalion"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
	class 73_ACo // Category class, you point to it in editorCategory property
	{
		displayName = "[73] Alpha Company"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};

class CfgEditorSubcategories
{
    class 73_APCs_EdSubCat
    {
        displayName = "APCs";
    };
    class 73_Cars_EdSubCat
    {
        displayName = "Cars";
    };
    class 73_Helicopters_EdSubCat
    {
        displayName = "Helicopters";
    };
    class 73_Aviation_EdSubCat
    {
        displayName = "Aviation";
    };
    class 73_Planes_EdSubCat
    {
        displayName = "Planes";
    };
    class 73_Mechanized_EdSubCat
    {
        displayName = "Mechanized";
    };
    class 73_ODST_EdSubCat
    {
        displayName = "ODST";
    };
    class 73_Tanks_EdSubCat
    {
        displayName = "Tanks";
    };
    class 73_Artillery_EdSubCat
    {
        displayName = "Artillery";
    };
	class supply_pods // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Pods"; // Name visible in the list
	};
};
class CfgUnitInsignia
{
	 class 73_Insignia
     {
         displayName = "73rd STB"; // Name displayed in Arsenal
         author = "Salmon"; // Author displayed in Arsenal
         texture = "73_units\UI\73odst.paa"; // Image path
     };
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 
	
class CfgWeapons 
{ 
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class HitpointsProtectionInfo;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class H_Beret_02;

//ODST Uniform
	#include "data\ODST\ODSTUniforms.hpp"
	#include "data\Aviation\AviationUniforms.hpp"
	#include "data\Mechanized\MechUniforms.hpp"
//Dress Gear
	#include "data\Dress Gear\DressUniforms.hpp"

//ODST Vest
	#include "data\ODST\ODSTM52Vest.hpp"
	#include "data\ODST\ODSTM52VestACo.hpp"
	#include "data\ODST\ODSTM52VestACo1Plt.hpp"
	#include "data\ODST\ODSTM52VestACo2Plt.hpp"

//Aviation Vest
    #include "data\Aviation\AviationVest.hpp"

//Aviation Vest
    #include "data\Mechanized\MechVest.hpp"


//Infantry helmets
	#include "data\ODST\ODSTCH252DHelmet.hpp"
//Mechanized Helmets
	#include "data\Mechanized\MechHelmet.hpp"
};
class CfgVehicles
{
	class MA_M56S_BDU_Base;
	class MA_M56S_Rucksack;
	class MA_M56S_Rucksack_Medic;
	class MA_M56S_Rucksack_ODST_Radio;
	class weapons_f;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	class ItemInfo;
	class UniformItem;	
	class NSM_neutral_XD_1_backpack;

//Dress Uniform
	#include "data\Dress Gear\DressUniformsVeh.hpp"
//ODST Uniform
	#include "data\ODST\ODSTUniformsVeh.hpp"
//Aviation Uniform
    #include "data\Aviation\AviationUniformsVeh.hpp"
//Mechanized Uniform
    #include "data\Mechanized\MechUniformsVeh.hpp"

//ODST Backpack
	#include "data\ODST\ODSTBackpack.hpp"

    #include "STB\units\units.hpp"
    #include "ACo\units\units.hpp"
};

class CfgGroups
{
//    #include "ACo\groups\groups.hpp"
};

