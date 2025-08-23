class CfgPatches
{
	class PlainDayZdonoGearBags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Gear_Containers",
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgSlots
{
	class Slot_Shoulder1
	{
		name="Shoulder1";
		displayName="Shoulder1";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder2
	{
		name="Shoulder2";
		displayName="Shoulder2";
		ghostIcon="shoulderleft";
	};
	class Slot_FirstAidKit1
	{
		name="FirstAidKit1";
		displayName="FirstAidKit1";
		ghostIcon="";
	};
};
class cfgVehicles
{
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		inventorySlot[]=
		{
			"FirstAidKit",
			"FirstAidKit1",
			"FirstAidKit2"
		};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class PlainDayZ_DonoBag_Base{};
	class PDZ_AliceBag_Base;
	class PDZ_AssaultBag_Base;
	class PDZ_CoyoteBag_Base;
	class PDZ_DryBag_Base;
	class PDZ_DuffelBag_Base;
	class PDZ_HuntingBag_Base;
	class PDZ_MountainBag_Base;
	class PDZ_SlingBag_Base;
	class PDZ_TortillaBag_Base;
	class diddybod_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Diddy-Bod`s Field Backpack";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\diddybod_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\diddybod_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\diddybod_bag"
        };
	};
	class wingsweden_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="WingSWEDEN`s Backpack";
		descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\wingsweden_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\wingsweden_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\wingsweden_bag"
        };
	};
	class froot_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Froots`s Backpack";
		descriptionShort="";
		itemsCargoSize[]={10,50};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\froot_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\froot_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\froot_bag"
        };
	};
	class modform_medic_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="MoD Form 100`s Field Backpack";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\modform_medic_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\modform_medic_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\modform_medic_bag"
        };
	};
	class dufus_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Dufus Backpack";
		descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\dufus_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\dufus_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\dufus_bag"
        };
	};
	class tingeling_bag: PDZ_AliceBag_Base
	{
		scope=2;
		displayName="Tingeling90`s Backpack";
		descriptionShort="";
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag"
        };
	};
	class tingeling_bag2: PDZ_AliceBag_Base
	{
		scope=2;
		displayName="Tingeling90`s Backpack2";
		descriptionShort="";
		heatIsolation=0.5;
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag2",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag2",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tingeling_bag2"
        };
	};
	class kiracrystal_bag: PDZ_MountainBag_Base
	{
		scope=2;
		displayName="kiracrystal`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\kiracrystal_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\kiracrystal_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\kiracrystal_bag.paa"
		};
	};
	class topfuel_bag: PDZ_MountainBag_Base
	{
		scope=2;
		displayName="Topfuel`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\topfuel_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\topfuel_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\topfuel_bag.paa"
		};
	};
	class reece_bag: PDZ_MountainBag_Base
	{
		scope=2;
		displayName="Reece`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\reece_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\reece_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\reece_bag.paa"
		};
	};
	class carling51_bag: PDZ_MountainBag_Base
	{
		scope=2;
		displayName="Carling`s DryBag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carling51_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carling51_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carling51_bag.paa"
		};
	};
	class badkarma_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Bad Karma`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\badkarma_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\badkarma_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\badkarma_bag.paa"
		};
	};
	class astranova_astra_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Astra`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_astra_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_astra_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_astra_bag.paa"
		};
	};
	class astranova_windir_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="windir`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_windir_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_windir_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_windir_bag.paa"
		};
	};
	class astranova_egon_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Egon`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa"
		};
	};
	class 2geteilt_bag: PDZ_DryBag_Base
	{
		scope=2;
		displayName="2geteilt`s DryBag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa"
		};
	};
	class meg_redpanda_bag: PDZ_HuntingBag_Base
	{
		scope=2;
		displayName="Meg [RedPanda] Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa"
		};
	};
	class oldfart_bag: PDZ_TortillaBag_Base
	{
        scope=2;
        displayName="Oldfart`s Backpack";
        descriptionShort="";
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag.paa"
        };
	};
	class oldfart_bag2: PDZ_TortillaBag_Base
	{
        scope=2;
        displayName="Oldfart`s Backpack2";
        descriptionShort="";
		heatIsolation=0.4;
		hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag2.paa"
        };
	};
	class oldfart_bag3: PDZ_SlingBag_Base
	{
		scope=2;
		displayName="Oldfart`s SlingBag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag3.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\oldfart_bag3.paa"
		};
	};
	class zero_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Zero`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag.paa"
		};
	};
	class zero_bag2: PDZ_DuffelBag_Base
	{
		scope=2;
		displayName="Zero`s Bag2";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\DuffelBagSmall_m.p3d";
			female="\DZ\characters\backpacks\DuffelBagSmall_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag2_co.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag2_co.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zero_bag2_co.paa"
		};
		hiddenSelectionsMaterials[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"
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
						{1,{"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"}},
						{0.69999999,{"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"}},
						{0.5,{"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"}},
						{0.30000001,{"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"}},
						{0,{"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\zerobag2.rvmat"}}
					};
				};
			};
		};
	};
	class tongo_bag: PDZ_DuffelBag_Base
	{
		scope=2;
		displayName="Tongo`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tongo_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tongo_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\tongo_bag.paa"
		};
	};
	class pinkomega_bag: PDZ_SlingBag_Base
	{
		scope=2;
		displayName="PinkOmega`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\pinkomega_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\pinkomega_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\pinkomega_bag.paa"
		};
	};
	class ducky_bag: PDZ_HuntingBag_Base
	{
		scope=2;
		displayName="Ducky`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\ducky_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\ducky_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\ducky_bag.paa"
		};
	};
	class klepp_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Klepp`s Bag";
		descriptionShort="";
		heatIsolation=0.6;
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\klepp_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\klepp_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\klepp_bag.paa"
		};
	};
	class carpediem_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Carpediem`s Field Backpack";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag.paa"
        };
	};
	class carpediem_bag2: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Carpediem`s Field Backpack2";
        descriptionShort="";
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag2.paa",
            "PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\carpediem_bag2.paa"
        };
	};
	class georgi_bag: PDZ_HuntingBag_Base
	{
		scope=2;
		displayName="Georgi Wolf Spirit`s Bag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\georgi_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\georgi_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\georgi_bag.paa"
		};
	};
};
class CfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Shoulder17",
			"Shoulder18",
			"Shoulder19",
			"Shoulder20",
			"Shoulder21",
			"Shoulder22",
			"Shoulder23",
			"Shoulder24",
			"Shoulder25",
			"Shoulder26",
			"Shoulder27",
			"Shoulder28",
			"Shoulder29",
			"Shoulder30"
		};
	};
};