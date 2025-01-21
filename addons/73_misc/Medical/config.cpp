class CfgPatches
{
	class 73_patch_ace_medical
	{
		author="73rd S-4 Team";
		addonRootClass="73_misc";
		requiredAddons[]=
		{
			"73_misc",
			"1st_MEU_patch_ace_medical"
		};
		requiredVersion=0.1;
		units[]=
		{
			"73_Adrenalineitem",
			"73_MorphineItem",
			"73_BiofoamItem",
			"73_MediGelItem",
			"73_BiofoamItem_Light",
			"73_MediGelItem_Light"
		};
		weapons[]=
		{
			"73_Morphine",
			"73_PlasmaIV",
			"73_MedKit",
			"73_Biofoam",
			"73_Medigel",
			"73_Biofoam_Light",
			"73_Medigel_Light",
			"73_tourniquet",
			"73_Adrenaline",
		};
	};
};
class CfgFunctions
{
    class STB73
    {
        class Medical
        {
            file="73_misc\functions";
            class endPressure
            {
            };
            class canPressure
            {
            };
            class doPressure
            {
            };
        };

    };
};
class CfgWeapons
{
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;
	class 73_Morphine: ACE_Morphine
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Morphine";
		picture="\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model="\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort="Drink some water and take this.";
		descriptionUse="Use this instead of morphine.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
	class ACE_plasmaIV;
	class 73_PlasmaIV: ACE_plasmaIV
	{
		scope=2;
		displayName="[73] Plasma 2L";
		descriptionShort="2L of Plasma";
		descriptionUse="Gives Plasma (2L)";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=12;
		};
	};
	class OPTRE_Biofoam;
	class 73_MedKit: OPTRE_Biofoam
	{
		scope=2;
		author="73rd S-4 Team";
		displayName="[73] Medkit";
		picture="\OPTRE_weapons\items\icons\medkit.paa";
		model="\OPTRE_Weapons\items\MedKit.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=32;
		};
	};
	class 73_Biofoam: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class OPTRE_Medigel;
	class 73_Medigel: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Optican Medigel";
		picture="\1st_meu_ace\_textures\misc\icons\medigel_icon.paa";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=3;
		};
	};
	class 73_Biofoam_Light: OPTRE_Biofoam
	{
		scope=2;
		displayName="[73] Light Biofoam Canister";
		picture="\OPTRE_weapons\items\icons\biofoam.paa";
		model="\OPTRE_Weapons\items\Biofoam.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class 73_Medigel_Light: OPTRE_Medigel
	{
		scope=2;
		displayName="[73] Light Optican Medigel";
		picture="\1st_meu_ace\_textures\misc\icons\medigel_icon.paa";
		model="\OPTRE_Weapons\items\Medigel.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_tourniquet;
	class 73_tourniquet: ACE_tourniquet
	{
		scope=1;
		displayName="[73] Suit Constriction System";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.5;
		};
	};
	class ACE_epinephrine;
    class 73_Adrenaline: ACE_epinephrine
    {
        author="73rd S-4 Team";
        displayName="[73] Adrenaline";
        descriptionShort="Something like epinephrine";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass=0.5;
        };
    };
};
class CfgVehicles
{
	class ACE_morphineItem;
	class OPTRE_BiofoamItem;
	class OPTRE_MediGelItem;
	class ACE_tourniquetItem;
	class ACE_epinephrineItem;
	class 73_MorphineItem: ACE_morphineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Morphine";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Morphine
			{
				name="73_Morphine";
				count=1;
			};
		};
		mass=20;
	};
	class 73_BiofoamItem: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Biofoam
			{
				name="73_Biofoam";
				count=1;
			};
		};
		mass=35;
	};
	class 73_MediGelItem: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Corpsman Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Medigel
			{
				name="73_Medigel";
				count=1;
			};
		};
		mass=35;
	};
	class 73_BiofoamItem_Light: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Biofoam";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Biofoam_Light
			{
				name="73_Biofoam_Light";
				count=1;
			};
		};
		mass=2;
	};
	class 73_MediGelItem_Light: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Light Medigel";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Medigel_Light
			{
				name="73_Medigel_Light";
				count=1;
			};
		};
		mass=2;
	};
	class 73_tourniquetItem: ACE_tourniquetItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Suit Constriction System";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_tourniquet
			{
				name="73_tourniquet";
				count=1;
			};
		};
		mass=20;
	};
	class 73_Adrenalineitem: ACE_epinephrineItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[73] Adrenaline";
		author="73rd S-4 Team";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_73_Adrenaline
			{
				name="73_Adrenaline";
				count=1;
			};
		};
		mass=1;
	};
};
class ACE_Medical_Treatment
{
	class Morphine;
	class PlasmaIV;
	class OPTRE_Biofoam;
	class OPTRE_Medigel;
	class Medication
	{
		painReduce=0;
		hrIncreaseLow[]={0,0};
		hrIncreaseNormal[]={0,0};
		hrIncreaseHigh[]={0,0};
		timeInSystem=120;
		timeTillMaxEffect=30;
		maxDose=4;
		onOverDose="";
		viscosityChange=0;
		class 73_Morphine: Morphine
		{
		};

