class CfgPatches
{
	class HL2_IDs
	{
		units[] = {
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data",
				"DZ_Scripts",
				"IE_IDFramework"
			};
	};
};

class CfgMods
{
	class HL2_IDs
	{
		type = "mod";
		author = "Istar Eldritch";
    	dependencies[] = { "Game", "World", "Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HL2_IDs/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HL2_IDs/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HL2_IDs/scripts/5_Mission"};
			};
		};
	};
};


class CfgVehicles
{
	class Inventory_Base;
	class IE_IdentityCard_Base;
	class HL2_IDCard_Base: IE_IdentityCard_Base
	{
		scope=0
		displayName="Identification Card";
		descriptionShort="Key to seamless integration. This compact card serves as an identifier and access pass.";
        model = "HL2_IDs\data\card\card.p3d";
        itemSize[] = {1, 2};
		rotationFlags=1;
		soundImpactType="plastic";
		weight=10;
		hiddenSelections[]=
		{
			"card",
            "lights"
		};
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_pink.paa"
		};
		hiddenSelectionsMaterials[] = {"HL2_IDs\data\card\hl2_card.rvmat","HL2_IDs\data\card\hl2_card.rvmat"};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"HL2_IDs\data\card\card.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"HL2_IDs\data\card\card.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"HL2_IDs\data\card\card_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"HL2_IDs\data\card\card_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"HL2_IDs\data\card\card_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	}

	class HL2_IDCard_Citizen: HL2_IDCard_Base
	{
		scope=2
		displayName="Citizen Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_pink.paa"
		};
	}

	class HL2_IDCard_CP: HL2_IDCard_Base
	{
		scope=2
		displayName="Civil Protection Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_cp_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_red.paa"
		};
	}

	class HL2_IDCard_CA: HL2_IDCard_Base
	{
		scope=2
		displayName="Civil Authority Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_ca_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_red.paa"
		};
	}

	class HL2_IDCard_CWA: HL2_IDCard_Base
	{
		scope=2
		displayName="City Worker's Association Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_cwa_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_orange.paa"
		};
	}

	class HL2_IDCard_Business: HL2_IDCard_Base
	{
		scope=2
		displayName="Business Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_business_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_blue.paa"
		};
	}

	class HL2_IDCard_Loyal1: HL2_IDCard_Base
	{
		scope=2
		displayName="Level 1 Loyalist Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_loyal1_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_yellow.paa"
		};
	}

	class HL2_IDCard_Loyal2: HL2_IDCard_Base
	{
		scope=2
		displayName="Level 2 Loyalist Identifier Card";
		hiddenSelectionsTextures[]=
		{
			"HL2_IDs\data\card\hl2_card_loyal2_CO.paa",
            "HL2_IDs\data\card\hl2_card_lights_yellow.paa"
		};
	}
};