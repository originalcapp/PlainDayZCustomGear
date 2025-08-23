class CfgPatches
{
	class PlainDayZdonoGearFlag
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
	class modform_flag: Flag_Base  
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\modform_flag.paa"
		};
	};
	class oldfart_flag: Flag_Base  
	{
		scope=2;
		displayName="Oldfart`s Flag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\oldfart_flag.paa"
		};
	};
	class oldfart_flag2: Flag_Base  
	{
		scope=2;
		displayName="Oldfart`s Flag2";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\oldfart_flag2.paa"
		};
	};
	class zero_flag: Flag_Base  
	{
		scope=2;
		displayName="Zero`s Flag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\zero_flag.paa"
		};
	};
	class carpediem_flag: Flag_Base  
	{
		scope=2;
		displayName="Carpediem`s Flag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Flags\carpediem_flag.paa"
		};
	};
};