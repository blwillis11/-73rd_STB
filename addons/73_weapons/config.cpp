class CfgPatches
{
    class 73_weapons
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
			"19_UNSC_Weapons",
            "OPTRE_FunctionsLibrary",
            "73_units",
			"TCF_WEAPONRY",
			"OPTRE_Weapons",
			"ACE_Javelin",
			"ace_missileguidance"
			
        };
    };
};


class CfgFunctions {

    
};

class cfgAmmo {
	class nswep_m232_145x114_APFSDS;
	class NSWep_M232_145x114_APFSDS_TG;
	class NSWep_M232_145x114_APFSDS_TR;
	class NSWep_M232_145x114_APFSDS_TC;
	class NSWep_M232_145x114_APFSDS_TIR;
	class nswep_m233_145x114_APFSDS;
	class NSWep_M233_145x114_APFSDS_TG;
	class NSWep_M233_145x114_APFSDS_TR;
	class NSWep_M233_145x114_APFSDS_TC;
	class NSWep_M233_145x114_APFSDS_TIR;
	class ACE_Javelin_FGM148;
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
	class OPTRE_M41_Rocket_HEAP;
	class OPTRE_B_145x114_APFSDS;

	class 73_B_145x114_APFSDS:OPTRE_B_145x114_APFSDS{
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        tracerStartTime = 0;
        tracerEndTime = 10;
        caliber = 3.000014
	}

	class 73_HEAT:ACE_Javelin_FGM148{
		warheadName="TandemHEAT";
		submunitionAmmo = "ammo_Penetrator_Vorona";
		maxSpeed=250;
		irLock = 1;
		airLock = 1;
		laserLock = 0;
		nvLock = 0;
		proximityExplosionDistance = 0;
		missileLockMaxDistance = 20000;
		missileLockMinDistance = 50;
		fuseDistance = 30;
		timeToLive = 40;
		typicalSpeed = 200;
		trackOversteer = 0.9;
		sideAirFriction = 0.40000001;
		cmImmunity = 0.45;
		initTime = .5;
		class Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget {
							minRange=100;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};

						class GroundTarget {
							minRange=100;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};

						maxTrackableSpeed=500;
						angleRangeHorizontal=7;
						angleRangeVertical=4.5;
						maxTrackableATL=1000;
					};
				};
			};
		};
	};
	class 73_HEAP:OPTRE_M41_Rocket_HEAP{
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		nvLock = 0;
		maxSpeed=250;
		allowAgainstInfantry = 1;
		proximityExplosionDistance = 0;
		hit = 220;
		indirectHit = 75;
		indirectHitRange = 6;
		explosive = 1;
	};

	class 73_M232_145x114_APFSDS:nswep_m232_145x114_APFSDS
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M232_145x114_APFSDS_TG:nswep_m232_145x114_APFSDS_TG
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M232_145x114_APFSDS_TR:NSWep_M232_145x114_APFSDS_TR
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M232_145x114_APFSDS_TC:NSWep_M232_145x114_APFSDS_TC
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M232_145x114_APFSDS_TIR:NSWep_M232_145x114_APFSDS_TIR
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	
	class 73_M233_145x114_APFSDS:nswep_m233_145x114_APFSDS
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M233_145x114_APFSDS_TG:nswep_m233_145x114_APFSDS_TG
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M233_145x114_APFSDS_TR:NSWep_M233_145x114_APFSDS_TR
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M233_145x114_APFSDS_TC:NSWep_M233_145x114_APFSDS_TC
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
	class 73_M233_145x114_APFSDS_TIR:NSWep_M233_145x114_APFSDS_TIR
	{
		ACE_ballisticCoefficients= "[0.757]"
		ACE_muzzleVelocities[] = {1400,1400};
	}
};

class cfgMagazines
{
	class NSWep_M232_145x114x4_APFSDS;
	class NSWep_M232_145x114x4_APFSDS_TG;
	class NSWep_M232_145x114x4_APFSDS_TR;
	class NSWep_M232_145x114x4_APFSDS_TC;
	class NSWep_M232_145x114x4_APFSDS_TIR;
	class Titan_AT;
	class OPTRE_100Rnd_762x51_box;

