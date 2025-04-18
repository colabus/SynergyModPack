﻿class CfgPatches
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
	class FireplaceBase;
	class Inventory_Base;

	class Fireplace : FireplaceBase {};

	// Fireplace which burns for eternity
	class Syn_EternalFireplace: Fireplace {};

	// Some various lighting objects
	class Syn_SpotlightObject: Inventory_Base
	{
		scope=1;
		storageCategory = 10;
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(1,1,1,0,CA)" };
		weight=9999;
		rotationFlags=2;
		class PointLights
		{
			class SpotlightLight
			{
				brightness = 20.0;
				radius = 20;
				dayLight = 0;
				color[] = { 2.5, 2.5, 1.5, 0.0 };
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};
	};
	class Syn_StreetLight : Inventory_Base
	{
		scope=1;
		storageCategory = 10;
		model = "\dz\gear\consumables\Stone.p3d";
		forceFarBubble = "true";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(1,1,1,0,CA)" };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				brightness = 1.0;
				radius = 25;
				dayLight = 0;
				color[] = { 2.5, 2.5, 1.5, 0.0 };
			};
		};
	};
	class Syn_InteriorLight : Inventory_Base
	{
		scope=1;
		storageCategory = 10;
		model = "\dz\gear\consumables\Stone.p3d";
		forceFarBubble = "true";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(1,1,1,0,CA)" };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				brightness = 0.5;
				radius = 5;
				dayLight = 0;
				color[] = { 2.5, 2.5, 1.5, 0.0 };
			};
		};
	};
	class Syn_InteriorLightDim : Inventory_Base
	{
		scope=1;
		storageCategory = 10;
		model = "\dz\gear\consumables\Stone.p3d";
		forceFarBubble = "true";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(1,1,1,0,CA)" };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				brightness = 0.3;
				radius = 3;
				dayLight = 0;
				color[] = { 2.5, 2.5, 1.5, 0.0 };
			};
		};
	};

};