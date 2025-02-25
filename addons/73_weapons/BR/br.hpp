class NSWep_BR55HBM1;

class 73_BR55HBM1_DMR:NSWep_BR55HBM1
{
    displayName = "[73] BR55HB Mod 1";
    baseWeapon = "73_BR55HBM1_DMR"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55"};
    magazines[]=
    {
        "73_95x40_36Rnd",
        "73_95x40_36Rnd_T_G",
        "73_95x40_36Rnd_T_R",
        "73_95x40_36Rnd_T_IR"
    };
    class WeaponSlotsInfo:WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "NSWep_BR55M1A2LR_Optic",
                "MA_BR55HB_Scope",
                "optre_m392_scope",
                "optre_br55hb_scope",
                "OPTRE_BR45_Scope",
                "OPTRE_BMR_Scope",
                "OPTRE_M12_Optic",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Desert",
                "Optre_Recon_Sight_UNSC",
                "Optre_Recon_Sight_Snow"
            };
        };
    };
};

class MA_BR55_HB;
class 73_BR55_HB:MA_BR55_HB {
    displayName = "[73] BR55HB";
    baseWeapon = "73_BR55_HB"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55HB"};
    magazines[]=
    {
        "73_36Rnd_95x40_HPSAP_Mag"
    };
    class WeaponSlotsInfo:WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "NSWep_BR55M1A2LR_Optic",
                "MA_BR55HB_Scope",
                "optre_m392_scope",
                "optre_br55hb_scope",
                "OPTRE_BR45_Scope",
                "OPTRE_BMR_Scope",
                "OPTRE_M12_Optic",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Desert",
                "Optre_Recon_Sight_UNSC",
                "Optre_Recon_Sight_Snow"
            };
        };
    };
};
class 73_BR55_Recon_HB:MA_BR55_HB {
    displayName = "[73] BR55HB [Recon]";
    baseWeapon = "73_BR55_Recon_HB"
    author= "73rd S-4 Team";
    magazineWell[] = {"73_BR55HB"};
    class WeaponSlotsInfo:WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "NSWep_BR55M1A2LR_Optic",
                "MA_BR55HB_Scope",
                "optre_m392_scope",
                "optre_br55hb_scope",
                "OPTRE_BR45_Scope",
                "OPTRE_BMR_Scope",
                "OPTRE_M12_Optic",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Desert",
                "Optre_Recon_Sight_UNSC",
                "Optre_Recon_Sight_Snow"
            };
        };
    };
    magazines[]=
    {
        "73_36Rnd_95x40_HPSAP_Mag"
    };
    hiddenSelectionsTextures[]=
    {
        "73_Weapons\data\BR55\BR55HB_Recon_Back_co.paa",
        "73_Weapons\data\BR55\BR55HB_Recon_Barrel_co.paa",
        "73_Weapons\data\BR55\BR55HB_Recon_Top_co.paa",
        "73_Weapons\data\BR55\BR55HB_Recon_Front_co.paa",
        "73_Weapons\data\BR55\BR55HB_Recon_Mag_co.paa"
    };
};