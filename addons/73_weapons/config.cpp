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
			"OPTRE_Weapons",
			"ACE_Javelin",
			"ace_missileguidance"
			
        };
    };
};


class CfgFunctions {

    
};
class ace_missileguidance_type_Sidewinder;
class 73_ace_missileguidance_type_M41_AA: ace_missileguidance_type_Sidewinder
{
	enabled=1;
	canVanillaLock=0;
	pitchRate=30;
	yawRate=30;
	defaultSeekerType="IR";
	seekerTypes[]=
	{
		"IR"
	};
	defaultSeekerLockMode="LOAL";
	seekerLockModes[]=
	{
		"LOAL"
	};
	defaultNavigationType="AugmentedProportionalNavigation";
	navigationTypes[]=
	{
		"AugmentedProportionalNavigation"
	};
	defaultAttackProfile="DIR";
	attackProfiles[]=
	{
		"DIR"
	};
	flareDistanceFilter=100;
	flareAngleFilter=1.6;
	seekLastTargetPos=1;
	seekerAngle=90;
	seekerMinRange=10;
	seekerMaxRange=5000;
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
	class OPTRE_ace_missileguidance_type_M41_Thermal;
	class OPTRE_M41_Rocket_HEAP;
	class OPTRE_B_95x40_Tracer;
	class MA_5x23_Caseless;
	class OPTRE_M41_Rocket_HEAT_Guided;
	class OPTRE_B_762x51_Ball;

	class 73_B_95x40_Ball: OPTRE_B_762x51_Ball
	{
	    caliber = 3.0;
        hit = 18;
        typicalSpeed = 800;

        cartridge = "FxCartridge_93x64_Ball";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	}
	class 73_B_762x51_Ball_Tracer: 73_B_95x40_Ball
	{
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	}
	class 73_B_762x51_Ball_Tracer_Yellow: 73_B_95x40_Ball
	{
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	}

	class 73_5x23_Caseless:MA_5x23_Caseless{
	    hit=14;
        cartridge="";
        caliber=1.5;
        typicalSpeed=600;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        supersoniccracknear[]={};
        supersoniccrackfar[]={};
        soundSetSonicCrack[]={};
	}

	class 73_B_95x40_Tracer:OPTRE_B_95x40_Tracer{
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
		missileKeepLockedCone = 75;
        missileLockCone = 10;
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
							minRange=50;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};

						class GroundTarget {
							minRange=50;
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
	class 73_HEAA:OPTRE_M41_Rocket_HEAT_Guided
	{
		warheadName="TandemHEAT";
        submunitionAmmo = "ammo_Penetrator_Vorona";
        effectsMissile = "missile3";
        hit = 350;
        indirectHit = 25;
        proximityExplosionDistance = 0;
        indirectHitRange = 4;
        explosive=0.80000001;
        irLock = 1;
        airLock = 1;
        laserLock = 0;
        nvLock = 0;
        cmImmunity = 0.65;
        simulationStep = 0.0020000001;
        airFriction = 0.064999998;
        sideAirFriction = 0.20000001;
        manualControl = 1;
        maneuvrability = 28;
        maxControlRange = 30000;
        missileKeepLockedCone = 180;
        missileLockCone = 20;
        missileLockMaxDistance = 10000;
        missileLockMinDistance = 50;
        missileLockMaxSpeed = 1000;
        trackOversteer = 0.9;
        trackLead = 0.8;
        weaponLockSystem = 2;
        initTime = 0;
        thrustTime = 12;
        thrust = 120;
        maxSpeed = 400;

        class Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange=50;
                            maxRange=10000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=1;
                        };

                        class GroundTarget {
                            minRange=50;
                            maxRange=10000;
                            objectDistanceLimitCoef=1;
                            viewDistanceLimitCoef=1;
                        };

