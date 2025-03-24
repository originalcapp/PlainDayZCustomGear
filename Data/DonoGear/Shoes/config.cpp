class CfgPatches
{
    class PlainDayZdonoGearShoes
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Characters",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Pants",
            "DZ_Characters_Tops",
            "DZ_Gear_Containers",
            "DZ_Characters_Headgear",
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
    class Clothing;
	class MilitaryBoots_ColorBase;
    class diddybod_boots: MilitaryBoots_ColorBase
	{
        displayName="Diddy-Bod`s Assault Boots";
        descriptionShort=;
        scope=2;
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\diddybod_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\diddybod_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\diddybod_boots.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.69999999,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.5,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0.30000001,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0,{"DZ\characters\shoes\Data\MilitaryBoots_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class modform_medic_boots: MilitaryBoots_ColorBase
	{
        scope=2;
		displayName="MoD Form 100`s Medic Boots";
        descriptionShort="";
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\modform_medic_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\modform_medic_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\modform_medic_boots.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.69999999,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.5,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0.30000001,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0,{"DZ\characters\shoes\Data\MilitaryBoots_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class kiracrystal_boots: MilitaryBoots_ColorBase
	{
		scope=2;
		displayName="kiracrystal`s Boots";
		descriptionShort="";
		heatIsolation=0.85;
		varWetMax=0.2;
		attachments[]={"Knife"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\kiracrystal_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\kiracrystal_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\kiracrystal_boots.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
	class wingsweden_boots: MilitaryBoots_ColorBase
	{
        displayName="WingSWEDEN`s Assault Boots";
        descriptionShort=;
        scope=2;
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\wingsweden_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\wingsweden_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\wingsweden_boots.paa"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.69999999,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},
						{0.5,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0.30000001,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},
						{0,{"DZ\characters\shoes\Data\MilitaryBoots_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class froot_boots: wingsweden_boots
	{
		scope=2;
		displayName="Froot`s Boots";
		descriptionShort="";
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\froot_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\froot_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\froot_boots.paa"
        };
	};
	class CombatBoots_ColorBase;
	class 2geteilt_boots: CombatBoots_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName="2geteilt`s Boots";
		descriptionShort="";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\2geteilt_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\2geteilt_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\2geteilt_boots.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
	class carling51_boots: wingsweden_boots
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName="Carling`s Boots";
		descriptionShort="";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\carling51_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\carling51_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\carling51_boots.paa"
		};
	};
};
