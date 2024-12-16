class CfgPatches
{
    class 73_misc
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
		ammo[] = 
		{
			""
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        { 
			"1st_MEU_patch_ace",
			
        };
    };
};

class CfgWeapons
{
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
};
