class XtdGearModels
{
    class CfgWeapons 
    {
		class 73_ACE_M56_Armor
        {
			label= "[73] M56 Body Armor";
			author="73rd S-4 Team";
            options[] = 
			{ 
				"Variant",
				"Roles"
			};
            class Variant
            {
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variant";
                values[]= 
				{
					"Recruit",
					"Standard",
					"Medic",
					"1Plt Base",
					"1Plt Medic",
					"1Plt Lead",
					"1Plt Cmd",
					"1Plt CmdMed",
					"2Plt Base",
					"2Plt Medic",
					"2Plt Lead",
					"2Plt Cmd",
					"2Plt CmdMed",
				};
            };
			class Roles
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Roles";
				values[]=
				{
					"Aviation",
					"Medic",
					"Basic",
					"Autorifleman",
					"Marksman",
					"Demolitions",
					"Scout",
					"Sniper",
				};
			};
        };
		class 73_ACE_ODST_Helmet
		{
			label= "[73] ODST Helmet";
			author="73rd S-4 Team";
			options[] = 
			{
				"Variant",
				"Roles"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Variant";
                values[]= 
				{
					"Standard",
					"Smith",
					"Price",
					"Winters",
					"Metal",
					"Vargas"
				};
			};
			class Roles
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
                label= "Roles";
                values[]= 
				{
					"Recruit",
					"Standard",
					"Leadership",
					"Officer"
				};
			};
		};
		class 73_ACE_Dress_Uniform
		{
			label = "[73] Dress Uniform";
			author="73rd S-4 Team";
			options[] = 
			{
				"Variant"
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Variant";
				values[]= 
				{
					"ODST",
					"Aviation",
					"Officer",
					"B. Smith",
					"J. Knight",
					"D. Freeman",
					"L. Price",
					"B. Salmon",
					"J. Ramirez",
					"C. Barrier",
					"J. Fletcher",
					"D. Dex",
					"K. Cypher",
					"R. Deckard",
					"T. Bear",
					"C. Winters",
					"J. Mustang",
					"J. Mendez",
					"V. Tidakszel",
					"S. Cyrus",
					"P. Metal",
					"R. Solaman"
				};
			};
		};
	};
	class cfgVehicles
	{
		class 73_ACE_Rucksack
		{
			label = "[73] Rucksack";
			author="73rd S-4 Team";
			options[] = 
			{
				"Role"
			};
			class Role
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Role";
				values[] =
				{
					"Standard",
					"Medic",
					"Heavy",
					"RTO",
					"Invis",
					"Invis RTO"
				};
			};
		};
	};
};