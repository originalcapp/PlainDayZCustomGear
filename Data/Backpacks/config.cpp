class CfgPatches
{
	class PlainDayZGearBags
	{
		units[]=
		{			
			"",			
		};
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
	class AliceBag_ColorBase;
	class plain_dayz_adminbackpack: AliceBag_ColorBase
    {
        scope=2;
        displayName="Plain DayZ Admin Field Backpack";
        descriptionShort =;
        model="\dz\characters\backpacks\alicebackpack_g.p3d";
        inventorySlot="Back";
        attachments[] += {"shoulder"};
        itemInfo[]={"Clothing","Back"};
        rotationFlags=16;
        itemSize[]={2,3};
        itemsCargoSize[]={10,50};
        weight=200;
        absorbency=0;
        varWetMax=0.001;
        heatIsolation=0.80;
        visibilityModifier=0.8;
        repairableWithKits[]={5,3};
        repairCosts[]={30,25};
        hiddenSelections[]={"camoGround","camoMale","camoFemale"};
        hiddenSelectionsTextures[]=
        {
            "PlainDayZCustomGear\Data\Backpacks\PlainDayZAdminBag",
            "PlainDayZCustomGear\Data\Backpacks\PlainDayZAdminBag",
            "PlainDayZCustomGear\Data\Backpacks\PlainDayZAdminBag"
        };
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
                    hitpoints=300;
                    healthLevels[]={{1,{"PlainDayZCustomGear\Data\Backpacks\PlainDayZAdminBag"}},{0.7,{"PlainDayZCustomGear\Data\Backpacks\PlainDayZAdminBag"}},{0.5,{"DZ\Characters\backpacks\data\alice_backpack_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\alice_backpack_damage.rvmat"}},{0,{"DZ\Characters\backpacks\data\alice_backpack_destruct.rvmat"}}};
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
	class SlingBag_ColorBase;
	class plain_dayz_slingbag: SlingBag_ColorBase
	{
		scope=2;
		displayName="Plain DayZ Sling Bag";
		descriptionShort="";
		inventorySlot="Back";
        attachments[] += {"WalkieTalkie"};
        itemInfo[]={"Clothing","Back"};
        itemSize[]={4,4};
        itemsCargoSize[]={9,7};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
            "PlainDayZCustomGear\Data\Backpacks\plain_dayz_slingbag.paa",
            "PlainDayZCustomGear\Data\Backpacks\plain_dayz_slingbag.paa",
            "PlainDayZCustomGear\Data\Backpacks\plain_dayz_slingbag.paa"
        };
	};
};   