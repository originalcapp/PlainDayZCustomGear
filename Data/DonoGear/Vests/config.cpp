class CfgPatches
{
	class PlainDayZdonoGearVests
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
			"DZ_Gear_Medical",
            "DZ_Characters_Headgear",
			"DZ_Scripts",
            "DZ_Data"
		};
	};
};
class CfgSlots
{
	class Slot_FirstAidKit1
	{
		name="FirstAidKit1";
		displayName="FirstAidKit1";
		ghostIcon="";
	};
	class Slot_PLAIN_BloodTest_Kit
	{
		name="PLAIN_BloodTest_Kit";
		displayName="BloodTest Kit";
		ghostIcon="";
	};
	class Slot_PLAIN_TransfusionKit
	{
		name="PLAIN_TransfusionKit";
		displayName="Saline IV Kit";
		ghostIcon="";
	};
	class Slot_PLAIN_EpinephrineA
	{
		name="PLAIN_EpinephrineA";
		displayName="Injector";
		ghostIcon="";
	};
	class Slot_PLAIN_EpinephrineB
	{
		name="PLAIN_EpinephrineB";
		displayName="Injector";
		ghostIcon="";
	};
	class Slot_PLAIN_Morphine
	{
		name="PLAIN_Morphine";
		displayName="Morphine";
		ghostIcon="";
	};
	class Slot_PLAIN_tetracycline
	{
		name="PLAIN_tetracycline";
		displayName="Tetracycline";
		ghostIcon="";
	};
	class Slot_PLAIN_VitaminBottle
	{
		name="PLAIN_VitaminBottle";
		displayName="Vitamin Bottle";
		ghostIcon="";
	};
	class Slot_PLAIN_painkillers2
	{
		name="PLAIN_painkillers2";
		displayName="Pain Killer Tablets";
		ghostIcon="";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BloodTestKit: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_BloodTest_Kit"
		};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_TransfusionKit"
		};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_Morphine"
		};
	};
	class AntiChemInjector: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_EpinephrineA",
			"PLAIN_EpinephrineB"
		};
	};
	class Epinephrine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_EpinephrineA",
			"PLAIN_EpinephrineB"
		};
	};
	class Edible_Base;
	class PainkillerTablets: Edible_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_painkillers2"
		};
	};
	class VitaminBottle: Edible_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_VitaminBottle"
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		inventorySlot[]+=
		{
			"PLAIN_tetracycline"
		};
	};
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		inventorySlot[]+=
		{
			"FirstAidKit",
			"FirstAidKit1",
			"FirstAidKit2"
		};
	};
	class HighCapacityVest_ColorBase;
	class PlateCarrierVest;
	class modform_medic_vest: HighCapacityVest_ColorBase
	{
		scope=2;
        displayName="MoD Form 100`s Medic Vest";
        descriptionShort="";
        attachments[]=
		{
			"VestPouch",
			"MedicalBandage",
			"PLAIN_BloodTest_Kit",
			"PLAIN_TransfusionKit",
			"PLAIN_EpinephrineA",
			"PLAIN_EpinephrineB",
			"PLAIN_Morphine",
			"PLAIN_tetracycline",
			"PLAIN_VitaminBottle",
			"PLAIN_painkillers2",
			"FirstAidKit1"
		};
        itemSize[]={4,3};
        repairableWithKits[]={3};
        repairCosts[]={10};
        itemsCargoSize[]={10,25};
		heatIsolation=0.85;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\modform_medic_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\modform_medic_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\modform_medic_vest.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},
						{0.69999999,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},
						{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},
						{0.30000001,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},
						{0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class diddybod_vest: PlateCarrierVest
    {
        scope=2;
        displayName="Diddy-Bod`s Plate Carrier";
        descriptionShort="";
        attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        itemSize[]={4,4};
        repairableWithKits[]={3,8};
		repairCosts[]={10,10};
        itemsCargoSize[]={10,25};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\diddybod_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\diddybod_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\diddybod_vest.paa"
        };
    };
	class SmershVest;
	class kiracrystal_vest: SmershVest
    {
        scope=2;
        displayName="kiracrystal`s Vest";
        descriptionShort="";
        attachments[]=
		{
			"VestBackpack",
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        itemSize[]={3,3};
        repairableWithKits[]={3,8};
		repairCosts[]={10,10};
        itemsCargoSize[]={10,25};
		varWetMax=0.49000001;
		heatIsolation=0.50000001;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\kiracrystal_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\kiracrystal_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\kiracrystal_vest.paa"
        };
    };
	class badkarma_vest: HighCapacityVest_ColorBase
	{
		scope=2;
        displayName="Bad Karma`s Vest";
        descriptionShort="";
        attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        itemSize[]={4,3};
        repairableWithKits[]={3};
        repairCosts[]={10};
        itemsCargoSize[]={10,25};
		heatIsolation=0.85;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\badkarma_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\badkarma_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\badkarma_vest.paa"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},
						{0.69999999,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},
						{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},
						{0.30000001,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},
						{0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class reece_vest: PlateCarrierVest
    {
        scope=2;
        displayName="Reece`s Plate Carrier";
        descriptionShort="";
        attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        itemSize[]={4,4};
        repairableWithKits[]={3,8};
		repairCosts[]={10,10};
        itemsCargoSize[]={10,25};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\reece_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\reece_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\reece_vest.paa"
        };
    };
	class wingsweden_vest: kiracrystal_vest
    {
        scope=2;
        displayName="WingSWEDEN`s Vest";
        descriptionShort="";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_vest.paa"
        };
    };
	class froot_vest: kiracrystal_vest
    {
        scope=2;
        displayName="Froot`s Vest";
        descriptionShort="";
		itemsCargoSize[]={10,10};
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\froot_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\froot_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\froot_vest.paa"
        };
    };
	class SmershBag;
	class wingsweden_smershbag: SmershBag
	{
		scope=2;
		displayName="WingSWEDEN`s SmershBag";
		descriptionShort="";
		model="\dz\characters\backpacks\SmershBag_alternate_g.p3d";
		inventorySlot[]={"Back","VestBackpack"};
		attachments[]={"Chemlight","WalkieTalkie"};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		weight=600;
		varWetMax=0.79;
		heatIsolation=0.2;
		visibilityModifier=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_smershbag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_smershbag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Vests\wingsweden_smershbag.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SmershBag_m.p3d";
			female="\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					transferToAttachmentsCoef=0.1;
					healthLevels[]=
					{
						{1.0,{"DZ\Characters\backpacks\data\Smersh.rvmat","DZ\Characters\backpacks\data\Smersh_g.rvmat"}},
						{0.7,{"DZ\Characters\backpacks\data\Smersh.rvmat","DZ\Characters\backpacks\data\Smersh_g.rvmat"}},
						{0.5,{"DZ\Characters\backpacks\data\Smersh_damage.rvmat","DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"}},
						{0.3,{"DZ\Characters\backpacks\data\Smersh_damage.rvmat","DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"}},
						{0.0,{"DZ\Characters\backpacks\data\Smersh_destruct.rvmat","DZ\Characters\backpacks\data\Smersh_g_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class froot_smershbag: wingsweden_smershbag
	{
		scope=2;
		displayName="Froot`s SmershBag";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"PlainDayZCustomGear\Data\DonoGear\Vests\froot_smershbag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Vests\froot_smershbag.paa",
			"PlainDayZCustomGear\Data\DonoGear\Vests\froot_smershbag.paa"
		};
	};
	class 2geteilt_vest: badkarma_vest
	{
		scope=2;
        displayName="2geteilt`s Vest";
        descriptionShort="";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\2geteilt_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\2geteilt_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\2geteilt_vest.paa"
        };
	};
	class carling51_vest: badkarma_vest
	{
		scope=2;
        displayName="Carling`s Vest";
        descriptionShort="";
        attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\carling51_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\carling51_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\carling51_vest.paa"
        };
	};
	class dufus_vest: PlateCarrierVest
    {
        scope=2;
        displayName="Dufus Plate Carrier";
        descriptionShort="";
        attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
        itemSize[]={4,4};
        repairableWithKits[]={3,8};
		repairCosts[]={10,10};
        itemsCargoSize[]={10,25};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		quickBarBonus=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\DonoGear\Vests\dufus_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\dufus_vest.paa",
            "PlainDayZCustomGear\Data\DonoGear\Vests\dufus_vest.paa"
        };
    };
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBloodTest_Kit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_BloodTest_Kit"
		};
		model="\dz\gear\medical\BloodTest_Kit.p3d";
	};
	class ProxyTransfusionKit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_TransfusionKit"
		};
		model="\dz\gear\medical\TransfusionKit.p3d";
	};
	class ProxyEpinephrineA: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_EpinephrineA"
		};
		model="\dz\gear\medical\Epinephrine.p3d";
	};
	class ProxyEpinephrineB: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_EpinephrineB"
		};
		model="\dz\gear\medical\Epinephrine.p3d";
	};
	class ProxyMorphine: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_Morphine"
		};
		model="\dz\gear\medical\Morphine.p3d";
	};
	class Proxytetracycline: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_tetracycline"
		};
		model="\dz\gear\medical\tetracycline.p3d";
	};
	class ProxyVitaminBottle: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_VitaminBottle"
		};
		model="\dz\gear\medical\VitaminBottle.p3d";
	};
	class Proxypainkillers2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"PLAIN_painkillers2"
		};
		model="\dz\gear\medical\painkillers2.p3d";
	};
};