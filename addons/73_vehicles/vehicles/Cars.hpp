class VES_HDV134_Resupply;

class 73_HDV134_Resupply:VES_HDV134_Resupply
{
    displayName="[73] HDV-134 Buffalo [Resupply]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
     class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "Resupply";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT;

class 73_HDV134_TT:VES_HDV134_TT
{
    displayName="[73] HDV-134 Buffalo [TT]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[]=
    {
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "TT";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};

class VES_HDV134_TT_C;

class 73_HDV134_TT_C:VES_HDV134_TT_C
{
    displayName="[73] HDV-134 Buffalo [TT-C]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
    hiddenSelectionsTextures[]=
    {
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa",
        "\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_C_CO.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "HDV134";
            Type = "TT-C";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa"",""\V_FZ_Ground_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa"",""\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa""]]",
            };
        };
    };
};



class VES_M12;

class 73_M12 : VES_M12
{
    displayName="[73] M12 FAV Warthog [Unarmed]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "FAV Unarmed";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"",""\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"",""\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa""]]",
            };
        };
    };
};

class VES_M12_LRV;

class 73_M12_LRV : VES_M12_LRV
{
    displayName="[73] M12 LRV Warthog [M41 LAAG]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV LAAG";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"",""\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa"",""\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa""]]",
            };
        };
    };
};
class VES_M12G1_LRV;

class 73_M12G1_LRV : VES_M12G1_LRV
{
    displayName="[73] M12 LRV Warthog [M68 ALIM]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M68_CO.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV ALIM";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M68_CO.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa""]]",
            };
        };
    };
};
class VES_M12A1_LRV;

class 73_M12A1_LRV : VES_M12A1_LRV
{
    displayName="[73] M12 LRV Warthog [ATGM]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
        "\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV ATGM";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M41_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"",""\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa"",""\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa""]]",
            };
        };
    };
};
class VES_M12R_AA;

class 73_M12R_AA : VES_M12R_AA
{
    displayName="[73] M12 LRV Warthog [M79 AA]";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M79_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "LRV AA";
            cost = 1;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_M79_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa""]]",
            };
        };
    };
};
class VES_M12_APC;

class 73_M12_APC : VES_M12_APC
{
    displayName="[73] M12 APC Warthog";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_TRP_CO.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa",
        "\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
        "\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "APC";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_TRP_CO.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"",""\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"",""\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa""]]",
            };
        };
    };
};
class VES_M813_TT;

class 73_M813_TT : VES_M813_TT
{
    displayName="[73] M813 TT Warthog";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_TRP_CO.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa",
        "\73_Vehicles\data\Warthog\decals_ca.paa",
        "\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa",
        "\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
        "\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "TT";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""\V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_TRP_CO.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa"",""\73_Vehicles\data\Warthog\decals_ca.paa"",""\73_Vehicles\data\Warthog\M12HogMaav_interior_co.paa"",""\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"",""\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa""]]",
            };
        };
    };
};
class OPTRE_M12_TD_ins;

class 73_M914_TD : OPTRE_M12_TD_ins
{
    displayName="[73] M914 Tank Destroyer Warthog";
    author="73rd S-4 Team"
    faction = "73_STB";
    editorCategory = "73_STB";
    editorSubcategory = "73_Cars_EdSubCat";
    scopeCurator=2;
    scope=2;
    side=1;
    crew = "73_Crewman";
 class ace_cargo {
            class cargo {
                class ACE_Tyres { // Doesn't have to have the same name as the item you're adding
                    type = "ACE_Wheel";
					
                    amount = 8;
                };
            };
        };
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6"
    };
    hiddenSelectionsTextures[] = {
        "\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa",
        "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
        "\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
        "V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa",
        "\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa",
        "\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa"
    };
    class VehicleSpawnerInfo {
        class 73_GroundSpawner
        {
            scope = 1;
            spawner= "73rd Mechanized";
            vehicle = "M12";
            Type = "TD";
            cost = 0;

            priority = 1;
            liveries[]=
            {
             "[""Standard"",[""\73_Vehicles\data\Warthog\M12HogMaav_extupper_co.paa"",""\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"",""V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_APC_CO.paa"",""\OPTRE_Weapons_Turrets\fg75\data\cannon_co.paa"",""\OPTRE_Weapons_Turrets\fg75\data\carriage_co.paa""]]",
            };
        };
    };
};
