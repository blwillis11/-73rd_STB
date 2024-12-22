class Titan_AT;

class 73_HEAT:Titan_AT{
    count=2;
    displayname	= "[73] M19 HEAT Twin Rockets";
    displaynameshort = "HEAT";
    descriptionshort = "High Explosive Anti Tank";
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