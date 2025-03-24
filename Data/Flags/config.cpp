class CfgPatches
{
	class ccgearFlag
	{
		units[]=
		{
		};
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
	class plain_dayz_flag: Flag_Base  
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\Flags\PlainDayZflag.paa"
		};
	};
};