		class 73_MedKit: 73_Morphine
		{
			painReduce=0;
			hrIncreaseLow[]={0};
			hrIncreaseNormal[]={0};
			hrIncreaseHigh[]={0};
			timeInSystem=0;
			timeTillMaxEffect=120;
			maxDose=12;
			incompatibleMedication[]={};
			viscosityChange=-1;
		};
	};
	class IV
	{
		class 73_PlasmaIV: PlasmaIV
		{
			volume=2000;
		};
		class 73_MedKit: PlasmaIV
		{
			volume=2000;
		};
	};
	class Bandaging
	{
		class PackingBandage
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class FieldDressing
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class ElasticBandage
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class QuikClot
		{
			class plasma
			{
				effectiveness=0;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
			};
		};
		class 73_Biofoam: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsions: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
		class FirstAidKit: 73_Biofoam
		{
		};
		class 73_Medigel: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=1.5;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
		class 73_Biofoam_Light: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=5;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=0.5;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=0.5;
			};
			class Avulsions: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
			};
			class Cut: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=0.5;
			};
			class CutLarge: Cut
			{
				effectiveness=0.5;
			};
			class Laceration: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=0.5;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=0.5;
			};
			class velocityWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
		class 73_Medigel_Light: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=1.5;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=2.5;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=2;
			};
			class Crush: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness=1;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=3;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=3;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=2;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=1;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=0.5;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=0.5;
			};
			class punctureWound: Abrasion
			{
				effectiveness=2;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=1;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=0.5;
			};
		};
		class 73_MedKit: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=6;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class AbrasionMinor: Abrasion
			{
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=20;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=20;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
				effectiveness=20;
			};
			class Crush: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class CrushMinor: Crush
			{
				reopeningChance=1;
			};
			class CrushMedium: Crush
			{
				effectiveness=20;
			};
			class CrushLarge: Crush
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Cut: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=600;
			};
			class CutMinor: Cut
			{
			};
			class CutMedium: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class CutLarge: Cut
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=900;
			};
			class LacerationMinor: Laceration
			{
			};
			class LacerationMedium: Laceration
			{
				effectiveness=20;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=20;
				reopeningChance=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class velocityWoundMinor: velocityWound
			{
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=20;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=20;
			};
			class punctureWound: Abrasion
			{
				effectiveness=20;
				reopeningChance=1;
				reopeningMinDelay=120;
				reopeningMaxDelay=180;
			};
			class punctureWoundMinor: punctureWound
			{
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=20;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=20;
			};
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class Morphine;
	class PlasmaIV;
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
	class ApplyTourniquet;
	class RemoveTourniquet;
	class BasicBandage;
	class Adrenaline;
	class CPR;
	class 73_holdpressure: CPR
    {
        displayName="Hold Pressure";
        displayNameProgress="Holding Pressure...";
        icon="";
        category="advanced";
        treatmentLocations=0;
        allowedSelections[]=
        {
            "head",
            "body"
        };
        allowSelfTreatment=0;
        medicRequired=0;
        treatmentTime=30;
        condition="[_medic, _patient, _bodyPart] call STB73_fnc_canpressure";
        callbackFailure="STB73_fnc_endpressure";
        callbackSuccess="STB73_fnc_endpressure";
        callbackProgress="[_medic, _patient, _bodyPart] call STB73_fnc_canpressure";
        callbackStart="STB73_fnc_doPressure";
        animationMedicProne="AinvPknlMstpSnonWnonDr_medic0";
        consumeItem=0;
        allowedUnderwater=1;
    };
	class 73_Morphine: Morphine
	{
		displayName="[73] Take Morphine";
		displayNameProgress="Injecting Morphine...";
		items[]=
		{
			"73_Morphine"
		};
		treatmentTime=1;
	};
	class 7373_Adrenaline: Adrenaline
	{
		displayName="[73] Take Adrenaline";
		displayNameProgress="Injecting Adrenaline...";
		items[]=
		{
			"73_Adrenaline"
		};
		treatmentTime=1;
	};
	class 73_PlasmaIV: PlasmaIV
	{
		displayName="[73] Plasma 2L";
		displayNameProgress="Pushing 2 litres...";
		treatmentTime=10;
		items[]=
		{
			"73_PlasmaIV"
		};
	};
	class 73_Medigel: OPTRE_Medigel
	{
		displayName="[73] Apply Corpsman Medigel";
		displayNameProgress="Spreading lots of Medigel...";
		items[]=
		{
			"73_Medigel"
		};
		callbackSuccess="MEU_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class 73_Biofoam: OPTRE_Biofoam
	{
		displayName="[73] Inject Corpsman Biofoam";
		displayNameProgress="Injecting lots of Biofoam...";
		items[]=
		{
			"73_Biofoam"
		};
		callbackSuccess="MEU_fnc_biomed";
		consumeItem=1;
		category="bandage";
		medicRequired=1;
	};
	class 73_Medigel_Light: OPTRE_Medigel
	{
		displayName="[73] Apply Medigel";
		displayNameProgress="Spreading Medigel...";
		items[]=
		{
			"73_Medigel_Light"
		};
		category="bandage";
		callbackSuccess="MEU_fnc_biomed";
	};
	class 73_Biofoam_Light: OPTRE_Biofoam
	{
		displayName="[73] Inject Biofoam";
		displayNameProgress="Injecting Biofoam...";
		items[]=
		{
			"73_Biofoam_Light"
		};
		category="bandage";
		callbackSuccess="MEU_fnc_biomed";
	};
	class 73_ApplyTourniquet: ApplyTourniquet
	{
		displayName="[73] Constrict Suit";
		displayNameProgress="Activating suit constriction...";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		items[]=
		{
			"73_tourniquet"
		};
		treatmentTime=3;
		consumeItem=0;
		category="bandage";
	};
	class 73_RemoveTourniquet: 73_ApplyTourniquet
	{
		displayName="[73] Deconstrict Suit";
		displayNameProgress="Loosening suit constriction...";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg",
			"Head"
		};
		items[]=
		{
			"73_tourniquet"
		};
		treatmentTime=3;
		callbackSuccess="MEU_fnc_tourniquetRemove";
		consumeItem=0;
		category="bandage";
	};
	class 73_NeckTourniquet: 73_ApplyTourniquet
	{
		displayName="[73] Constrict Suit";
		displayNameProgress="Activating suit constriction...";
		allowedSelections[]=
		{
			"Head"
		};
		items[]=
		{
			"73_tourniquet"
		};
		treatmentTime=3;
		callbackSuccess="MEU_fnc_necktourniquet";
		consumeItem=0;
		category="bandage";
	};
	class 73_MedKit: OPTRE_Medigel
	{
		displayName="[73] MedKit";
		displayNameProgress="Applying Medkit....";
		icon="";
		consumeItem=1;
		treatmentTime=10;
		medicRequired=0;
		allowSelfTreatment=0;
		category="advanced";
		items[]=
		{
			"73_MedKit"
		};
		callbackStart="";
		callbackSuccess="MEU_fnc_medkit";
	};
	class FirstAidKit: 73_Biofoam
	{
		displayName="[73] First Aid Kit";
		displayNameProgress="Applying First Aid Kit";
		icon="";
		condition="";
		consumeItem=1;
		treatmentTime=5;
		allowSelfTreatment=1;
		items[]=
		{
			"FirstAidKit"
		};
	};
};