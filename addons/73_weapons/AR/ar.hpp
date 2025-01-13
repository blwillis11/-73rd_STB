class OPTRE_MA37B;
class OPTRE_MA37BGL;
class OPTRE_MA37K;
class OPTRE_MA5B;
class OPTRE_MA5BGL;
class OPTRE_MA5K;

class 73_MA37B: OPTRE_MA37B
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37B ICWS Assault Rifle";
    baseWeapon = "73_MA37B";
    magazines[] = {"73_32Rnd_762x51_Mag_Tracer_Yellow"}; // Requires a magazine to be defined so that the "Impact" slider in the arsenal will have a value. This also defines the standard magazine when the weapon is spawned.
    magazineWell[]={"73_ar"};
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\ma37b_co.paa",
        "optre_weapons\ar\data\ammocounter37b_co.paa",
        "optre_weapons\ar\data\r_ar_ca.paa"
    };
};
class 73_MA37BGL: OPTRE_MA37BGL
{
    author= "73rd S-4 Team";
    displayName = "[73] MA37B + M301 GL Assault Rifle";
    baseWeapon 	= "73_MA37BGL";
    magazines[]             = {
        "73_32Rnd_762x51_Mag_Tracer_Yellow"
    };
    magazineWell[]  = {"73_ar"};
    hiddenSelections[]= {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo_reticle"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\ma37b_co.paa",
        "optre_weapons\ar\data\ammocounter37b_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        "optre_weapons\ar\data\r_ar_ca.paa"
    };
};
class 73_MA37K: OPTRE_MA37K
{
    baseWeapon = "73_MA37K";
    author= "73rd S-4 Team";
    displayName = "[73] MA37K Carbine";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        "\OPTRE_Weapons\MA37K\data\MA37K_CO.paa"
    };
    magazines[] = {"73_32Rnd_762x51_Mag_Tracer_Yellow"};
    magazineWell[]={"73_ar"};
    HUD_BulletInARows = 2;
    HUD_TotalPosibleBullet = 32;
};

class 73_MA5B: OPTRE_MA5B
{
    author= "73rd S-4 Team";
    displayName             = "[73] MA5B ICWS Assault Rifle";
    magazines[]             = {"73_60Rnd_762x51_Mag_Tracer_Yellow"};
    magazineWell[] 			= {"73_ar60rnd"};
    baseWeapon 				= "73_MA5B";
    hiddenSelections[]= {
        "camo",
        "camo1",
        "camo2",
        "camo_reticle"
    };
    hiddenSelectionsTextures[] = {
        "optre_weapons\ar\data\weapon_co.paa",
        "optre_weapons\ar\data\smartlink_co.paa",
        "optre_weapons\ar\data\cover_co.paa",
        "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 60;
        class MuzzleSlot: OPTRE_MuzzleSlot
        {
            compatibleitems[] =
                {
                    "OPTRE_MA5Supressor"
                };
        };
        class CowsSlot: OPTRE_CowsSlot_Rail
        {
            compatibleitems[]=
            {
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5 SmartLink",
                "Optre_Evo_Sight",
                "Optre_Evo_Sight_Covie",
                "Optre_Evo_Sight_Spartan",
                "Optre_Evo_Sight_Innie",
                "Optre_Evo_Sight_Yellow",
                "Optre_Evo_Sight_Riser",
                "Optre_Evo_Sight_Riser_Covie",
                "Optre_Evo_Sight_Riser_Spartan",
                "Optre_Evo_Sight_Riser_Innie",
                "Optre_Evo_Sight_Riser_Yellow",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_UNSC"
            };
        };
        class PointerSlot: OPTRE_Pointers
        {
            compatibleitems[] =
            {
                "OPTRE_BMR_Laser",
                "acc_flashlight",
            };
        };
        class UnderBarrelSlot: OPTRE_UnderBarrelSlot_rail
        {
            compatibleitems[] = {};
        };
    };
};
class 73_MA5BGL: OPTRE_MA5BGL
{
    author = "Article 2 Studios";
    displayName         = "[73] MA5B ICWS Assault Rifle [M301]";
    baseWeapon 			= "73_MA5BGL";

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 60;
        class MuzzleSlot: OPTRE_MuzzleSlot
        {
            compatibleitems[] =
                {
                    "OPTRE_MA5Supressor"
                };
        };
        class CowsSlot: OPTRE_CowsSlot_Rail
        {
            compatibleitems[]=
            {
                "OPTRE_MA5_BUIS",
                "OPTRE_MA5 SmartLink",
                "Optre_Evo_Sight",
                "Optre_Evo_Sight_Covie",
                "Optre_Evo_Sight_Spartan",
                "Optre_Evo_Sight_Innie",
                "Optre_Evo_Sight_Yellow",
                "Optre_Evo_Sight_Riser",
                "Optre_Evo_Sight_Riser_Covie",
                "Optre_Evo_Sight_Riser_Spartan",
                "Optre_Evo_Sight_Riser_Innie",
                "Optre_Evo_Sight_Riser_Yellow",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_UNSC"
            };
        };
        class PointerSlot: OPTRE_Pointers
        {
            compatibleitems[] =
            {
                "OPTRE_BMR_Laser",
                "acc_flashlight",
            };
        };
        class UnderBarrelSlot: OPTRE_UnderBarrelSlot_rail
        {
            compatibleitems[] = {};
        };
    };
};
class 73_MA5K: OPTRE_MA5K
{
    displayname = "[73] MA5K ICWS Carbine";
    baseWeapon 	= "73_MA5K";
    magazines[] = {"73_32Rnd_762x51_Mag_UW"};
    magazineWell[] = {"73_ar32rnd_uw"};
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[]  = {"OPTRE_Weapons\ar\data\ma5k_co.paa"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 40;
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[] =
            {
                "OPTRE_MA5Suppressor"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "OPTRE_MA5_BUIS",
                "Optre_Evo_Sight",
                "Optre_Evo_Sight_Covie",
                "Optre_Evo_Sight_Spartan",
                "Optre_Evo_Sight_Innie",
                "Optre_Evo_Sight_Yellow",
                "Optre_Evo_Sight_Riser",
                "Optre_Evo_Sight_Riser_Covie",
                "Optre_Evo_Sight_Riser_Spartan",
                "Optre_Evo_Sight_Riser_Innie",
                "Optre_Evo_Sight_Riser_Yellow",
                "Optre_Recon_Sight",
                "Optre_Recon_Sight_Green",
                "Optre_Recon_Sight_Red",
                "Optre_Recon_Sight_UNSC"
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleitems[] =
            {
                "OPTRE_M45_Flashlight"
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot
        {
            compatibleitems[] = {};
        };
    };
};