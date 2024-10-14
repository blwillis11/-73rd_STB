class 73_ODST_Rifleman: OPTRE_UNSC_ODST_Soldier {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Rifleman";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        weapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw","Put"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
    };
	class 73_ODST_Autorifleman: OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Autorifleman";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Autorifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Autorifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
    };
	class 73_ODST_Grenadier: OPTRE_UNSC_ODST_Soldier {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Grenadier";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		}; 
        hiddenSelectionsTextures[] = 
		{
		}; 
        weapons[] = 
		{
			"OPTRE_MA37BGL",
			"OPTRE_M6G",
			"Throw","Put"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37BGL",
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Demo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Demo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"OPTRE_3Rnd_Smoke_Grenade_shell"

		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"OPTRE_3Rnd_Smoke_Grenade_shell"
		};
    };
	class 73_ODST_Demo: OPTRE_UNSC_ODST_Soldier_DemolitionsExpert {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Demo";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Demo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Demo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
    };
	class 73_ODST_Medic: OPTRE_UNSC_ODST_Soldier_Paramedic {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Medic";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
		weapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw","Put"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Medic",
			"73_M56_Medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Medic",
			"73_M56_Medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		};
		backpack="73_Rucksack_med";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
    };
	class 73_ODST_Sniper: OPTRE_UNSC_ODST_Soldier_Scout_Sniper {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Sniper";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
    };
	class 73_ODST_Marksmen: OPTRE_UNSC_ODST_Soldier_Marksman {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Marksman";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Marksman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Marksman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
    };
	class 73_ODST_AT: OPTRE_UNSC_ODST_Soldier_Rifleman_AT {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST AT";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
		weapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw","Put","OPTRE_M41_SSR"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw",
			"Put",
			"OPTRE_M41_SSR"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M41_Twin_HEAT",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"OPTRE_M2_Smoke",
			"OPTRE_M2_Smoke_Green"
		};
    };
	class 73_ODST_TeamLead: OPTRE_UNSC_ODST_Soldier_TeamLeader {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Team Leader";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
		weapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw","Put"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack_rto";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
    };
	class 73_ODST_SquadLead: OPTRE_UNSC_ODST_Soldier_TeamLeader {
        author="73rd S-4 Team"; 
        scope = 2;
		scopeCurator=2;
        faction = "73_Fac";
		displayName= "ODST Squad Leader";
		uniformclass= "73_uniform";
		editorSubcategory = "sc_odst";
		weapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw","Put"
		};
        respawnWeapons[] = 
		{
			"OPTRE_MA37b",
			"OPTRE_M6G",
			"Throw",
			"Put"
		};
        linkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
		}; 
        respawnLinkedItems[] = 
		{
			"73_Odst_Helmet_Standard",
			"73_M56_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"OPTRE_NVG"
			}; 
		backpack="73_Rucksack_rto";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_8Rnd_127x40_AP_Mag",
			"OPTRE_8Rnd_127x40_AP_Mag",
		};
    };