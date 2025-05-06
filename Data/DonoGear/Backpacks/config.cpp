class CfgPatches
{
	class PlainDayZ_DonoBag_Base
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
    class Clothing_Base;
    class Clothing: Clothing_Base{};
	class TaloonBag_ColorBase;
	class PDZ_TaloonBag_Base: TaloonBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\taloon_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		weight=1300;
		itemSize[]={4,5};
		itemsCargoSize[]={10,100};
		varWetMax=0.79;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\taloon_m.p3d";
			female="\DZ\characters\backpacks\taloon_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class TortillaBag;
	class PDZ_TortillaBag_Base: TortillaBag
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\tortilla_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={10,100};
		weight=2100;
		varWetMax=0.79;
		heatIsolation=0.8;
		visibilityModifier=0.8;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\tortilla_m.p3d";
			female="\DZ\characters\backpacks\tortilla_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1800;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\tortila.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\tortila.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\tortila_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\tortila_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\tortila_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class DryBag_ColorBase;
	class PDZ_DryBag_Base: DryBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\drybag_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={10,100};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={5,6};
		repairCosts[]={30.0,25.0};
		canBeDigged=1;
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"\dz\characters\backpacks\data\drybag_co.paa","\dz\characters\backpacks\data\drybag_co.paa","\dz\characters\backpacks\data\drybag_co.paa"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\drybag_m.p3d";
			female="\DZ\characters\backpacks\drybag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1400;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\dryBag.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\dryBag.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\dryBag_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\dryBag_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\dryBag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class HuntingBag;
	class PDZ_HuntingBag_Base: HuntingBag
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\hunting_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={10,100};
		weight=1400;
		varWetMax=0.49;
		heatIsolation=0.7;
		visibilityModifier=0.8;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\hunting_m.p3d";
			female="\DZ\characters\backpacks\hunting_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1600;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\hunting.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\hunting.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\hunting_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\hunting_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\hunting_destruct.rvmat"}}};
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
	class MountainBag_ColorBase;
	class PDZ_MountainBag_Base: MountainBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\mountain_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={10,100};
		weight=2300;
		varWetMax=0.79;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"\dz\characters\backpacks\data\mountain_blue_co.paa","\dz\characters\backpacks\data\mountain_blue_co.paa","\dz\characters\backpacks\data\mountain_blue_co.paa"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\mountain_m.p3d";
			female="\DZ\characters\backpacks\mountain_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1600;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class ChildBag_ColorBase;
	class PDZ_ChildBag_Base: ChildBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\childs_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={10,100};
		weight=1850;
		varWetMax=0.49;
		heatIsolation=0.1;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Outdoor";
		randomQuantity=2;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]={"\dz\characters\backpacks\data\childs_red_co.paa","\dz\characters\backpacks\data\childs_red_co.paa","\dz\characters\backpacks\data\childs_red_co.paa"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\childs_m.p3d";
			female="\DZ\characters\backpacks\childs_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1200;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\childs.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\childs.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\childs_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\childs_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\childs_destruct.rvmat"}}};
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
	class AssaultBag_ColorBase;
	class PDZ_AssaultBag_Base: AssaultBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		simulation="clothing";
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={4,5};
		itemsCargoSize[]={10,100};
		weight=900;
		varWetMax=0.79;
		heatIsolation=0.6;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\boulder_m53_m.p3d";
			female="\DZ\characters\backpacks\boulder_m53_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\boulder_m53.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\boulder_m53.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\boulder_m53_destruct.rvmat"}}};
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
	class CoyoteBag_ColorBase;
	class PDZ_CoyoteBag_Base: CoyoteBag_ColorBase
	{

		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\CoyotesBP_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={10,100};
		weight=2600;
		varWetMax=0.79;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\CoyotesBP_m.p3d";
			female="\DZ\characters\backpacks\CoyotesBP_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1900;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\CoyotesBP.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\CoyotesBP.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\CoyotesBP_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\CoyotesBP_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\CoyotesBP_destruct.rvmat"}}};
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
	class AliceBag_ColorBase;
	class PDZ_AliceBag_Base: AliceBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\alicebackpack_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=16;
		itemSize[]={6,7};
		itemsCargoSize[]={10,100};
		weight=1600;
		varWetMax=0.79;
		heatIsolation=0.8;
		repairableWithKits[]={5,2};
		repairCosts[]={30.0,25.0};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\alicebackpack_m.p3d";
			female="\DZ\characters\backpacks\alicebackpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1600;
					transferToAttachmentsCoef=0.5;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\Alice_backpack.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\Alice_backpack.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\Alice_backpack_destruct.rvmat"}}};
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
	class SlingBag_ColorBase;
	class PDZ_SlingBag_Base: SlingBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\SlingBag_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=2;
		itemSize[]={4,4};
		itemsCargoSize[]={10,100};
		weight=1000;
		varWetMax=0.79;
		heatIsolation=0.2;
		repairableWithKits[]={5,3};
		repairCosts[]={20.0,25.0};
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SlingBag_m.p3d";
			female="\DZ\characters\backpacks\SlingBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1200;
					healthLevels[]={{1.0,{"DZ\Characters\backpacks\data\SlingBag.rvmat"}},{0.7,{"DZ\Characters\backpacks\data\SlingBag.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\SlingBag_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\SlingBag_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\SlingBag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
	class DrysackBag_ColorBase;
	class PDZ_DrysackBag_Base: DrysackBag_ColorBase
	{
		scope=0;
		displayName="BaseClassGoAway";
		descriptionShort="";
		model="\dz\characters\backpacks\drysackbag_g.p3d";
		inventorySlot[]={"Back"};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Shoulder",
			"Melee",
			"FirstAidKit1",
			"Belt_Left",
			"Belt_Right",
			"Belt_Back",
			"CookingEquipment",
			"Rope",
			"Gloves",
			"CookingTripod"
		};
		itemInfo[]={"Clothing","Back"};
		rotationFlags=17;
		itemSize[]={4,5};
		itemsCargoSize[]={10,100};
		weight=300;
		canBeDigged=1;
		varWetMax=0.249;
		heatIsolation=0.3;
		repairableWithKits[]={5,6};
		repairCosts[]={30.0,25.0};
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\drysackbag_m.p3d";
			female="\DZ\characters\backpacks\drysackbag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=800;
					healthLevels[]={{1.0,{"DZ\gear\containers\data\WaterproofBag.rvmat"}},{0.7,{"DZ\gear\containers\data\WaterproofBag.rvmat"}},{0.5,{"DZ\gear\containers\data\WaterproofBag_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\WaterproofBag_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\WaterproofBag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
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