	class 73_200rnd_M247_Mag: OPTRE_100Rnd_762x51_box{
			displayName = "200Rnd 145x114 Box";
    		ammo = "73_B_145x114_APFSDS";  // Bullet type from OPTRE (or custom if needed)
    		count = 200;
    		initSpeed = 850;  // Adjust if needed to match desired ballistic properties
    		tracersEvery = 1;
    		mass = 65; // Light weight setting similar to M247
    		descriptionShort = "200-round 12.7x99mm M247 Belt";
	}
	class 73_100rnd_M247_Mag: OPTRE_100Rnd_762x51_box{
			displayName = "100Rnd 145x114 Box";
    		ammo = "73_B_145x114_APFSDS";  // Bullet type from OPTRE (or custom if needed)
    		count = 100;
    		initSpeed = 850;  // Adjust if needed to match desired ballistic properties
    		tracersEvery = 1;
    		mass = 130; // Light weight setting similar to M247
    		descriptionShort = "100-round 12.7x99mm M247 Belt";
	}

	class 73_HEAT:Titan_AT{
		count=2;
		displayname	= "[73] M19 HEAT Twin Rockets";
		displaynameshort = "HEAT";
		descriptionshort = "High Explosive Anti Tank<br/>Un-guided";
		ammo = "73_HEAT";
		picture 			= "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
		model = "\OPTRE_Weapons\Rockets\M41_tube.p3d";
		modelSpecial = "\OPTRE_Weapons\Rockets\M41_tube.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo_tubes","camo_details"};
		hiddenSelectionsTextures[] = {
			"\OPTRE_Weapons\Rockets\data\mag_types\heat.paa",
			"\optre_weapons\rockets\data\logos_ca.paa"
		};
		initSpeed = 100;
	}
	class 73_HEAP:73_HEAT{
		count=2;
		displayname	= "[73] M19 HEAP Twin Rockets";
		displaynameshort = "HEAP";
		descriptionshort = "High Explosive Anti Personnel (Un-guided)<br/>Un-guided";
		ammo = "73_HEAP";
		hiddenSelectionsTextures[] = {
			"\OPTRE_Weapons\Rockets\data\mag_types\heap.paa",
			"optre_weapons\rockets\data\logos_ca.paa"
		};
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\heap.paa";
	}
	class 73_M232_145x114x4_APFSDS:NSWep_M232_145x114x4_APFSDS
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS";
	}
	class 73_M232_145x114x4_APFSDS_TG:NSWep_M232_145x114x4_APFSDS_TG
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TG";
	}
	class 73_M232_145x114x4_APFSDS_TR:NSWep_M232_145x114x4_APFSDS_TR
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TR";
	}
	class 73_M232_145x114x4_APFSDS_TC:NSWep_M232_145x114x4_APFSDS_TC
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TC";
	}
	class 73_M232_145x114x4_APFSDS_TIR:NSWep_M232_145x114x4_APFSDS_TIR
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TIR";
	}

	class NSWep_M232_145x114x8_APFSDS;
	class NSWep_M232_145x114x8_APFSDS_TG;
	class NSWep_M232_145x114x8_APFSDS_TR;
	class NSWep_M232_145x114x8_APFSDS_TC;
	class NSWep_M232_145x114x8_APFSDS_TIR;

	class 73_M232_145x114x8_APFSDS:NSWep_M232_145x114x8_APFSDS
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS";
	}
	class 73_M232_145x114x8_APFSDS_TG:NSWep_M232_145x114x8_APFSDS_TG
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TG";
	}
	class 73_M232_145x114x8_APFSDS_TR:NSWep_M232_145x114x8_APFSDS_TR
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TR";
	}
	class 73_M232_145x114x8_APFSDS_TC:NSWep_M232_145x114x8_APFSDS_TC
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TC";
	}
	class 73_M232_145x114x8_APFSDS_TIR:NSWep_M232_145x114x8_APFSDS_TIR
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TIR";
	}
	
	class NSWep_M233_145x114x4_APFSDS;
	class NSWep_M233_145x114x4_APFSDS_TG;
	class NSWep_M233_145x114x4_APFSDS_TR;
	class NSWep_M233_145x114x4_APFSDS_TC;
	class NSWep_M233_145x114x4_APFSDS_TIR;
	
	class 73_M233_145x114x4_APFSDS:NSWep_M233_145x114x4_APFSDS
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS";
	}
	class 73_M233_145x114x4_APFSDS_TG:NSWep_M233_145x114x4_APFSDS_TG
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TG";
	}
	class 73_M233_145x114x4_APFSDS_TR:NSWep_M233_145x114x4_APFSDS_TR
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TR";
	}
	class 73_M233_145x114x4_APFSDS_TC:NSWep_M233_145x114x4_APFSDS_TC
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TC";
	}
	class 73_M233_145x114x4_APFSDS_TIR:NSWep_M233_145x114x4_APFSDS_TIR
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TIR";
	}

	class NSWep_M233_145x114x8_APFSDS;
	class NSWep_M233_145x114x8_APFSDS_Tg;
	class NSWep_M233_145x114x8_APFSDS_TR;
	class NSWep_M233_145x114x8_APFSDS_TC;
	class NSWep_M233_145x114x8_APFSDS_TIR;

	class 73_M233_145x114x8_APFSDS:NSWep_M233_145x114x8_APFSDS
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS";
	}
	class 73_M233_145x114x8_APFSDS_TG:NSWep_M233_145x114x8_APFSDS_TG
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS_TG";
	}
	class 73_M233_145x114x8_APFSDS_TR:NSWep_M233_145x114x8_APFSDS_TR
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS_TR";
	}
	class 73_M233_145x114x8_APFSDS_TC:NSWep_M233_145x114x8_APFSDS_TC
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS_TC";
	}
	class 73_M233_145x114x8_APFSDS_TIR:NSWep_M233_145x114x8_APFSDS_TIR
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS_TIR";
	}
};

