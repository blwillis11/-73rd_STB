class 73_ACo
{
    name = "[73] Troopers [ACo]";

    class ODST_Infantry
    {
        name = "ODST Infantry";

        class 73_ACo_ODST_Squad
        {
            name = "[73] Alpha Company ODST Squad";
            side = 1;
            faction = "73_ACo";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "73_ACo_ODST_Squad_Lead";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Team_Lead";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Team_Lead";
            };
            class Unit3
            {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Autorifleman";
            };
            class Unit4
            {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Autorifleman";
            };
            class Unit5
            {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
            class Unit6
            {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
            class Unit7
            {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_AT";
            };
            class Unit8
            {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Grenadier";
            };
            class Unit9
            {
                position[] = {25,-25,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Medic";
            };
            class Unit10
            {
                position[] = {-25,-25,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Medic";
            };
            class Unit11
            {
                position[] = {30,-30,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Demo";
            };
            class Unit12
            {
                position[] = {-30,-30,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Marksman";
            };
            class Unit13
            {
                position[] = {35,-35,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Sniper";
            };
            class Unit14
            {
                position[] = {-35,-35,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
        };
        class 73_ACo_ODST_Fireteam
        {
            name = "[73] Alpha Company ODST Fireteam";
            side = 1;
            faction = "73_ACo";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "73_ACo_ODST_Team_Lead";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Medic";
            };
            class Unit3
            {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Grenadier";
            };
            class Unit4
            {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
        };

        class 73_ACo_ODST_Sentry
        {
            name = "[73] Alpha Company ODST Sentry";
            side = 1;
            faction = "73_ACo";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "73_ACo_ODST_Rifleman";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Marksman";
            };
        };

        class 73_ACo_ODST_Sniper_Team
        {
            name = "[73] Alpha Company ODST Sniper Team";
            side = 1;
            faction = "73_ACo";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "73_ACo_ODST_Sniper";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Marksman";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "73_ACo_ODST_Medic";
            };
        };
    };
};