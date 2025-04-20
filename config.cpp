class CfgPatches
{
	class SynergyModPack
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Cooking",
			"DZ_Gear_Containers",
			"DZ_Structures_Residential"
		};
		units[] =
		{
			"PowerPole_Lamp",
			"PowerPole_Lamp_Bright",
			"PowerPole_Lamp_Invincible"
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
			"Game", 
			"World", 
			"Mission" 
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
	// Base classes
	class Container_Base;
	class Fireplace;
	class HouseNoDestruct;
	class Inventory_Base;
	class Land_Radio_PanelPAS;

	// Barrel
	class Barrel_ColorBase : Container_Base
	{
		physLayer = "item_large";
	};

	class Syn_BarrelHoles_Red : Barrel_ColorBase
	{

		displayName = "Community Barrel";
		descriptionShort = "A brightly colored barrel where loot goes in, trust disappears, and betrayal brews like rainwater.";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"\SynergyModPack\data\textures\barrel_community_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 999999;
				}
			}
		};
	};

	// Eternal Stone Circle
	class Syn_EternalStoneCircleFireplace: Fireplace {
		scope = 2;
		displayName = "Eternal Stone Circle";
		descriptionShort = "An unbreakable ring of stones that’s seen more campfire stories than survivors.";
	};

	// Eternal Stone Over
	class Syn_EternalStoneOvenFireplace: Fireplace {
		scope = 2;
		displayName = "Eternal Stone Oven";
		descriptionShort = "An ancient oven that never cools, perfect for cooking meals—or rumors—forever.";
	};

	// Lighting
	class Syn_SpotlightObject: Inventory_Base
	{
		scope=2;
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
		scope=2;
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
		scope=2;
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
		scope=2;
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
	class Syn_DisableStreetLight : Inventory_Base
	{
		scope = 1;
		model = "\dz\gear\consumables\Stone.p3d";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(1,1,1,0,CA)" };
	};

	class SynLight_Lamp_City1 : HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\residential\misc\lamp_city1.p3d";
	};
	class SynLight_Lamp_City2 : HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\residential\misc\lamp_city2.p3d";
	};
	class SynLight_Lamp_City3 : HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\structures\residential\misc\lamp_city3.p3d";
	};

	// Power Contol Panel
	class Syn_PowerControlPanel : Land_Radio_PanelPAS
	{
		scope = 1;
		displayName = "Power Control Panel";
		descriptionShort = "The nerve center of chaos and control—flip the wrong switch, and everyone notices.";
		physLayer = "item_large";
		forceFarBubble = "true";
		attachments[] =
		{
			"LargeBattery"
		};
		class Cargo
		{
			itemsCargoSize[] = { 0,0 };
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9999999;
					healthLabels[] = { 1,0.7,0.5,0.3,0 };
					healthLevels[] = { {1,{}},{0.5,{}},{0,{}} };
				};
			};
		};
	};
};