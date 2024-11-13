class CfgPatches 
{ 
    class 73_units
    { 
        author = "73rd S-4 Team";
		name = "73rd STB Aux";
		units[] = 
        {
			"73_ODST_Rifleman",
			"73_ODST_Autorifleman",
			"73_ODST_Grenadier",
			"73_ODST_Demo",
			"73_ODST_Medic",
			"73_ODST_Sniper",
			"73_ODST_Marksmen",
			"73_ODST_AT",
			"73_ODST_TeamLead",
			"73_ODST_SquadLead",
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
    class 73_Fac
    { 
        displayName = "73rd STB"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "73_units\UI\73odst.paa"; //Custom Icon 
    };  
};

class CfgEditorCategories
{
	class 73_STB // Category class, you point to it in editorCategory property
	{
		displayName = "73rd STB"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class sc_odst // Category class, you point to it in editorSubcategory property
	{
		displayName = "Troopers"; // Name visible in the list
	};
	class supply_pods // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Pods"; // Name visible in the list
	};
};
class CfgUnitInsignia
{
	// class Phoenix_Insignia
    // {
    //     displayName = "Phoenix Company"; // Name displayed in Arsenal
    //     author = "Salmon"; // Author displayed in Arsenal
    //     texture = "73_units\UI\73odst.paa"; // Image path
    // };
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
	class MA_M56S_BDU;
	// class MA_M56E_Helmet;
	// class MA_M56_Scout_Helmet;
	class MA_M56A_Helmet;
	class MA_M56R_Medic_Vest;
	class MA_M56R_Recon_Vest;
	class MA_M56R_Vest;
	class MA_M56R_Light_Vest;
	class MA_M56_CustomVest_11549;
	class MA_M56R_CQB_Vest;
	class MA_M56_CustomVest_12356;
	class MA_M56R_Sniper_Vest;
	class MA_M56SR_Helmet;
	class H_Beret_02;

//ODST Uniform
	#include "data\ODST\ODSTUniforms.hpp"
//Dress Gear
	#include "data\Dress Gear\DressUniforms.hpp"

//ODST Vest
	#include "data\ODST\ODSTVest.hpp"
	#include "data\Aviation\AviationVest.hpp"

//Infantry helmets
	#include "data\ODST\ODSTHelmets.hpp"
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

//ODST Backpack
	#include "data\ODST\ODSTBackpack.hpp"

    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
	 class OPTRE_UNSC_ODST_Soldier;
	 class OPTRE_UNSC_ODST_Soldier_Rifleman_AT; //AT
	 class OPTRE_UNSC_ODST_Soldier_Marksman; //Marksmen
	 class OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman; //Autorifleman
	 class OPTRE_UNSC_ODST_Soldier_TeamLeader; //Team Lead
	 class OPTRE_UNSC_ODST_Soldier_DemolitionsExpert; //Demo
	 class OPTRE_UNSC_ODST_Soldier_Scout_Sniper; //Sniper
	 class OPTRE_UNSC_ODST_Soldier_Paramedic; //Medic

	 #include "data\Units\units.hpp"
};

#include "data\Units\groups.hpp"