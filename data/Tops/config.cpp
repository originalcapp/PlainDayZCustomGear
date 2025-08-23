class CfgPatches
{
	class PlainDayZdonoGearTops
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
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
	class BDUJacket;
	class diddybod_bdujacket: BDUJacket
	{
        displayName="Diddy-Bod`s BDU Jacket";
        descriptionShort=;
        scope=2;
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelectionsTextures[] =
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\diddybod_bdujacket.paa",		
			"PlainDayZCustomGear\Data\DonoGear\Tops\diddybod_bdujacket.paa",		
			"PlainDayZCustomGear\Data\DonoGear\Tops\diddybod_bdujacket.paa"		
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
						{1,{"DZ\characters\tops\Data\BDU_Jacket.rvmat"}},
						{0.69999999,{"DZ\characters\tops\Data\BDU_Jacket.rvmat"}},
						{0.5,{"DZ\characters\tops\Data\BDU_Jacket_damage.rvmat"}},
						{0.30000001,{"DZ\characters\tops\Data\BDU_Jacket_damage.rvmat"}},
						{0,{"DZ\characters\tops\Data\BDU_Jacket_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class ParamedicJacket_ColorBase;
	class modform_medic_jacket: ParamedicJacket_ColorBase
	{
        scope=2;
		displayName="MoD Form 100`s Medic Jacket";
        descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\modform_medic_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\modform_medic_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\modform_medic_jacket.paa"
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
						{1,{"DZ\characters\tops\Data\BDU_Jacket.rvmat"}},
						{0.69999999,{"DZ\characters\tops\Data\BDU_Jacket.rvmat"}},
						{0.5,{"DZ\characters\tops\Data\BDU_Jacket_damage.rvmat"}},
						{0.30000001,{"DZ\characters\tops\Data\BDU_Jacket_damage.rvmat"}},
						{0,{"DZ\characters\tops\Data\BDU_Jacket_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class M65Jacket_ColorBase;
	class kiracrystal_jacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName="kiracrystal`s Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		quickBarBonus=1;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\kiracrystal_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\kiracrystal_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\kiracrystal_jacket.paa"
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
	class HuntingJacket_ColorBase;
	class reece_jacket: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Reece`s Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		quickBarBonus=1;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\reece_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\reece_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\reece_jacket.paa"
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
	class TTsKOJacket_ColorBase;
	class wingsweden_jacket: TTsKOJacket_ColorBase
	{
		scope=2;
		displayName="WingSWEDEN`s Jacket";
		descriptionShort="";
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		quickBarBonus=1;
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\wingsweden_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\wingsweden_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\wingsweden_jacket.paa"
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
	class froot_jacket: wingsweden_jacket
	{
		scope=2;
		displayName="Froot`s Jacket";
		descriptionShort="";
		itemsCargoSize[]={10,10};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\froot_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\froot_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\froot_jacket.paa"
		};
	};
	class 2geteilt_jacket: kiracrystal_jacket
	{
		scope=2;
		displayName="2geteilt`s Jacket";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\2geteilt_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\2geteilt_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\2geteilt_jacket.paa"
		};
	};
	class carling51_jacket: kiracrystal_jacket
	{
		scope=2;
		displayName="Carling`s Jacket";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\carling51_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\carling51_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\carling51_jacket.paa"
		};
	};
	class dufus_jacket: kiracrystal_jacket
	{
		scope=2;
		displayName="Dufus Jacket";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\dufus_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\dufus_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\dufus_jacket.paa"
		};
	};
	class HikingJacket_ColorBase;
	class meg_redpanda_jacket: HikingJacket_ColorBase
	{
		scope=2;
		displayName="Meg [RedPanda] Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\meg_hikingjacket.paa",		
			"PlainDayZCustomGear\Data\DonoGear\Tops\meg_hikingjacket.paa",		
			"PlainDayZCustomGear\Data\DonoGear\Tops\meg_hikingjacket.paa"		
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
						{1,{"DZ\characters\tops\Data\PCU5Jacket_nopatches.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground.rvmat"}},
						{0.69999999,{"DZ\characters\tops\Data\PCU5Jacket_nopatches.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground.rvmat"}},
						{0.5,{"DZ\characters\tops\Data\PCU5Jacket_nopatches_damage.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_damage.rvmat"}},
						{0.30000001,{"DZ\characters\tops\Data\PCU5Jacket_nopatches_damage.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_damage.rvmat"}},
						{0,{"DZ\characters\tops\Data\PCU5Jacket_nopatches_destruct.rvmat","DZ\characters\tops\Data\PCU5Jacket_ground_destruct.rvmat"}},
					};
				};
			};
		};
	};
	class GorkaEJacket_ColorBase;
	class oldfart_jacket: GorkaEJacket_ColorBase
	{
		scope=2;
		displayName="Oldfart`s Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.70;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket.paa"
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
	class oldfart_jacket2: oldfart_jacket
	{
		scope=2;
		displayName="Oldfart`s Jacket2";
		descriptionShort="";
		heatIsolation=0.4;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_jacket2.paa"
		};
	};
	class NBCJacketBase;
	class oldfart_nbc_jacket3: NBCJacketBase
	{
		scope=2;
		displayName="Oldfart`s NBC Jacket";
		itemsCargoSize[]={10,25};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_nbc_jacket3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_nbc_jacket3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\oldfart_nbc_jacket3.paa"
		};
	};
	class zero_jacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName="Zero`s Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		quickBarBonus=1;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket.paa"
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
	class zero_jacket2: wingsweden_jacket
	{
		scope=2;
		displayName="Zero`s Jacket2";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\zero_jacket2.paa"
		};
	};
	class tingeling_jacket: wingsweden_jacket
	{
		scope=2;
		displayName="Tingeling90`s Jacket";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket.paa"
		};
	};
	class tingeling_jacket2: wingsweden_jacket
	{
		scope=2;
		displayName="Tingeling90`s Jacket2";
		descriptionShort="";
		heatIsolation=0.5;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket2.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\tingeling_jacket2.paa"
		};
	};
	class Shirt_ColorBase;
	class ducky_shirt: Shirt_ColorBase
	{
		scope=2;
		displayName="Ducky`s Shirt";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairCosts[]={10,15};
		quickBarBonus=1;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\ducky_shirt.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\ducky_shirt.paa",
			"PlainDayZCustomGear\Data\DonoGear\Tops\ducky_shirt.paa"
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
	class klepp_jacket: diddybod_bdujacket
	{
		scope=2;
		displayName="Klepp`s Jacket2";
		descriptionShort="";
		heatIsolation=0.6;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\klepp_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\klepp_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\klepp_jacket.paa"
		};
	};
	class RidersJacket_ColorBase;
	class georgi_jacket: RidersJacket_ColorBase
	{
		scope=2;
		displayName="Georgi Wolf Spirit`s Jacket2";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.80;
		repairCosts[]={10,15};
		quickBarBonus=1;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Tops\georgi_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\georgi_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Tops\georgi_jacket.paa"
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
	class USMCJacket_ColorBase;
	class carpediem_jacket: USMCJacket_ColorBase
	{
		scope=2;
		displayName="Carpediems Jacket";
		descriptionShort="";
		attachments[]=
		{
			"shoulder",
			"magazine",
			"magazine2"
		};
		itemsCargoSize[]={10,25};
		itemSize[]={2,3};
		weight=250;
		ragQuantity=3;
		varWetMax=0.2;
		heatIsolation=0.70;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_jacket.paa",
            "PlainDayZCustomGear\Data\DonoGear\Shoes\carpediem_jacket.paa"
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
};