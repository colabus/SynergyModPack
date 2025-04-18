class CfgPatches
{
	class SynergyModPack
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",

			// As part of Namalsk Island mod by Sumrak
			"namalsk_scripts"
		};
	};
};

class CfgMods
{
	class SynergyModPack
	{
		dir = "SynergyModPack";
		name = "";
		author = "colabus";
		credits = "";
		version = "1.0";
		type = "mod";
		inputs = "";
		dependencies[] = 
		{  
			"World"
		};
		class defs
		{
			class engineScriptModule
			{
				files[]=
				{
					"SynergyModPack/scripts/1_Core",
					"SynergyModPack/scripts/Common"
				};
			};
			class gameLibScriptModule
			{
				files[]=
				{
					"SynergyModPack/scripts/2_GameLib",
					"SynergyModPack/scripts/Common"
				};
			};
			class gameScriptModule
			{
				files[] = 
				{ 
					"SynergyModPack/scripts/3_Game",
					"SynergyModPack/scripts/Common"
				};
			};
			class worldScriptModule
			{
				files[] = 
				{ 
					"SynergyModPack/scripts/4_World",
					"SynergyModPack/scripts/Common"
				};
			};
			class missionScriptModule
			{
				files[] = 
				{ 
					"SynergyModPack/scripts/5_mission",
					"SynergyModPack/scripts/common"
				};
			};
		};
	};
};

class CfgVehicles
{
	class Fireplace;

	// Fireplace which burns for eternity
	class Zen_EternalFireplace: Fireplace {};

};