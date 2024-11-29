class CfgPatches
{
	class 73_supplypods
	{
		author="73rd S-4 Team";
		addonRootClass="73_supplypod";
		requiredAddons[]=
		{
			"73_units",
			"OPTRE_Misc"
		};
		requiredVersion=0.1;
		units[]=
		{
			"73_supply_NEWACE_Medical",
			"73_supply_Mortar_Ammo",
			"73_supply_Mortar",
			"73_SupplyPod_StaticHMG",
			"73_SupplyPod_StaticHMGAmmo",
			"73_SupplyPod_StaticGMG",
			"73_SupplyPod_StaticGMGAmmo",
			"73_SupplyPod_VehicleAmmo",
			"73_SupplyPod_VehicleRepair",
			"73_SupplyPod_VehicleRefuel",
			"73_supply_ARBRGL",
			"73_supply_Breacher",
			"73_supply_Marksman",
			"73_supply_Sniper",
			"73_supply_Autorifles",
			"73_supply_ATLauncher",
			"73_supply_ExplosivesPack",
			"73_supply_TACResupply",
			"73_supply_Emptypod",
			"Module_OPTRE_PelicanSupplyDrop",
			"73_supply_Light"
		};
		weapons[]={};
		vehicles[]={};
	};
};

class CfgVehicles
{ 
	
    scopeCurator = 2; // Allow spawning in Zeus
	scope = 2; // Visible in Zeus and Eden
	class OPTRE_Ammo_SupplyPod_Empty;
	class OPTRE_Ammo_SupplyPod_Launcher;
	class Module_F;
	class 73_supplypod: OPTRE_Ammo_SupplyPod_Empty
	{
		scope = 2; // Visible in Zeus and Eden
    	scopeCurator = 2; // Allow spawning in Zeus
		maximumLoad=1000000;
		editorCategory = "73_STB";
		editorSubcategory = "supply_pods";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
	};
	class 73_supply_NEWACE_Medical: 73_supplypod
	{
		
   		scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [New ACE Medical]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{
			class _xx_kat_aatKit
			{
				name="kat_aatKit";
				count=10;
			};
			class _xx_kat_ncdKit
			{
				name="kat_ncdKit";
				count=10;
			};
			class _xx_kat_stethoscope
			{
				name="kat_stethoscope";
				count=10;
			};

			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=80;
			};
			class _xx_DMNS_BiofoamItem
			{
				name="DMNS_BiofoamItem";
				count=100;
			};
			class _xx_OPTRE_MediGelItem
			{
				name="OPTRE_MediGelItem";
				count=20;
			};
			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=40;
			};