                        maxTrackableSpeed=1000;
                        angleRangeHorizontal=7;
                        angleRangeVertical=4.5;
                        maxTrackableATL=2000;
                    };
                };
            };
        };

        class ace_missileguidance {
            enabled = 0; // Enable missile guidance (0-disabled, 1-enabled)
            minDeflection = 0.00025;  // Minimum flap deflection for guidance
            maxDeflection = 0.001;  // Maximum flap deflection for guidance
            incDeflection = 0.0005;  // The increment in which deflection adjusts
            canVanillaLock = 1;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)
            defaultSeekerType = "SACLOS";  // Default seeker type
            seekerTypes[] = {"SALH", "SACLOS"};  // Seeker types available
            defaultSeekerLockMode = "LOAL";  // Default seeker lock mode
            seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available
            seekerAngle = 90;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier
            seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search
            defaultAttackProfile = "LIN";  // Default attack profile
            attackProfiles[] = {"LIN", "DIR"};  // Attack profiles available
        };
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
	class MA_48Rnd_5x23Caseless_FMJ_Mag;
	class MA_48Rnd_5x23Caseless_FMJ_Mag_Tracer;
	class MA_60Rnd_5x23Caseless_FMJ_Mag;
	class MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer;
	class OPTRE_15Rnd_762x51_Mag;

	class 73_15Rnd_95x40_Mag:OPTRE_15Rnd_762x51_Mag
	{
	    ammo = "73_B_95x40_Ball";
	}
	class 73_15Rnd_95x40_Mag_Tracer:OPTRE_15Rnd_762x51_Mag
	{
        displayname							= "15Rnd 9.5x40mm Magazine (Tracers)";
        displaynameshort					= "9.5x40mm Tracer";
	    ammo = "73_B_95x40_Ball_Tracer";
        descriptionshort					= "15 Round Magazine<br/>9.5x40mm<br/>Tracer";
        tracersEvery 						= 1;
        lastRoundsTracer 					= 15;
	}
	class 73_15Rnd_95x40_Mag_Tracer_Yellow:73_15Rnd_95x40_Mag_Tracer
	{
        displayname							= "15Rnd 9.5x40mm Magazine (Tracers Yellow)";
	    ammo = "73_B_95x40_Ball_Tracer_Yellow";
	}

    class 73_48Rnd_5x23Caseless_FMJ_Mag: MA_48Rnd_5x23Caseless_FMJ_Mag{
        displayName="[73] 48Rnd M7S FMJ Magazine";
        author= "73rd S-4 Team";
        ammo="73_5x23_Caseless";
    };
    class 73_48Rnd_5x23Caseless_FMJ_Mag_Tracer: MA_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
        displayName="[73] 48Rnd M7S FMJ Magazine (Tracer)";
        author= "73rd S-4 Team";
        ammo="73_5x23_Caseless";
    };
    class 73_60Rnd_5x23Caseless_FMJ_Mag: MA_48Rnd_5x23Caseless_FMJ_Mag{
        displayName="[73] 60Rnd M7S FMJ Magazine";
        author= "73rd S-4 Team";
        ammo="73_5x23_Caseless";
        mass=3.5;
    };
    class 73_60Rnd_5x23Caseless_FMJ_Mag_Tracer: MA_48Rnd_5x23Caseless_FMJ_Mag_Tracer{
        displayName="[73] 60Rnd M7S FMJ Magazine (Tracer)";
        author= "73rd S-4 Team";
        ammo="73_5x23_Caseless";
        mass=3.5;
    };
	class 73_200rnd_M247_Mag: OPTRE_100Rnd_762x51_box{
			displayName = "200Rnd 9.5x40 Box";
			displaynameshort="200Rnd 9.5x40 Box";
    		ammo = "73_B_95x40_Tracer";  // Bullet type from OPTRE (or custom if needed)
    		count = 200;
    		initSpeed = 850;  // Adjust if needed to match desired ballistic properties
    		tracersEvery = 1;
    		mass = 70.5; // Light weight setting similar to M247
    		descriptionShort = "200-round 12.7x99mm M247 Belt";
	};
	class 73_100rnd_M247_Mag: OPTRE_100Rnd_762x51_box{
			displayName = "100Rnd 95x40 Box";
			displaynameshort="100Rnd 95x40 Box";
    		ammo = "73_B_95x40_Tracer";  // Bullet type from OPTRE (or custom if needed)
    		count = 100;
    		initSpeed = 850;  // Adjust if needed to match desired ballistic properties
    		tracersEvery = 1;
    		mass = 35; // Light weight setting similar to M247
    		descriptionShort = "100-round 12.7x99mm M247 Belt";
	};

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
	};
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
	};
	class 73_HEAA:73_HEAT{
		count=2;
		displayname	= "[73] M19 HEAA Twin Rockets";
		displaynameshort = "HEAA";
		descriptionshort = "High Explosive Anti Air (Guided)<br/>Guided";
		ammo = "73_HEAA";
		hiddenSelectionsTextures[] = {
			"\OPTRE_Weapons\Rockets\data\mag_types\he.paa",
			"optre_weapons\rockets\data\logos_ca.paa"
		};
		picture = "\OPTRE_Weapons\Rockets\icons\magazine\heat.paa";
	};
	class 73_M232_145x114x4_APFSDS:NSWep_M232_145x114x4_APFSDS
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS";
	};
	class 73_M232_145x114x4_APFSDS_TG:NSWep_M232_145x114x4_APFSDS_TG
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TG";
	};
	class 73_M232_145x114x4_APFSDS_TR:NSWep_M232_145x114x4_APFSDS_TR
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TR";
	};
	class 73_M232_145x114x4_APFSDS_TC:NSWep_M232_145x114x4_APFSDS_TC
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TC";
	};
	class 73_M232_145x114x4_APFSDS_TIR:NSWep_M232_145x114x4_APFSDS_TIR
	{
		mass=25;
		ammo="73_M232_145x114_APFSDS_TIR";
	};

	class NSWep_M232_145x114x8_APFSDS;
	class NSWep_M232_145x114x8_APFSDS_TG;
	class NSWep_M232_145x114x8_APFSDS_TR;
	class NSWep_M232_145x114x8_APFSDS_TC;
	class NSWep_M232_145x114x8_APFSDS_TIR;

	class 73_M232_145x114x8_APFSDS:NSWep_M232_145x114x8_APFSDS
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS";
	};
	class 73_M232_145x114x8_APFSDS_TG:NSWep_M232_145x114x8_APFSDS_TG
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TG";
	};
	class 73_M232_145x114x8_APFSDS_TR:NSWep_M232_145x114x8_APFSDS_TR
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TR";
	};
	class 73_M232_145x114x8_APFSDS_TC:NSWep_M232_145x114x8_APFSDS_TC
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TC";
	};
	class 73_M232_145x114x8_APFSDS_TIR:NSWep_M232_145x114x8_APFSDS_TIR
	{
		mass=50;
		ammo="73_M232_145x114_APFSDS_TIR";
	};
	
	class NSWep_M233_145x114x4_APFSDS;
	class NSWep_M233_145x114x4_APFSDS_TG;
	class NSWep_M233_145x114x4_APFSDS_TR;
	class NSWep_M233_145x114x4_APFSDS_TC;
	class NSWep_M233_145x114x4_APFSDS_TIR;
	
	class 73_M233_145x114x4_APFSDS:NSWep_M233_145x114x4_APFSDS
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS";
	};
	class 73_M233_145x114x4_APFSDS_TG:NSWep_M233_145x114x4_APFSDS_TG
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TG";
	};
	class 73_M233_145x114x4_APFSDS_TR:NSWep_M233_145x114x4_APFSDS_TR
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TR";
	};
	class 73_M233_145x114x4_APFSDS_TC:NSWep_M233_145x114x4_APFSDS_TC
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TC";
	};
	class 73_M233_145x114x4_APFSDS_TIR:NSWep_M233_145x114x4_APFSDS_TIR
	{
		mass=25;
		ammo="73_M233_145x114_APFSDS_TIR";
	};

	class NSWep_M233_145x114x8_APFSDS;
	class NSWep_M233_145x114x8_APFSDS_Tg;
	class NSWep_M233_145x114x8_APFSDS_TR;
	class NSWep_M233_145x114x8_APFSDS_TC;
	class NSWep_M233_145x114x8_APFSDS_TIR;

	class 73_M233_145x114x8_APFSDS:NSWep_M233_145x114x8_APFSDS
	{
		mass=50;
		ammo="73_M233_145x114_APFSDS";
	};
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
			"73_HEAP",
			"73_HEAA"
		};
	};
	class 73_LMG{
		73_Magazines[] = {
			"73_200rnd_M247_Mag",
			"73_100rnd_M247_Mag"
		};
	};
	class 73_DMR{
		73_Magazines[] = {
			"73_15Rnd_95x40_Mag",
			"73_15Rnd_95x40_Mag_Tracer",
			"73_15Rnd_95x40_Mag_Tracer_Yellow"
		};
	};
	class 73_M7_SMG{
		73_Magazines[] = {
			"73_48Rnd_5x23Caseless_FMJ_Mag",
			"73_48Rnd_5x23Caseless_FMJ_Mag_Tracer",
			"73_60Rnd_5x23Caseless_FMJ_Mag",
			"73_60Rnd_5x23Caseless_FMJ_Mag_Tracer"
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
    class TCF_CR77;
    class NSWep_BR55HBM1;
	class NSWep_SRS99AM;
	class NSWep_SRS99AM_Stealth;
	class launch_I_Titan_short_F;
	class OPTRE_M247;
	class BaseSoundModeType;
	class Single;
	class FullAuto;
	class MA_M7_SMG;

	class 73_M7_SMG_salmon: MA_M7_SMG {
	    author= "73rd S-4 Team";
	    displayName = "[73] M7S SMG [Salmon]"
	    baseWeapon="73_M7_SMG_salmon"
	    magazineWell[]={
	    "73_M7_SMG"
	    };
	    hiddenSelections[]={
	    "M7_Addons",
	    "M7_Body",
	    "M7_Scope_Glass"
	    };
        hiddenSelectionsTextures[]=
        {
            "73_weapons\data\M7\m7_smg_addons_cus_salmon_CO.paa",
            "73_weapons\data\M7\m7_smg_body_cus_salmon_CO.paa",
            "73_weapons\data\M7\m7_smg_optic_cus_salmon.paa"
        };
	}
	class 73_M7_SMG: MA_M7_SMG {
	    author= "73rd S-4 Team";
	    displayName = "[73] M7S SMG"
	    baseWeapon="73_M7_SMG"
	    magazineWell[]={
	    "73_M7_SMG"
	    };
	}

	class 73_M247: OPTRE_M247 {
        displayName="[73] M247";
        baseWeapon="73_M247";
        descriptionShort="UNSC LMG";
        magazineWell[]=
        {
//            "CBA_127x99",
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
    class 73_BR55HBM1_DMR:NSWep_BR55HBM1
    {
        displayName = "[73] BR55HB Mod 1";
        baseWeapon = "73_BR55HBM1_DMR"
        author= "73rd S-4 Team";
    }
    class 73_M395S_DMR:OPTRE_M393S_DMR
    {
        displayName = "[73] M395S DMR";
        baseWeapon = "73_M395S_DMR"
        author= "73rd S-4 Team";
        magazineWell[] = {"73_DMR"};
        magazines[]={"73_15Rnd_95x40_Mag"};
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
        magazineWell[] = {"73_DMR"};
        magazines[]={"73_15Rnd_95x40_Mag"};
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
        magazineWell[] = {"73_DMR"};
        magazines[]={"73_15Rnd_95x40_Mag"};
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
        magazineWell[] = {"73_DMR"};
        magazines[]={"73_15Rnd_95x40_Mag"};
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
