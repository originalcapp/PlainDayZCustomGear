class CfgPatches
{
	class PlainDayZdonoGearVests
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "DZ_Data",
			"DZ_Characters",
            "DZ_Characters_Tops",
            "DZ_Gear_Containers",
			"DZ_Gear_Medical",
			"DZ_Scripts"
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
	class PDZ_HighCapacityVest_Base: HighCapacityVest_ColorBase
	{
		scope=1;
        displayName="";
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
    class PlateCarrierVest;
	class diddybod_vest: PlateCarrierVest
    {
        scope=1;
        displayName="";
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
	class SmershVest;
	class PDZ_SmershVest_Base: SmershVest
    {
        scope=1;
        displayName="";
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
	class SmershBag;
	class PDZ_SmershBag_Base: SmershBag
	{
		scope=1;
		displayName="";
		descriptionShort="";
		model="\dz\characters\backpacks\SmershBag_alternate_g.p3d";
		inventorySlot[]={"Back","VestBackpack"};
		attachments[]={"Chemlight","WalkieTalkie"};
		itemInfo[]={"Clothing","Back"};
		soundAttType="Military";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
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
