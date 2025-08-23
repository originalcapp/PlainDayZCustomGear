class CfgPatches
{
    class PlainDayZdonoGearBottoms
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
	class BDUPants;
    class diddybod_bdupants: BDUPants
    {
        displayName="Diddy-Bod`s BDU Pants";
        descriptionShort=;
        scope=2;
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\diddybod_bdupants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\diddybod_bdupants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\diddybod_bdupants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.69999999,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0.30000001,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class dufus_pants: diddybod_bdupants
    {
		scope=2;
        displayName="Dufus BDU Pants";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\dufus_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\dufus_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\dufus_pants.paa"
        };
    };
	class ParamedicPants_ColorBase;
	class modform_medic_pants: ParamedicPants_ColorBase
	{
        scope=2;
		displayName="MoD Form 100`s Medic Pants";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\modform_medic_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\modform_medic_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\modform_medic_pants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.69999999,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},
						{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0.30000001,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},
						{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}
					};
				};
			};
		};
    };
	class HunterPants_ColorBase;
	class kiracrystal_pants: HunterPants_ColorBase
	{
		scope=2;
		displayName="kiracrystal`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\kiracrystal_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\kiracrystal_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\kiracrystal_pants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class reece_pants: HunterPants_ColorBase
	{
		scope=2;
		displayName="Reece`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\reece_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\reece_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\reece_pants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class TTSKOPants;
	class wingsweden_pants: TTSKOPants
    {
		scope=2;
        displayName="WingSWEDEN`s Pants";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\wingsweden_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\wingsweden_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\wingsweden_pants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class froot_pants: wingsweden_pants
	{
		scope=2;
		displayName="Froot`s Pants";
		descriptionShort="";
		itemsCargoSize[]={10,10};
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\froot_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\froot_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\froot_pants.paa"
        };
	};
	class PolicePants;
	class 2geteilt_pants: PolicePants
	{
		scope=2;
		displayName="2geteilt`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\2geteilt_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\2geteilt_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\2geteilt_pants.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class CargoPants_ColorBase;
	class carling51_pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Carling`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\carling51_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\carling51_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\carling51_pants.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class OMKPants_ColorBase;
	class oldfart_pants: OMKPants_ColorBase
	{
		scope=2;
        displayName="Oldfart`s Pants";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
    };
	class oldfart_pants2: oldfart_pants
	{
		scope=2;
        displayName="Oldfart`s Pants2";
        descriptionShort="";
		heatIsolation=0.4;
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_pants2.paa"
        };
	};
	class NBCPantsBase;
	class oldfart_nbc_pants3: NBCPantsBase
	{
		scope=2;
		displayName="Oldfart`s NBC Pants";
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_nbc_pants3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_nbc_pants3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\oldfart_nbc_pants3.paa"
		};
	};
	class zero_pants: CargoPants_ColorBase
	{
		scope=2;
		displayName="Zero`s Pants";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={4,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={10,10};
		quickBarBonus=2;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants.paa",
			"PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
				};
			};
		};
	};
	class zero_pants2: wingsweden_pants
    {
		scope=2;
        displayName="Zero`s Pants2";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\zero_pants2.paa"
        };
	};
	class tingeling_pants: wingsweden_pants
    {
		scope=2;
        displayName="Tingeling90`s Pants";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants.paa"
        };
	};
	class tingeling_pants2: wingsweden_pants
    {
		scope=2;
        displayName="Tingeling90`s Pants2";
        descriptionShort="";
		heatIsolation=0.5;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\tingeling_pants2.paa"
        };
	};
	class klepp_pants: diddybod_bdupants
    {
		scope=2;
        displayName="Klepp`s Pants";
        descriptionShort="";
		heatIsolation=0.6;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\klepp_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\klepp_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\klepp_pants.paa"
        };
    };
	class georgi_pants: carling51_pants
	{
		scope=2;
        displayName="Georgi Wolf Spirit`s Pants";
        descriptionShort="";
		heatIsolation=0.6;
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\georgi_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\georgi_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\georgi_pants.paa"
        };
    };
	class carpediem_pants: oldfart_pants
	{
		scope=2;
        displayName="Carpediem`s Pants2";
        descriptionShort="";
		heatIsolation=0.8;
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\carpediem_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\carpediem_pants.paa",
            "PlainDayZCustomGear\Data\DonoGear\Bottoms\carpediem_pants.paa"
        };
	};
};
