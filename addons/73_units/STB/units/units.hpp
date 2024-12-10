class O_Soldier_F;
class 73_UnitBase: O_Soldier_F
{
    scope = 0;
    scopeCurator = 0;

    author = "73rd S-4 Team";
    side = 1;
    faction = "73_STB";
    editorCategory = "73_STB";

    identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};
    allowedfacewear[] = {""};
    allowedHeadgear[] = {""};
    allowedHeadgearB[] = {""};
    headgearList[] = {""};
};

class 73_Crewman: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman";

    editorSubcategory = "73_Mechanized_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_Mech_BDU_Medium_Woodland_NC";
    backpack = "";

    weapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","VES_CH252_WDL_Crew","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","VES_CH252_WDL_Crew","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_Crewman_Officer: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Crewman Officer";

    editorSubcategory = "73_Mechanized_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 1;
    canDeactivateMines = 0;

    uniformClass = "73_Mech_BDU_Light_Woodland";
    backpack = "";

    weapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"73_M7_SMG","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"MA_Marine_Pouches_Engineer_Medium_B","73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"OPTRE_Biofoam"};
    respawnItems[] = {"OPTRE_Biofoam"};
};

class 73_Aviator_Officer: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Aviator Officer";

    editorSubcategory = "73_Aviation_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_air_Dress_Uniform";
    backpack = "73_Rucksack_invis";

    weapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};

class 73_Aviator: 73_UnitBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] Aviator";

    editorSubcategory = "73_Aviation_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_H2A_g";
    backpack = "73_Rucksack_invis";

    weapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA5C","OPTRE_M6G_SF", "Throw", "Put"};

    linkedItems[] = {"19th_invisible_Vest","OPTRE_FC_VX19_Helmet_Urban","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"19th_invisible_Vest","OPTRE_FC_VX19_Helmet_Urban","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

    items[] = {"ACE_EarPlugs","FirstAidKit"};
    respawnItems[] = {"ACE_EarPlugs","FirstAidKit"};
};