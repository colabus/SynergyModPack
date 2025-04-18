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
			class worldScriptModule
			{
				files[] = 
				{ 
					"SynergyModPack/scripts/4_World",
					"SynergyModPack/scripts/Common"
				};
			};
		};
	};
};
class CfgVehicles
{
	class FireplaceBase;
	class Fireplace: FireplaceBase {};
	class Zen_EternalFireplace: Fireplace {};
};
