class CfgPatches
{
    class 73
    {
        authors[] = {"1stLt. B. Salmon"};
        name = "[73] STB";
        
        units[]=
        {
            "73_73_ODST_Grenadier",
            "73_73_ODST_Rifleman",
            "73_73_ODST_AT",
            "73_73_ODST_Autorifleman",
            "73_73_ODST_Sniper",
            "73_73__Crewman",
            "73_73_ODST_Marksman",
            "73_73__Crewman_Officer",
            "73_73_Aviator_Officer",
            "73_73_ODST_Officer",
            "73_73_ODST_Demo",
            "73_73_ODST_Medic",
            "73_73_Aviator",
            "73_73_ODST_Team_Lead",
            "73_73_ODST_Squad_Lead",
            "73_73_ODST_BDU_Urban_NC",
            "73_73_Mech_Medium_BDU_Woodland_NC",
            "73_73_Mech_Light_BDU_Woodland",
            "73_73_Aviation_Dress_Uniform_v",
            "73_73_ODST_Dress_Uniform_v",
            "73_73_H2A_U_g",
            "73_73_ODST_Grenadier_backpack",
            "73_73_ODST_Rifleman_backpack",
            "73_73_ODST_AT_backpack",
            "73_73_ODST_Autorifleman_backpack",
            "73_73_ODST_Sniper_backpack",
            "73_73_ODST_Marksman_backpack",
            "73_73_Aviator_Officer_backpack",
            "73_73_ODST_Officer_backpack",
            "73_73_ODST_Demo_backpack",
            "73_73_ODST_Medic_backpack",
            "73_73_Aviator_backpack",
            "73_73_ODST_Team_Lead_backpack",
            "73_73_ODST_Squad_Lead_backpack",
            "73_73_IFV_76_Honeybadger",
            "73_73_M494_Oryx",
            "73_73_HDV_134_Buffalo_Resupply",
            "73_73_M8088_M_Scorpion",
            "73_73_HDV_134_Buffalo_TT",
            "73_73_AV_14_Hornet",
            "73_73_HDV_134_Buffalo_TT_C",
            "73_73_APC_76_Honeybadger",
            "73_73_M19_Hyena_GMG",
            "73_73_M875_Scorpion_SPH",
            "73_73_CF_188A_Hornet",
            "73_73_M19_Hyena_HMG",
            "73_73_D77_TC_Pelican"
        };
        weapons[]=
        {
            "73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_K_ARD_Optic_S",
            "73_MRS10_DMR_muzzle_snds_L_optic_AMS",
            "73_73_BDU_ODST_Urban_NC",
            "73_73_Mech_BDU_Medium_Woodland_NC",
            "73_73_Mech_BDU_Light_Woodland",
            "73_73_air_Dress_Uniform",
            "73_73_ODST_Dress_Uniform",
            "73_73_H2A_g"
        };
        
        requiredVersion = "2.18.152418";
        requiredAddons[] =
        {
            "OPTRE_Weapons_AR",
            "OPTRE_Weapons_M6G",
            "73_weapons",
            "OPTRE_Weapons_MG",
            "OPTRE_Weapons_SMG",
            "Misriah_Armory_Weapons",
            "73_units",
            "73_vehicles",
            "OPTRE_Vehicles_Hornet",
            "Splits_Vehicles_Air_Pelican"
        };
    };
};

class CfgFactionClasses
{
    class 73
    {
        displayName = "[73] STB";
        side = 1;
        flag = "ca\Ca_E\data\flag_opfor_co.paa";
        icon = "ca\Ca_E\data\flag_opfor_co.paa";
        priority = 0;
    };
};

#include "categories.hpp"

class CfgWeapons
{
    #include "weapons.hpp"
    #include "uniforms.hpp"
};

class CfgVehicles
{
    #include "units.hpp"
    #include "uniformBases.hpp"
    #include "backpacks.hpp"
    #include "vehicles.hpp"
};

class CfgGroups
{
    #include "groups.hpp"
};
