class cfgGroups 
{
	class West 
	{
		class 73_ODST 
		{
			name = "73rd ODST";
			class ODST_Infantry 
			{
				name =  "ODST Infantry";
				class 73_Groups_ODST_Squad
				{
					name = "Squad";
					side=1;
					faction = "73_Fac";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle = "73_ODST_SquadLead";
						rank="Sergeant";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle = "73_ODST_Medic";
						rank="Corporal";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle = "73_ODST_TeamLead";
						rank="Corporal";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="73_ODST_Autorifleman";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="73_ODST_AT";
						rank="PRIVATE";
						position[]={20,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="73_ODST_TeamLead";
						rank="CORPORAL";
						position[]={25,-5,0};
					};
					class Unit7
					{
						side=1;
						vehicle="73_ODST_Autorifleman";
						rank="PRIVATE";
						position[]={30,-10,0};
					};
					class Unit8
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="PRIVATE";
						position[]={35,-10,0};
					};
					class Unit9
					{
						side=1;
						vehicle="73_ODST_AT";
						rank="PRIVATE";
						position[]={40,-10,0};
					};
					class Unit10
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="CORPORAL";
						position[]={45,-5,0};
					};
					class Unit11
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="PRIVATE";
						position[]={50,-10,0};
					};
				};
				class 73_Groups_ODST_Fireteam
				{
					dlc="OPTRE";
					name="Fireteam";
					side=1;
					faction="73_fac";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="73_ODST_TeamLead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="73_ODST_Autorifleman";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="73_ODST_AT";
						rank="PRIVATE";
						position[]={15,-5,0};
					};
				};
				class 73_Groups_ODST_Sentry
				{
					dlc="OPTRE";
					name="Sentry";
					side=1;
					faction="OPTRE_UNSC";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="73_ODST_Rifleman";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
			};
		};
	};
};