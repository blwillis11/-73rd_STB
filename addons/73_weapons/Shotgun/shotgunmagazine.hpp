class OPTRE_6Rnd_8Gauge_Pellets;
class OPTRE_12Rnd_12Gauge_Pellets;

class 73_6Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
{
    model = "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
    scope = 2;
    displayname	= "6Rnd 8 Gauge Pellets";
    displaynameshort = "8 Gauge Pellets";
    ammo = "73_8Gauge_Pellets";
    count = 6;
    initspeed = 500;
    picture	= "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
    descriptionshort = "6 Rounds of 8 Gauge Pellets";
    mass = 10;
};
class 73_6Rnd_8Gauge_Slugs: 73_6Rnd_8Gauge_Pellets
{
    model = "\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
    displayname	= "6Rnd 8 Gauge Slugs";
    displaynameshort = "8 Gauge Slugs";
    ammo = "73_8Gauge_Slugs";
    initspeed = 800;
    picture	= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
    descriptionshort = "6 Rounds of 8 Gauge Slugs";
    mass = 10;
    count = 6;
};
class 73_12Rnd_8Gauge_Pellets: 73_6Rnd_8Gauge_Pellets
{
    displayname	= "12Rnd 8 Gauge Pellets";
    count = 12;
    descriptionshort = "12 Rounds of 8 Gauge Pellets";
    mass = 16;
};
class 73_12Rnd_8Gauge_Slugs: 73_6Rnd_8Gauge_Slugs
{
    displayname = "12Rnd 8 Gauge Slugs";
    count = 12;
    descriptionshort = "12 Rounds of 8 Gauge Slugs";
    mass = 16;
};
class 73_6Rnd_8Gauge_HEDP: 73_6Rnd_8Gauge_Slugs
{
    displayname	= "6Rnd 8 Gauge HEDP";
    displaynameshort = "8 Gauge HEDP";
    ammo = "73_8Gauge_HEDP";
    count = 6;
    initspeed = 1000;
    descriptionshort = "6 Rounds of Pure Overkill";
    mass = 10;
    tracersEvery = 1;
    lastRoundsTracer = 6;
};
class 73_12Rnd_8Gauge_HEDP: 73_6Rnd_8Gauge_HEDP
{
    displayname	= "12Rnd 8 Gauge HEDP";
    count = 12;
    descriptionshort = "12 Rounds of 8 Gauge HEDP";
    mass = 16;
};

//Bulldog
class 73_24Rnd_12Gauge_Pellets: 73_6Rnd_8Gauge_Pellets
{
    displayname	= "24Rnd 12 Gauge Pellets";
    count = 24;
    descriptionshort = "24 Rounds of 12 Gauge Pellets";
    mass = 32;
    model				= "\OPTRE_Weapons\bulldog\drum.p3d";
    modelSpecial 		= "\OPTRE_Weapons\bulldog\drum.p3d";
    ammo = "73_12Gauge_Pellets";
    hiddenSelectionsTextures[] = {"\OPTRE_Weapons\bulldog\data\Body_co.paa"};
};
class 73_24Rnd_12Gauge_HE: 73_6Rnd_8Gauge_HEDP
{
    displayname	= "24Rnd 12 Gauge HE";
    count = 24;
    descriptionshort = "24 Rounds of 12 Gauge HE";
    mass = 32;
    model				= "\OPTRE_Weapons\bulldog\drum.p3d";
    modelSpecial 		= "\OPTRE_Weapons\bulldog\drum.p3d";
    hiddenSelectionsTextures[] = {"\OPTRE_Weapons\bulldog\data\Body_co.paa"};
    ammo = "73_12Gauge_HE";
};
class 73_24Rnd_12Gauge_Slugs: 73_6Rnd_8Gauge_Slugs
{
    displayname = "24Rnd 12 Gauge Slugs";
    count = 24;
    descriptionshort = "24 Rounds of 12 Gauge Slugs";
    mass = 32;
    model				= "\OPTRE_Weapons\bulldog\drum.p3d";
    modelSpecial 		= "\OPTRE_Weapons\bulldog\drum.p3d";
    hiddenSelectionsTextures[] = {"\OPTRE_Weapons\bulldog\data\Body_co.paa"};
    ammo = "73_12Gauge_Slugs";
};
class 73_24Rnd_12Gauge_Smoke: 73_6Rnd_8Gauge_Slugs
{
    displayname = "24Rnd 12 Gauge Smoke";
    count = 24;
    descriptionshort = "24 Rounds of 12 Gauge Smoke";
    mass = 32;
    model				= "\OPTRE_Weapons\bulldog\drum.p3d";
    modelSpecial 		= "\OPTRE_Weapons\bulldog\drum.p3d";
    hiddenSelectionsTextures[] = {"\OPTRE_Weapons\bulldog\data\Body_co.paa"};
    ammo = "73_12Gauge_Smoke";
};
