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
	class diddybod_bag: PDZ_AliceBag_Base
    {
        scope=2;
        displayName="Diddy-Bod`s Field Backpack";
        descriptionShort =;
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
	class PDZ_MountainBag_Base;
	class kiracrystal_bag: PDZ_MountainBag_Base
	{
		scope=2;
		displayName="kiracrystal`s Bag";
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
	class PDZ_CoyoteBag_Base;
	class badkarma_bag: PDZ_CoyoteBag_Base
	{
		scope=2;
		displayName="Bad Karma`s Bag";
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
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\astranova_egon_bag.paa"
		};
	};
	class PDZ_DryBag_Base;
	class 2geteilt_bag: PDZ_DryBag_Base
	{
		scope=2;
		displayName="2geteilt`s DryBag";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\2geteilt_bag.paa"
		};
	};
	class PDZ_HuntingBag_Base;
	class meg_redpanda_bag: PDZ_HuntingBag_Base
	{
		scope=2;
		displayName="Meg [RedPanda] Bag";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Backpacks\Bags\meg_bag.paa"
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