			class _xx_ACE_PlasmaIVItem
			{
				name="ACE_PlasmaIVItem";
				count=20;
			};
			class _xx_kat_Painkiller
			{
				name="kat_Painkiller";
				count=40;
			};

			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=5;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=5;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=40;
			};
			class _xx_kat_TXA
			{
				name="kat_TXA";
				count=80;
			};
			class _xx_kat_Pulseoximeter
			{
				name="kat_Pulseoximeter";
				count=15;
			};
			class _xx_kat_X_AED
			{
				name="kat_X_AED";
				count=5;
			};
			class _xx_kat_Amiodarone
			{
				name="kat_Amiodarone";
				count=10;
			};
			class _xx_kat_CarbonateItem
			{
				name="kat_CarbonateItem";
				count=20;
			};
			class _xx_kat_EACA
			{
				name="kat_EACA";
				count=20;
			};
			class _xx_kat_Fentanyl
			{
				name="kat_Fentanyl";
				count=20;
			};
			class _xx_kat_Ketamine
			{
				name="kat_Ketamine";
				count=20;
			};
			class _xx_kat_Naloxone
			{
				name="kat_Naloxone";
				count=20;
			};
			class _xx_kat_ChestSeal
			{
				name="kat_ChestSeal";
				count=20;
			};
			class _xx_kat_NPA
			{
				name="kat_NPA";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=80;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=80;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=80;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=80;
			};
			class _xx_ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=40;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=40;
			};
			class _xx_kat_Bubble_Wrap_Item
			{
				name="kat_Bubble_Wrap_Item";
				count=5;
			};
		};
	};
	class 73_supply_Mortar_Ammo: 73_supplypod
	{
		
    	scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [Mortar Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_Smoke_white
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_Smoke_white";
				count=30;
			};
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_Flare_white
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_Flare_white";
				count=30;
			};
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_shells
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_shells";
				count=50;
			};
		};
	};
	class 73_supply_Mortar: 73_supplypod
	{
		
 	 	scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [Mortar Tube]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_CSW_1Rnd_122mm_Mo_shells
			{
				magazine="OPTRE_CSW_1Rnd_122mm_Mo_shells";
				count=15;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_CSW_AU44_Mortar_Carry
			{
				weapon="OPTRE_CSW_AU44_Mortar_Carry";
				count=1;
			};
			class _xx_OPTRE_CSW_AU44_Carry_Baseplate
			{
				weapon="OPTRE_CSW_AU44_Carry_Baseplate";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticHMG: 73_supplypod
	{
			
   		scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [Static HMG]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_csw_400Rnd_762x51
			{
				magazine="OPTRE_csw_400Rnd_762x51";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag_red
			{
				magazine="ace_csw_100Rnd_127x99_mag_red";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag
			{
				magazine="ace_csw_100Rnd_127x99_mag";
				count=15;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_CSW_M247T_Weapon
			{
				weapon="OPTRE_CSW_M247T_Weapon";
				count=1;
			};
			class _xx_OPTRE_CSW_M247T_Carry_Tripod
			{
				weapon="OPTRE_CSW_M247T_Carry_Tripod";
				count=1;
			};
			class _xx_OPTRE_CSW_M247H_Weapon
			{
				weapon="ace_csw_staticM2ShieldCarry";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripod
			{
				weapon="ace_csw_m3CarryTripod";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripodLow
			{
				weapon="ace_csw_m3CarryTripodLow";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticHMGAmmo: 73_supplypod
	{
		scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [Static HMG Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_csw_400Rnd_762x51
			{
				magazine="OPTRE_csw_400Rnd_762x51";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag_red
			{
				magazine="ace_csw_100Rnd_127x99_mag_red";
				count=15;
			};
			class _xx_ace_csw_100Rnd_127x99_mag
			{
				magazine="ace_csw_100Rnd_127x99_mag";
				count=15;
			};
		};
	};
	class 73_SupplyPod_StaticGMG: 73_supplypod
	{
		scopeCurator = 2; // Allow spawning in Zeus
		scope = 2; // Visible in Zeus and Eden
		displayName="73rd Supply Pod [Static GMG]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_ace_csw_20Rnd_20mm_G_belt
			{
				magazine="ace_csw_20Rnd_20mm_G_belt";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_ace_csw_staticGMGCarry
			{
				weapon="ace_csw_staticGMGCarry";
				count=1;
			};
			class _xx_ace_csw_m3CarryTripod
			{
				weapon="ace_csw_m3CarryTripod";
				count=1;
			};
						class _xx_ace_csw_m3CarryTripodLow
			{
				weapon="ace_csw_m3CarryTripodLow";
				count=1;
			};
		};
	};
	class 73_SupplyPod_StaticGMGAmmo: 73_supplypod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Supply Pod [Static GMG Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_ace_csw_20Rnd_20mm_G_belt
			{
				magazine="ace_csw_20Rnd_20mm_G_belt";
				count=40;
			};
		};
	};
	class 73_SupplyPod_VehicleAmmo: 73_supplypod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Supply Pod [Vehicle Ammo]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		ace_rearm_defaultSupply=1000;
	};
	class 73_SupplyPod_VehicleRepair: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [Vehicle Repair]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		ace_repair_canRepair=1;
		ace_cargo_space=20;
		ace_cargo_hasCargo=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
		};
		 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
                    amount = 8;
                };
            };
        };
	};
	class 73_SupplyPod_VehicleRefuel: 73_supplypod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Supply Pod [Vehicle Refuel]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
	};
	class 73_supply_ARBRGL: 73_supplypod
	{
		scope=2;
		scopeCurator = 2;
		displayName="73rd Squad supply pod";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_NSWep_95x40_KURTZ_T_R
			{
				magazine="NSWep_95x40x60_KURTZ";
				count=30;
			};
			class _xx_NSWep_95x40_KURTZ
			{
				magazine="NSWep_95x40x60_KURTZ";
				count=30;
			};
			class _xx_NSWep_762x51_NATO
			{
				magazine="NSWep_762x51_NATO";
				count=30;
			};
			class _xx_NSWep_762x51_NATO_T_R
			{
				magazine="NSWep_762x51_NATO_T_R";
				count=30;
			};
			class _xx_OPTRE_60Rnd_762x51_Mag_APT
			{
				magazine="TCF_60Rnd_762x51_Mag_APT";
				count=30;
			};
			class _xx_NSWep_95x40x60_KURTZ_T_C
			{
				magazine="NSWep_95x40x60_KURTZ_T_C";
				count=30;
			};
			class _xx_NSWep_95x40x60_KURTZ
			{
				magazine="NSWep_95x40x60_KURTZ";
				count=30;
			};
			class _xx_NSWep_95x40x60_KURTZ_T_R
			{
				magazine="NSWep_95x40_KURTZ_T_R";
				count=30;
			};
			
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_M319_HEDP_Grenade_Shell
			{
				magazine="M319_HEDP_Grenade_Shell";
				count=30;
			};
			class _xx_Commando_20Rnd_65_Mag
			{
				magazine="Commando_20Rnd_65_Mag";
				count=100;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine="OPTRE_36Rnd_95x40_Mag";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_JHPT
			{
				magazine="TCF_20Rnd_86x70_Mag_JHPT";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_JHP
			{
				magazine="TCF_20Rnd_86x70_Mag_JHP";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_APT
			{
				magazine="TCF_20Rnd_86x70_Mag_APT";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_AP
			{
				magazine="TCF_20Rnd_86x70_Mag_AP";
				count=30;
			};
			class _xx_TCF_10Rnd_86x70_Mag
			{
				magazine="TCF_10Rnd_86x70_Mag";
				count=30;
			};
			class _xx_TCF_10Rnd_86x70_Mag_Tracer
			{
				magazine="TCF_10Rnd_86x70_Mag_Tracer";
				count=30;
			};
			class _xx_TCF_10Rnd_86x70_Mag_AP
			{
				magazine="TCF_10Rnd_86x70_Mag_AP";
				count=30;
			};

			class _xx_OPTRE_42Rnd_95x40_Mag
			{
				magazine="OPTRE_42Rnd_95x40_Mag";
				count=30;
			};
			class _xx_OPTRE_42Rnd_95x40_Mag_Tracer
			{
				magazine="OPTRE_42Rnd_95x40_Mag_Tracer";
				count=20;
			};
			class _xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine="OPTRE_32Rnd_762x51_Mag";
				count=20;
			};
			class _xx_OPTRE_32Rnd_762x51_Mag_Tracer
			{
				magazine="OPTRE_32Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class _xx_OPTRE_3Rnd_Smoke_Grenade_shell
			{
				magazine="OPTRE_3Rnd_Smoke_Grenade_shell";
				count=20;
			};

			class _xx_OPTRE_3Rnd_SmokeOrange_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeOrange_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_3Rnd_SmokeRed_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeRed_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine="OPTRE_3Rnd_SmokeBlue_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_signalSmokeB
			{
				magazine="OPTRE_signalSmokeB";
				count=20;
			};
			class _xx_OPTRE_signalSmokeP
			{
				magazine="OPTRE_signalSmokeP";
				count=20;
			};
			class _xx_OPTRE_signalSmokeY
			{
				magazine="OPTRE_signalSmokeY";
				count=20;
			};
			class _xx_OPTRE_signalSmokeG
			{
				magazine="OPTRE_signalSmokeG";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_M58S
			{
				weapon="OPTRE_M58S";
				count=2;
			};
			class _xx_OPTRE_Commando_Black
			{
				weapon="OPTRE_Commando_Black";
				count=2;
			};
			class _xx_OPTRE_MA5BGL
			{
				weapon="OPTRE_MA5BGL";
				count=2;
			};
			class _xx_OPTRE_BR55
			{
				weapon="OPTRE_BR55";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_br55hb_scope
			{
				name="optre_br55hb_scope";
				count=2;
			};
			class _xx_optre_m7_sight
			{
				name="optre_m7_sight";
				count=2;
			};
			class _xx_optic_ico_01_black_f
			{
				name="optic_ico_01_black_f";
				count=2;
			};
			class _xx_optic_erco_blk_f
			{
				name="optic_erco_blk_f";
				count=2;
			};
		};
	};
	class 73_supply_Breacher: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [Breaching Kit]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_OPTRE_12Rnd_8Gauge_Pellets
			{
				magazine="OPTRE_12Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_12Rnd_8Gauge_Slugs
			{
				magazine="OPTRE_12Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_OPTRE_12Rnd_8Gauge_HEDP
			{
				magazine="OPTRE_12Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_TCF_12Rnd_8Gauge_Beanbag
			{
				magazine="TCF_12Rnd_8Gauge_Beanbag";
				count=10;
			};
			class _xx_TCF_12Rnd_8Gauge_Incendiary
			{
				magazine="TCF_12Rnd_8Gauge_Incendiary";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine="OPTRE_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine="OPTRE_6Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_HEDP
			{
				magazine="OPTRE_6Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_TCF_6Rnd_8Gauge_Beanbag
			{
				magazine="TCF_6Rnd_8Gauge_Beanbag";
				count=10;
			};
			class _xx_TCF_6Rnd_8Gauge_Incendiary
			{
				magazine="TCF_6Rnd_8Gauge_Incendiary";
				count=10;
			};

			class _xx_TCF_60rnd_5x23mm_Mag_JHPT
			{
				magazine="TCF_60rnd_5x23mm_Mag_JHPT";
				count=100;
			};

			class _xx_TCF_48Rnd_5x23mm_JHP_Mag
			{
				magazine="TCF_48Rnd_5x23mm_JHP_Mag";
				count=10;
			};
			class _xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine="OPTRE_8Rnd_127x40_Mag";
				count=10;
			};
			class _xx_OPTRE_16Rnd_127x40_Mag_Tracer
			{
				magazine="OPTRE_16Rnd_127x40_Mag_Tracer";
				count=10;
			};
			class _xx_OPTRE_12Rnd_12Gauge_Pellets
			{
				magazine="OPTRE_12Rnd_12Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_12Rnd_12Gauge_Smoke
			{
				magazine="OPTRE_12Rnd_12Gauge_Smoke";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_M45A
			{
				weapon="OPTRE_M45A";
				count=3;
			};
			class _xx_OPTRE_M7
			{
				weapon="OPTRE_M7";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m7_sight
			{
				name="optre_m7_sight";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
			class _xx_optre_m7_laser
			{
				name="optre_m7_laser";
				count=2;
			};
		};
	};
	class 73_supply_Marksman: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [Marksman Rifles]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_TCF_15Rnd_DMR_762x51_Mag_APT
			{
				magazine="TCF_15Rnd_DMR_762x51_Mag_APT";
				count=30;
			};
			class _xx_TCF_15Rnd_DMR_762x51_Mag_JHPT
			{
				magazine="TCF_15Rnd_DMR_762x51_Mag_JHPT";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_APT
			{
				magazine="TCF_20Rnd_86x70_Mag_APT";
				count=30;
			};
			class _xx_TCF_20Rnd_86x70_Mag_JHPT
			{
				magazine="TCF_20Rnd_86x70_Mag_JHPT";
				count=30;
			};
			class _xx_OPTRE_10RND_338_AP
			{
				magazine="OPTRE_10RND_338_AP";
				count=30;
			};
			class _xx_OPTRE_10RND_338_SP
			{
				magazine="OPTRE_10RND_338_SP";
				count=30;
			};
			class _xx_OPTRE_10RND_338_VLD
			{
				magazine="OPTRE_10RND_338_VLD";
				count=30;
			};
			class _xx_TCF_32Rnd_762x51_Mag_APT
			{
				magazine="TCF_32Rnd_762x51_Mag_APT";
				count=30;
			};
			class _xx_NSWep_M233_145x114x8_APFSDS
			{
				magazine="NSWep_M233_145x114x8_APFSDS";
				count=20;
			};
			class _xx_NSWep_M233_145x114x8_APFSDS_TC
			{
				magazine="NSWep_M233_145x114x8_APFSDS_TC";
				count=20;
			};

			class _xx_TCF_4Rnd_145x114_Mag_APFSDST
			{
				magazine="TCF_4Rnd_145x114_Mag_APFSDST";
				count=20;
			};
			class _xx_TCF_4Rnd_145x114_Mag_HEDPT
			{
				magazine="TCF_4Rnd_145x114_Mag_HEDPT";
				count=10;
			};
			class _xx_TCF_4Rnd_145x114_Mag_NARQ
			{
				magazine="TCF_4Rnd_145x114_Mag_NARQ";
				count=10;
			};
			class _xx_TCF_4Rnd_145x114_Mag_HVAPT
			{
				magazine="TCF_4Rnd_145x114_Mag_HVAPT";
				count=10;
			};
			
		};
		class TransportWeapons
		{
			class _xx_OPTRE_M392_DMR
			{
				weapon="OPTRE_M392_DMR";
				count=2;
			};
			class _xx_OPTRE_M295_BMR
			{
				weapon="OPTRE_M295_BMR";
				count=2;
			};
			class _xx_OPTRE_SRS99D
			{
				weapon="OPTRE_SRS99D";
				count=2;
			};
			class _xx_OPTRE_SRS99C
			{
				weapon="OPTRE_SRS99C";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m392_scope
			{
				name="optre_m392_scope";
				count=2;
			};
			class _xx_optic_ams
			{
				name="optic_ams";
				count=2;
			};
			class _xx_optre_srs99_scope
			{
				name="optre_srs99_scope";
				count=2;
			};
			class _xx_optre_srs99d_suppressor
			{
				name="optre_srs99d_suppressor";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
		};
	};
	class 73_supply_Sniper: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [SR99DX Sniper]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_TCF_4Rnd_145x114_Mag_APFSDST
			{
				magazine="TCF_4Rnd_145x114_Mag_APFSDST";
				count=20;
			};
			class _xx_TCF_4Rnd_145x114_Mag_HEDPT
			{
				magazine="TCF_4Rnd_145x114_Mag_HEDPT";
				count=10;
			};
			class _xx_TCF_4Rnd_145x114_Mag_NARQ
			{
				magazine="TCF_4Rnd_145x114_Mag_NARQ";
				count=10;
			};
			class _xx_TCF_4Rnd_145x114_Mag_HVAPT
			{
				magazine="TCF_4Rnd_145x114_Mag_HVAPT";
				count=10;
			};
			class _xx_TCF_20Rnd_86x70_Mag_APT
			{
				magazine="TCF_20Rnd_86x70_Mag_APT";
				count=10;
			};
			class _xx_TCF_20Rnd_86x70_Mag_JHPT
			{
				magazine="TCF_20Rnd_86x70_Mag_JHPT";
				count=10;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_SRS99D
			{
				weapon="OPTRE_SRS99D";
				count=2;
			};
			class _xx_OPTRE_SRS99C
			{
				weapon="OPTRE_SRS99C";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_srs99_scope
			{
				name="optre_srs99_scope";
				count=2;
			};
			class _xx_optre_srs99d_suppressor
			{
				name="optre_srs99d_suppressor";
				count=2;
			};
			class _xx_optre_m7_silencer
			{
				name="optre_m7_silencer";
				count=2;
			};
		};
	};
	class 73_supply_Autorifles: 73_supplypod
	{
		scope=2;
		displayname="73rd Supply Pod [Machine Guns]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			
			class _xx_OPTRE_200Rnd_95x40_Box_HPSAPT
			{
				magazine="OPTRE_100Rnd_95x60_Box_HPSAPT";
				count=10;
			};
			class _xx_TCF_Gamma_762_mag_Tracer
			{
				magazine="TCF_Gamma_762_mag_Tracer";
				count=15;
			};
			class _xx_MA_200Rnd_762x51_FMJAP_Mag_Tracer
			{
				magazine="MA_200Rnd_762x51_FMJAP_Mag_Tracer";
				count=15;
			};

			class _xx_TCF_200Rnd_95x40_Box_JHPT
			{
				magazine="TCF_200Rnd_95x40_Box_JHPT";
				count=10;
			};
			class _xx_OPTRE_100Rnd_95x40_Box_JHPT
			{
				magazine="TCF_100Rnd_95x40_Box_JHPT";
				count=10;
			};
			class _xx_OPTRE_200Rnd_95x40_Box_Tracer
			{
				magazine="OPTRE_200Rnd_95x40_Box_Tracer";
				count=10;
			};
			class _xx_TCF_200Rnd_762x51_Box_APT
			{
				magazine="TCF_200Rnd_762x51_Box_APT";
				count=10;
			};
			class _xx_OPTRE_400Rnd_762x51_Box_Tracer
			{
				magazine="OPTRE_400Rnd_762x51_Box_Tracer";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTREM247
			{
				weapon="OPTRE_M247";
				count=2;
			};
			class _xx_OPTRE_M73
			{
				weapon="OPTRE_M73";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optre_m7_sight
			{
				name="optre_m7_sight";
				count=2;
			};
			class _xx_optic_hamr
			{
				name="optic_hamr";
				count=2;
			};
			class _xx_optre_m73_smartlink
			{
				name="optre_m73_smartlink";
				count=2;
			};
			class _xx_bipod_01_f_blk
			{
				name="bipod_01_f_blk";
				count=4;
			};
			class _xx_Optre_Evo_Sight_Riser
			{
				name="Optre_Evo_Sight_Riser";
				count=4;
			};
		};
	};
	class 73_supply_ATLauncher: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [AT Launchers]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_TCF_1Rnd_50x137_HE
			{
				magazine="TCF_2Rnd_50x137_HE";
				count=4;
			};
			class _xx_OPTRE_1Rnd_50x137_HEAT
			{
				magazine="TCF_2Rnd_50x137_HEAT";
				count=4;
			};
			class _xx_OPTRE_1Rnd_50x137_PEN
			{
				magazine="TCF_2Rnd_50x137_PEN";
				count=4;
			};
			class _xx_OPTRE_M41_Twin_HEAT_SACLOS
			{
				magazine="OPTRE_M41_Twin_HEAT_SACLOS";
				count=8;
			};
			class _xx_OPTRE_M41_Twin_HEAT_SALH
			{
				magazine="OPTRE_M41_Twin_HEAT_SALH";
				count=8;
			};
			class _xx_OPTRE_M41_Twin_HEAT_Thermal
			{
				magazine="OPTRE_M41_Twin_HEAT_Thermal";
				count=8;
			};
		};
		class TransportWeapons
		{
			class _xx_OPTRE_M41_SSR
			{
				weapon="OPTRE_M41_SSR";
				count=3;
			};
			class _xx_TCF_M57_Pilum_b
			{
				weapon="TCF_M57_Pilum_b";
				count=3;
			};
		};
		class TransportItems
		{
		};
	};
	class 73_supply_ExplosivesPack: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [Explosives]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_UNSCMine_Range_Mag
			{
				magazine="UNSCMine_Range_Mag";
				count=2;
			};
			class _xx_C7_Remote_Mag
			{
				magazine="C7_Remote_Mag";
				count=5;
			};
			class _xx_C12_Remote_Mag
			{
				magazine="C12_Remote_Mag";
				count=4;
			};
			class _xx_M168_Remote_Mag
			{
				magazine="M168_Remote_Mag";
				count=4;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=5;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 73_supply_TACResupply: 73_supplypod
	{
		scope=2;
		displayName=" 73rd Supply Pod [Utility/Sidearm]";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{
			class _xx_tf_anprc152
			{
				name="tf_anprc152";
				count=10;
			};
			class _xx_ACE_UAVBattery
			{
				name="ACE_UAVBattery";
				count=10;
			};
			class _xx_ACE_bodyBag
			{
				name="ACE_bodyBag";
				count=20;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=20;
			};
			class _xx_B_UavTerminal
			{
				name="B_UavTerminal";
				count=2;
			};

		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
			class _xx_16rnd_10mm_AP
			{
				magazine="16rnd_10mm_AP";
				count=30;
			};
			
			class _xx_TCF_60rnd_5x23mm_Mag_JHPT
			{
				magazine="TCF_60rnd_5x23mm_Mag_JHPT";
				count=30;
			};
			class _xx_TCF_8Rnd_127x40_Mag_NARQ
			{
				magazine="TCF_8Rnd_127x40_Mag_NARQ";
				count=15;
			};
			class _xx_TCF_8Rnd_127x40_Mag_APT
			{
				magazine="TCF_8Rnd_127x40_Mag_APT";
				count=30;
			};
			class _xx_TCF_12Rnd_127x40_Mag_NARQ
			{
				magazine="TCF_12Rnd_127x40_Mag_NARQ";
				count=15;
			};
			class _xx_TCF_12Rnd_127x40_Mag_APT
			{
				magazine="TCF_12Rnd_127x40_Mag_APT";
				count=30;
			};
			class _xx_OPTRE_M9_Frag
			{
				magazine="OPTRE_M9_Frag";
				count=20;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=100;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=10;
			};
			class _xx_OPTRE_M2_Smoke_Green
			{
				magazine="OPTRE_M2_Smoke_Green";
				count=10;
			};
			class _xx_ACE_HandFlare_Green
			{
				magazine="ACE_HandFlare_Green";
				count=25;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=25;
			};
			class _xx_ACE_Chemlight_HiGreen
			{
				magazine="ACE_Chemlight_HiGreen";
				count=25;
			};
			class _xx_ACE_Chemlight_HiBlue
			{
				magazine="ACE_Chemlight_HiBlue";
				count=25;
			};
			class _xx_ACE_Chemlight_HiWhite
			{
				magazine="ACE_Chemlight_HiWhite";
				count=25;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=25;
			};
			class _xx_TCF_12Rnd_8Gauge_Beanbag
			{
				magazine="TCF_12Rnd_8Gauge_Beanbag";
				count=15;
			};
		};
	};
	class 73_supply_Emptypod: 73_supplypod
	{
		scope=2;
		displayName="73rd Supply Pod [73rd Empty Supply pod]";
		hiddenselectionstextures[]=
		{
			"73_Supplypod\73_Pod_co.paa"
		};
		class TransportItems
		{

		};
	};
	class Module_OPTRE_PelicanSupplyDrop: Module_F
	{
		class Arguments
		{
			class box1
			{
				defaultValue="73_supply_NEWACE_Medical";
				class values
				{
					class n1
					{
						name="none";
						value="none";
					};
					class n2
					{
						name="Random Supply Pod";
					};
					class n3
					{
						name="73rd Autorifle Supply Pod";
						value="73_supply_Autorifles";
					};
					class n4
					{
						name="73rd AT Launcher Supply Pod";
						value="73_supply_ATLauncher";
					};
					class n5
					{
						name="73rd Explosives Supply Pod";
						value="73_supply_ExplosivesPack";
					};
					class n6
					{
						name="73rd Squad Supply Pod";
						value="73_supply_ARBRGL";
					};
					class n7
					{
						name="73rd CQB Supply Pod";
						value="73_supply_Breacher";
					};
					class n8
					{
						name="73rd Marksman Supply Pod";
						value="73_supply_Marksman";
					};
					class n9
					{
						name="73rd Sniper Supply Pod";
						value="73_supply_Sniper";
					};
					class n10
					{
						name="73rd Medical Supply Pod";
						value="73_supply_NEWACE_Medical";
					};
					class n11
					{
						name="73rd Mortar Ammo Supply Pod";
						value="73_supply_Mortar_Ammo";
					};
					class n12
					{
						name="73rd Mortar Supply Pod";
						value="73_supply_Mortar";
					};
					class n13
					{
						name="73rd Static HMG";
						value="73_SupplyPod_StaticHMG";
					};
					class n14
					{
						name="73rd Static HMG Ammo";
						value="73_SupplyPod_StaticHMGAmmo";
					};
					class n15
					{
						name="73rd Static GMG";
						value="73_SupplyPod_StaticGMG";
					};
					class n16
					{
						name="73rd Static GMG Ammo";
						value="73_SupplyPod_StaticGMGAmmo";
					};
					
					class n17
					{
						name="73rd Vehicle Ammo";
						value="73_SupplyPod_VehicleAmmo";
					};
					class n18
					{
						name="73rd Vehicle Repair";
						value="73_SupplyPod_VehicleRepair";
					};
					class n19
					{
						name="73rd Vehicle Refuel";
						value="73_SupplyPod_VehicleRefuel";
					};
					class n20
					{
						name="73rd Tactical/Misc Supply Pod";
						value="73_supply_TACResupply";
					};
					class n21
					{
						name="73rd Empty Supply pod";
						value="73_supply_Emptypod";
					};
				};
			};
		};
	};
	class 73_supply_Light: 73_supplypod
	{
		scope=2;
		displayname="73rd Supply Pod Light";
		class TransportMagazines
		{
			class _xx_OPTRE_60Rnd_762x51_Mag_JHPT
			{
				magazine="OPTRE_60Rnd_762x51_Mag_JHPT";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{

			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=3;
			};
			class _xx_B_UavTerminal
			{
				name="B_UavTerminal";
				count=2;
			};
		};
	};
};
