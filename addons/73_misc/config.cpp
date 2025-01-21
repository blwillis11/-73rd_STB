class CfgPatches
{
    class 73_misc
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_Marine_Rifleman_AT",
            "73_Marine_Rifleman",
            "73_Marine_Marksman",
            "73_Marine_RTO_Operator",
            "73_Marine_Medic",
            "73_Marine_Grenadier",
            "73_Marine_Autorifleman",
            "73_Marine_Sniper"
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
			"1st_MEU_patch_ace",
			"Rogue_CEMarine",
			"73_Units"
			
        };
    };
};

class CfgWeapons
{
//marine
    #include "\73_misc\10thMEB\MarineVest.hpp"
    #include "\73_misc\10thMEB\MarineHelmet.hpp"
    class ACE_SpraypaintBlack;
    class 73_STB_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] STB Spray Can";
    };
    class 73_ACo_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] ACo Spray Can";
    };
    class 73_BCo_TagSprayCan: ACE_SpraypaintBlack
    {
        author="73rd S-4 Team";
        displayName="[73] BCo Spray Can";
    };

};

class ACE_Tags
{
    class STB_Icon_Logo
    {
        displayName="STB Logo";
        requiredItem="73_STB_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\STB\73odstSTB.paa"
        };
        icon="73_misc\tagging\STB\73odstSTB.paa";
    };
    class STB_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_STB_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\STB\Clear.paa"
        };
        icon="73_misc\tagging\STB\Clear.paa";
    };
    class ACo_Icon_Logo
    {
        displayName="ACo Logo";
        requiredItem="73_ACo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\ACo\73odst512ACo.paa"
        };
        icon="73_misc\tagging\ACo\73odst512ACo.paa";
    };
    class ACo_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_ACo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\ACo\Clear.paa"
        };
        icon="73_misc\tagging\ACo\Clear.paa";
    };
    class BCo_Icon_Logo
    {
        displayName="BCo Logo";
        requiredItem="73_BCo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\BCo\73odst512BCo.paa"
        };
        icon="73_misc\tagging\BCo\73odst512BCo.paa";
    };
    class BCo_Icon_Clear
    {
        displayName="Clear";
        requiredItem="73_BCo_TagSprayCan";
        textures[]=
        {
            "73_misc\tagging\BCo\Clear.paa"
        };
        icon="73_misc\tagging\BCo\Clear.paa";
    };
};
class CfgVehicles
{
    #include "\73_misc\10thMEB\MarineUnits.hpp"
};
class CfgGroups
{
    #include "\73_misc\10thMEB\MarineGroups.hpp"
};