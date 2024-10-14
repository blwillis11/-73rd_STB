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
			"TCF_WEAPONRY"
			
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

	//AMMO
	class NSWep_M233_145x114x4_APFSDS;
	
	class 73_SRS99AM:NSWep_SRS99AM 
	{
		displayName = "[73] SRS99AM";
        baseWeapon = "73_SRS99AM"
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
    }
};