class CfgPatches
{
	class PlainDayZdonoGearFlag
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
			"DZ_Gear_Camping",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Flag_Base;
	class modform_flag: Flag_Base  
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\modform_flag.paa"
		};
	};
};