class cfgMagazineWells{
	class 73_rockets{
		73_Magazines[] = {
			"73_HEAT",
			"73_HEAP"
		};
	};class 73_LMG{
		73_Magazines[] = {
			"73_200rnd_M247_Mag",
			"73_100rnd_M247_Mag"
		};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class CfgWeapons {
    class WeaponSlotsInfo;
    class CowsSlot;
    class MuzzleSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class OPTRE_M295_BMR;
    class OPTRE_M392_DMR;
    class OPTRE_M393_DMR;
    class OPTRE_M393S_DMR;
    class TCF_MRS10;
    class TCF_CR77;
    class NSWep_BR55HBM1;
	class NSWep_SRS99AM;
	class NSWep_SRS99AM_Stealth;
	class launch_I_Titan_short_F;
	class OPTRE_M247;
	class BaseSoundModeType;
	class Single;
	class FullAuto;

	class 73_M247: OPTRE_M247{
        displayName="[73] M247";
        baseWeapon="73_M247";
        descriptionShort="UNSC LMG";
        magazineWell[]=
        {
            "CBA_127x99",
            "73_LMG"
        };
        magazines[]=
        {
        "100Rnd LAAG Belt"
        };
        modes[]=
        		{
        			"FullAuto",
        			"Single",
        			"close",
        			"short",
        			"medium",
        			"far"
        		};
        		magazineReloadTime=5;
        		class Single: Single
        		{
        			class StandardSound
        			{
        				begin1[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-01.ogg",
        					1,
        					1,
        					1500
        				};
        				begin2[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-02.ogg",
        					1,
        					1,
        					1500
        				};
        				begin3[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-03.ogg",
        					1,
        					1,
        					1500
        				};
        				begin4[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-04.ogg",
        					1,
        					1,
        					1500
        				};
        				begin5[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-05.ogg",
        					1,
        					1,
        					1500
        				};
        				begin6[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-06.ogg",
        					1,
        					1,
        					1500
        				};
        				begin7[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-07.ogg",
        					1,
        					1,
        					1500
        				};
        				begin8[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-08.ogg",
        					1,
        					1,
        					1500
        				};
        				begin9[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-09.ogg",
        					1,
        					1,
        					1500
        				};
        				soundBegin[]=
        				{
        					"begin1",
        					0.2,
        					"begin2",
        					0.1,
        					"begin3",
        					0.1,
        					"begin4",
        					0.1,
        					"begin5",
        					0.1,
        					"begin6",
        					0.1,
        					"begin7",
        					0.1,
        					"begin8",
        					0.1,
        					"begin9",
        					0.1
        				};
        				class SoundTails
        				{
        					class TailTrees
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*trees";
        					};
        					class TailForest
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*forest";
        					};
        					class TailInterior
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
        							1.9952624,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="interior";
        					};
        					class TailMeadows
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
        					};
        					class TailHouses
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*houses";
        					};
        				};
        			};
        			class SilencedSound: BaseSoundModeType
        			{
        				begin1[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
        					1,
        					1,
        					300
        				};
        				begin2[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
        					1,
        					1,
        					300
        				};
        				begin3[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
        					1,
        					1,
        					300
        				};
        				closure1[]={};
        				closure2[]={};
        				soundBegin[]=
        				{
        					"begin1",
        					0.33000001,
        					"begin2",
        					0.33000001,
        					"begin3",
        					0.34
        				};
        				soundClosure[]=
        				{
        					"closure1",
        					0.5,
        					"closure2",
        					0.5
        				};
        				weaponSoundEffect="DefaultRifle";
        			};
        			reloadTime=0.1;
        			dispersion=0.00079999998;
        		};
        		class FullAuto: FullAuto
        		{
        			class StandardSound
        			{
        				begin1[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-01.ogg",
        					1,
        					1,
        					1500
        				};
        				begin2[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-02.ogg",
        					1,
        					1,
        					1500
        				};
        				begin3[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-03.ogg",
        					1,
        					1,
        					1500
        				};
        				begin4[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-04.ogg",
        					1,
        					1,
        					1500
        				};
        				begin5[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-05.ogg",
        					1,
        					1,
        					1500
        				};
        				begin6[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-06.ogg",
        					1,
        					1,
        					1500
        				};
        				begin7[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-07.ogg",
        					1,
        					1,
        					1500
        				};
        				begin8[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-08.ogg",
        					1,
        					1,
        					1500
        				};
        				begin9[]=
        				{
        					"OPTRE_Weapons\Vehicle\data\sounds\M41 LAAG-09.ogg",
        					1,
        					1,
        					1500
        				};
        				soundBegin[]=
        				{
        					"begin1",
        					0.2,
        					"begin2",
        					0.1,
        					"begin3",
        					0.1,
        					"begin4",
        					0.1,
        					"begin5",
        					0.1,
        					"begin6",
        					0.1,
        					"begin7",
        					0.1,
        					"begin8",
        					0.1,
        					"begin9",
        					0.1
        				};
        				class SoundTails
        				{
        					class TailTrees
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*trees";
        					};
        					class TailForest
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*forest";
        					};
        					class TailInterior
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
        							1.9952624,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="interior";
        					};
        					class TailMeadows
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
        					};
        					class TailHouses
        					{
        						sound[]=
        						{
        							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
        							1,
        							1,
        							1200
        						};
        						frequency=1;
        						volume="(1-interior/1.4)*houses";
        					};
        				};
        			};
        			class SilencedSound: BaseSoundModeType
        			{
        				begin1[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
        					1,
        					1,
        					300
        				};
        				begin2[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
        					1,
        					1,
        					300
        				};
        				begin3[]=
        				{
        					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
        					1,
        					1,
        					300
        				};
        				closure1[]={};
        				closure2[]={};
        				soundBegin[]=
        				{
        					"begin1",
        					0.33000001,
        					"begin2",
        					0.33000001,
        					"begin3",
        					0.34
        				};
        				soundClosure[]=
        				{
        					"closure1",
        					0.5,
        					"closure2",
        					0.5
        				};
        				weaponSoundEffect="DefaultRifle";
        			};
        			reloadTime=0.075000003;
        			dispersion=0.0015;
        			textureType="fastAuto";
        		};
        		class close: FullAuto
        		{
        			burst=25;
        			aiRateOfFire=0.5;
        			aiRateOfFireDistance=120;
        			minRange=0;
        			minRangeProbab=0.050000001;
        			midRange=60;
        			midRangeProbab=0.69999999;
        			maxRange=120;
        			maxRangeProbab=0.039999999;
        			showToPlayer=0;
        			dispersion=0.0020000001;
        		};
        		class short: close
        		{
        			burst=25;
        			aiRateOfFire=0.5;
        			aiRateOfFireDistance=350;
        			minRange=120;
        			minRangeProbab=0.050000001;
        			midRange=180;
        			midRangeProbab=0.69999999;
        			maxRange=350;
        			maxRangeProbab=0.039999999;
        			dispersion=0.0015;
        		};
        		class medium: close
        		{
        			burst=25;
        			aiRateOfFire=1;
        			aiRateOfFireDistance=700;
        			minRange=250;
        			minRangeProbab=0.050000001;
        			midRange=500;
        			midRangeProbab=0.60000002;
        			maxRange=700;
        			maxRangeProbab=0.1;
        			dispersion=0.0012000001;
        		};
        		class far: close
        		{
        			burst=25;
        			aiRateOfFire=2;
        			aiRateOfFireDistance=1200;
        			minRange=700;
        			minRangeProbab=0.039999999;
        			midRange=1000;
        			midRangeProbab=0.5;
        			maxRange=1200;
        			maxRangeProbab=0.0099999998;
        			dispersion=0.001;
        		};
	}

	class 73_MPRL:launch_I_Titan_short_F{
		displayName = "[73] M41 SSR MAV/AW";
		author= "73rd S-4 Team";
		baseWeapon="73_MPLR";
		scope = 2;
		scopeArsenal = 2;
		enabled = 1;
		weaponInfoType = "";
		magazines[]={
			"73_HEAT",
		};
		magazineWell[] = {"73_rockets","OPTRE_M41"};
		pictureMjolnirHud = "\OPTRE_Suit_Scripts\textures\weaponIcons\ExplosiveWeapons\Launcher_icon.paa";
		// modelOptics = "ace_javelin\data\reticle_titan.p3d";
		modelOptics[] 	= {"\OPTRE_Weapons\Rockets\M41_Optic_2x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_4x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_10x.p3d"};
		picture 		= "\OPTRE_weapons\rockets\icons\launcher.paa";
		model 			= "\OPTRE_Weapons\Rockets\M41_launcher_loaded.p3d";
		handAnim[] =
		{
			"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
			"Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\m41_hand_anim_Spartan.rtm"
		};
		cursor					= "OPTRE_M41R";
		pictureWire 			= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Launchers\Double.paa";
		ODST_1					= "OPTRE_ODST_HUD_AmmoCount_RL";
		Glasses					= "OPTRE_GLASS_HUD_AmmoCount_RL";
		Eye						= "OPTRE_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows		= 2;
		HUD_TotalPosibleBullet	= 2;
		cmImmunity = 1;
		hiddenSelections[]= {
			"camo",
			"camo_tubes",
			"camo_details"
		};
		hiddenSelectionsTextures[] = {
			"optre_weapons\rockets\data\launcher_co.paa",
			"optre_weapons\rockets\data\tubes_co.paa",
			"optre_weapons\rockets\data\logos_ca.paa"
		};
		modes[] = {"Direct", "TopDown"};
		class Direct: Mode_SemiAuto
		{
			displayName = "Direct seek";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			ace_missileGuidance_attackProfile = "JAV_DIR";
		};
		class TopDown: Direct {
			displayName = "Top-down seek";
			textureType = "topDown";
			ace_missileGuidance_attackProfile = "JAV_TOP";
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		canLock	= 2;
		weaponLockDelay	= 2;
		lockAcquire = 1;
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID															= 1;
				useModelOptics														= 1;
				opticsPPEffects[]													=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare															= 0;
				opticsZoomMin														= 0.125;
				opticsZoomMax														= 0.042;
				opticsZoomInit														= 0.125;
				distanceZoomMin														= 300;
				distanceZoomMax														= 300;
				memoryPointCamera													= "eye";
				cameraDir															= "look";
				visionMode[]														=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				//modelOptics[]                                   				= {"\OPTRE_Weapons\Rockets\M41_Optic_2x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_4x.p3d","\OPTRE_Weapons\Rockets\M41_Optic_10x.p3d"};
				thermalMode[]														= {0,1};
				opticsDisablePeripherialVision										= 1;
				discretefov[]														= {0.125,0.0525,0.042};
				discreteInitIndex													= 0;
			};
		};

	};
	class 73_SRS99AM:NSWep_SRS99AM 
	{
		displayName = "[73] SRS99AM";
        baseWeapon = "73_SRS99AM";
        author= "73rd S-4 Team";
		initSpeed = 1400;
		magazines[]=
		{
			"73_M232_145x114x4_APFSDS",
			"73_M232_145x114x4_APFSDS_TG",
			"73_M232_145x114x4_APFSDS_TR",
			"73_M232_145x114x4_APFSDS_TC",
			"73_M232_145x114x4_APFSDS_TIR",
			"73_M232_145x114x8_APFSDS",
			"73_M232_145x114x8_APFSDS_TG",
			"73_M232_145x114x8_APFSDS_TR",
			"73_M232_145x114x8_APFSDS_TC",
			"73_M232_145x114x8_APFSDS_TIR",
			"73_M233_145x114x4_APFSDS",
			"73_M233_145x114x4_APFSDS_TG",
			"73_M233_145x114x4_APFSDS_TR",
			"73_M233_145x114x4_APFSDS_TC",
			"73_M233_145x114x4_APFSDS_TIR",
			"73_M233_145x114x8_APFSDS",
			"73_M233_145x114x8_APFSDS_TG",
			"73_M233_145x114x8_APFSDS_TR",
			"73_M233_145x114x8_APFSDS_TC",
			"73_M233_145x114x8_APFSDS_TIR"
		};
	};
	class 73_SRS99AM_Stealth:NSWep_SRS99AM_Stealth 
	{
		displayName = "[73] SRS99AM [Stealth]";
        baseWeapon = "73_SRS99AM_Stealth"
        author= "73rd S-4 Team";
		initSpeed = 1400;
		magazines[]=
		{
			"73_M232_145x114x4_APFSDS",
			"73_M232_145x114x4_APFSDS_TG",
			"73_M232_145x114x4_APFSDS_TR",
			"73_M232_145x114x4_APFSDS_TC",
			"73_M232_145x114x4_APFSDS_TIR",
			"73_M232_145x114x8_APFSDS",
			"73_M232_145x114x8_APFSDS_TG",
			"73_M232_145x114x8_APFSDS_TR",
			"73_M232_145x114x8_APFSDS_TC",
			"73_M232_145x114x8_APFSDS_TIR",
			"73_M233_145x114x4_APFSDS",
			"73_M233_145x114x4_APFSDS_TG",
			"73_M233_145x114x4_APFSDS_TR",
			"73_M233_145x114x4_APFSDS_TC",
			"73_M233_145x114x4_APFSDS_TIR",
			"73_M233_145x114x8_APFSDS",
			"73_M233_145x114x8_APFSDS_TG",
			"73_M233_145x114x8_APFSDS_TR",
			"73_M233_145x114x8_APFSDS_TC",
			"73_M233_145x114x8_APFSDS_TIR"
		};
	};
	//
    class 73_BR55HBM1_DMR:NSWep_BR55HBM1
    {
        displayName = "[73] BR55HB Mod 1";
        baseWeapon = "73_BR55HBM1_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
        };
    }
    class 73_CR77_DMR:TCF_CR77
    {
        displayName = "[73] CR77 DMR";
        baseWeapon = "73_CR77_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            mass=140;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_l",
					"muzzle_snds_acp",
					"muzzle_snds_570",
					"muzzle_snds_M",
					"muzzle_snds_M_khk_f",
					"muzzle_snds_M_snd_f",
					"muzzle_snds_58_blk_f",
					"muzzle_snds_58_ghex_f",
					"muzzle_snds_58_hex_f",
					"muzzle_snds_h",
					"muzzle_snds_h_khk_f",
					"muzzle_snds_h_snd_f",
					"muzzle_snds_65_ti_blk_f",
					"muzzle_snds_65_ti_hex_f",
					"muzzle_snds_65_ti_ghex_f",
					"muzzle_snds_h_mg",
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_h_mg_khk_f",
					"muzzle_snds_b",
					"muzzle_snds_b_arid_f",
					"muzzle_snds_b_khk_f",
					"muzzle_snds_b_lush_f",
					"muzzle_snds_b_snd_f",
					"muzzle_snds_338_black",
					"muzzle_snds_338_green",
					"muzzle_snds_338_sand",
					"muzzle_snds_93mmg",
					"muzzle_snds_93mmg_tan",
					"muzzle_snds_93mmg",
					"optre_m6_silencer",
					"OPTRE_M6C_compensator",
					"OPTRE_M12_Suppressor",
					"optre_m7_silencer",
					"optre_ma5suppressor",
					"OPTRE_M393_Suppressor",
					"OPTRE_MA37KSuppressor",
					"OPTRE_SRS99D_Suppressor",
					"ace_muzzle_mzls_smg_02",
					"ace_muzzle_mzls_smg_01",
					"ace_muzzle_mzls_h",
					"ace_muzzle_mzls_l",
					"ace_muzzle_mzls_b",
					"ace_muzzle_mzls_338",
					"ace_muzzle_mzls_93mmg"
				};
			};
			class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TCF_M6_Flashlight_IR",
					"TCF_Rifle_Flashlight_IR",
					"TCF_M7_Flashlight_IR",
					"TCF_MA1B_Flashlight",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Flashlight_Laser",
					"OPTRE_BMR_Flashlight_Vis_Red_Laser",
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Vis_Red_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M12_Vis_Red_Laser",
					"OPTRE_M12_Flashlight",
					"OPTRE_M6G_Laser",
					"OPTRE_M6G_Vis_Red_Laser",
					"OPTRE_M6G_Flashlight",
					"OPTRE_M6C_Laser",
					"OPTRE_M6C_Vis_Red_Laser",
					"OPTRE_M6C_Flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"ACE_acc_pointer_red",
					"ace_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"acc_pointer_ir",
					"acc_flashlight",
					"acc_flashlight_pistol"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_snd",
					"bipod_01_F_blk",
					"bipod_01_F_mtp",
					"bipod_01_F_khk",
					"bipod_02_F_blk",
					"bipod_02_F_tan",
					"bipod_02_F_hex",
					"bipod_02_F_lush",
					"bipod_02_F_arid",
					"bipod_03_F_blk",
					"bipod_03_F_oli"
				};
			};
        };
    }
    class 73_MRS10_DMR:TCF_MRS10
    {
        displayName = "[73] MRS-10 DMR";
        baseWeapon = "73_MRS10_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            mass=130;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_l",
					"muzzle_snds_acp",
					"muzzle_snds_570",
					"muzzle_snds_M",
					"muzzle_snds_M_khk_f",
					"muzzle_snds_M_snd_f",
					"muzzle_snds_58_blk_f",
					"muzzle_snds_58_ghex_f",
					"muzzle_snds_58_hex_f",
					"muzzle_snds_h",
					"muzzle_snds_h_khk_f",
					"muzzle_snds_h_snd_f",
					"muzzle_snds_65_ti_blk_f",
					"muzzle_snds_65_ti_hex_f",
					"muzzle_snds_65_ti_ghex_f",
					"muzzle_snds_h_mg",
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_h_mg_khk_f",
					"muzzle_snds_b",
					"muzzle_snds_b_arid_f",
					"muzzle_snds_b_khk_f",
					"muzzle_snds_b_lush_f",
					"muzzle_snds_b_snd_f",
					"muzzle_snds_338_black",
					"muzzle_snds_338_green",
					"muzzle_snds_338_sand",
					"muzzle_snds_93mmg",
					"muzzle_snds_93mmg_tan",
					"muzzle_snds_93mmg",
					"optre_m6_silencer",
					"OPTRE_M6C_compensator",
					"OPTRE_M12_Suppressor",
					"optre_m7_silencer",
					"optre_ma5suppressor",
					"OPTRE_M393_Suppressor",
					"OPTRE_MA37KSuppressor",
					"OPTRE_SRS99D_Suppressor",
					"ace_muzzle_mzls_smg_02",
					"ace_muzzle_mzls_smg_01",
					"ace_muzzle_mzls_h",
					"ace_muzzle_mzls_l",
					"ace_muzzle_mzls_b",
					"ace_muzzle_mzls_338",
					"ace_muzzle_mzls_93mmg"
				};
			};
			class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"TCF_M6_Flashlight_IR",
					"TCF_Rifle_Flashlight_IR",
					"TCF_M7_Flashlight_IR",
					"TCF_MA1B_Flashlight",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight",
					"OPTRE_BMR_Vis_Red_Laser",
					"OPTRE_BMR_MEQ_Flashlight",
					"OPTRE_BMR_Flashlight_Laser",
					"OPTRE_BMR_Flashlight_Vis_Red_Laser",
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight",
					"OPTRE_M7_Vis_Red_Laser",
					"OPTRE_M12_Laser",
					"OPTRE_M12_Vis_Red_Laser",
					"OPTRE_M12_Flashlight",
					"OPTRE_M6G_Laser",
					"OPTRE_M6G_Vis_Red_Laser",
					"OPTRE_M6G_Flashlight",
					"OPTRE_M6C_Laser",
					"OPTRE_M6C_Vis_Red_Laser",
					"OPTRE_M6C_Flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_M45_Flashlight_green",
					"OPTRE_M45_Flashlight_blue",
					"OPTRE_DMR_Light",
					"ACE_acc_pointer_red",
					"ace_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"acc_pointer_ir",
					"acc_flashlight",
					"acc_flashlight_pistol"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_F_snd",
					"bipod_01_F_blk",
					"bipod_01_F_mtp",
					"bipod_01_F_khk",
					"bipod_02_F_blk",
					"bipod_02_F_tan",
					"bipod_02_F_hex",
					"bipod_02_F_lush",
					"bipod_02_F_arid",
					"bipod_03_F_blk",
					"bipod_03_F_oli"
				};
			};
        };
    }
    class 73_M395S_DMR:OPTRE_M393S_DMR
    {
        displayName = "[73] M395S DMR";
        baseWeapon = "73_M395S_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
        };
    }
    class 73_M395_DMR:OPTRE_M393_DMR
    {
        displayName = "[73] M395 DMR";
        baseWeapon = "73_M395_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
        };
    }
    class 73_M392_DMR:OPTRE_M392_DMR
    {
        displayName = "[73] M392 DMR";
        baseWeapon = "73_M392_DMR"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
        };
    }
    class 73_M295_BMR:OPTRE_M295_BMR
    {
        displayName = "[73] M295 DMR";
        baseWeapon = "73_m932"
        author= "73rd S-4 Team";
        class WeaponSlotsInfo:WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
                    "NSWep_BR55M1A2LR_Optic",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"optic_yorris",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optic_tws",
					"optic_nvs",
					"ace_optic_arco_2d",
					"ace_optic_arco_pip",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BR45_Scope",
					"optre_m6c_scope",
					"OPTRE_M6G_Scope",
					"OPTRE_BMR_Scope",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_BUIS",
					"OPTRE_M12_Optic",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"OPTRE_SRM_Sight",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"TCF_SENT_CG",
					"TCF_REC_holo",
					"TCF_SENT_CGRed",
					"TCF_SENT_CGGre",
					"TCF_REC_holo_Red",
					"TCF_REC_holo_Gre",
					"TCF_SENT_white_CG",
					"TCF_MA1B_AmmoCounter",
					"TCF_ma1B_ammocounter_nois",
					"TCF_M6D_Smartlink",
					"TCF_MA5_SmartLink_v2",
					"TCF_MA5C_SmartLink_v2",
					"TCF_MA5_SmartLink_legacy",
					"TCF_MA5C_SmartLink_legacy",
					"TCF_M393_EOTECH_v2"
				};
            };
        };
    };
};