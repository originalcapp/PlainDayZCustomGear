class CfgPatches
{
    class PlainDayZdonoGearShoes
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Gloves",
			"DZ_Characters_Tops"
        };
    };
};
class CfgVehicles
{
    class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
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
	class wingsweden_boots: kiracrystal_boots
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
    };
	class froot_boots: kiracrystal_boots
	{
		scope=2;
		displayName="FarmerBoy`s ToeProtectors";
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
	class carling51_boots: kiracrystal_boots
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
	class oldfart_boots: diddybod_boots
	{
		scope=2;
		displayName="Oldfart`s Boots";
		descriptionShort="";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots.paa"
		};
	};
	class oldfart_boots2: diddybod_boots
	{
		scope=2;
		displayName="Oldfart`s Boots2";
		descriptionShort="";
		heatIsolation=0.4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_boots2.paa"
		};
	};
	class NBCBootsBase;
	class oldfart_nbc_boots3: NBCBootsBase
	{
		scope=2;
		displayName="Oldfart`s NBC Boots";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_nbc_boots3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_nbc_boots3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\oldfart_nbc_boots3.paa"
		};
	};
	class zero_boots: kiracrystal_boots
	{
		scope=2;
		displayName="Zero`s Boots";
		descriptionShort="";
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_boots.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_boots.paa"
		};
	};
	class zero_boots2: CombatBoots_ColorBase
	{
		scope = 2;
		displayName="Zero`s Boots2";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\shoes\CombatBoots_m.p3d";
			female="\DZ\characters\shoes\CombatBoots_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_shoes2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_shoes2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Shoes\zero_shoes2.paa"
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
	class tingeling_boots: kiracrystal_boots
	{
		scope=2;
        displayName="Tingeling90`s Boots";
        descriptionShort=;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots.paa"
        };
    };
	class tingeling_boots2: kiracrystal_boots
	{
		scope=2;
        displayName="Tingeling90`s Boots2";
        descriptionShort=;
		heatIsolation=0.5;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\tingeling_boots2.paa"
        };
    };
	class klepp_boots: kiracrystal_boots
	{
		scope=2;
        displayName="Klepp`s Boots";
        descriptionShort=;
		heatIsolation=0.6;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\klepp_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\klepp_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\klepp_boots.paa"
        };
    };
	class JungleBoots_ColorBase;
	class carpediem_boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName="Carpediem`s Boots";
		descriptionShort="";
		heatIsolation=0.85;
        varWetMax=0.2;
		attachments[]={"Knife"};
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_boots.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_boots.paa"
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
};
