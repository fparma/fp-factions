class CfgPatches
{
	class gordon_reskins_ach
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_ach_helmet_taiga",
			"FP_GOR_ach_helmet_taiga_rhino",
			"FP_GOR_ach_helmet_taiga_rhino_ESS",
			"FP_GOR_ach_helmet_taiga_rhino_headset",
			"FP_GOR_ach_helmet_taiga_rhino_headset_ESS",
			"FP_GOR_ach_helmet_m81_norhino",
			"FP_GOR_ach_helmet_m81_ESS",
			"FP_GOR_ach_helmet_m81_headset",
			"FP_GOR_ach_helmet_m81_headset_ESS",
			"FP_GOR_ach_helmet_pantera",
			"FP_GOR_ach_helmet_pantera_rhino",
			"FP_GOR_ach_helmet_pantera_rhino_ESS",
			"FP_GOR_ach_helmet_pantera_rhino_headset",
			"FP_GOR_ach_helmet_pantera_rhino_headset_ESS",
			"FP_GOR_ach_helmet_stripeywoodland",
			"FP_GOR_ach_helmet_stripeywoodland_rhino",
			"FP_GOR_ach_helmet_stripeywoodland_rhino_ESS",
			"FP_GOR_ach_helmet_stripeywoodland_rhino_headset",
			"FP_GOR_ach_helmet_stripeywoodland_rhino_headset_ESS",
			"FP_GOR_ach_helmet_stripeydesert",
			"FP_GOR_ach_helmet_stripeydesert_rhino",
			"FP_GOR_ach_helmet_stripeydesert_rhino_ESS",
			"FP_GOR_ach_helmet_stripeydesert_rhino_headset",
			"FP_GOR_ach_helmet_stripeydesert_rhino_headset_ESS",
			"FP_GOR_ach_helmet_stripeyarid",
			"FP_GOR_ach_helmet_stripeyarid_rhino",
			"FP_GOR_ach_helmet_stripeyarid_rhino_ESS",
			"FP_GOR_ach_helmet_stripeyarid_rhino_headset",
			"FP_GOR_ach_helmet_stripeyarid_rhino_headset_ESS",
			"FP_GOR_ach_helmet_aaf",
			"FP_GOR_ach_helmet_aaf_rhino",
			"FP_GOR_ach_helmet_aaf_rhino_ESS",
			"FP_GOR_ach_helmet_aaf_rhino_headset",
			"FP_GOR_ach_helmet_aaf_rhino_headset_ESS",
			"FP_GOR_ach_helmet_mtp",
			"FP_GOR_ach_helmet_mtp_rhino",
			"FP_GOR_ach_helmet_mtp_rhino_ESS",
			"FP_GOR_ach_helmet_mtp_rhino_headset",
			"FP_GOR_ach_helmet_mtp_rhino_headset_ESS",
			"FP_GOR_ach_helmet_multicam",
			"FP_GOR_ach_helmet_multicam_rhino",
			"FP_GOR_ach_helmet_multicam_rhino_ESS",
			"FP_GOR_ach_helmet_multicam_rhino_headset",
			"FP_GOR_ach_helmet_multicam_rhino_headset_ESS",
			"FP_GOR_ach_helmet_multicamarid",
			"FP_GOR_ach_helmet_multicamarid_rhino",
			"FP_GOR_ach_helmet_multicamarid_rhino_ESS",
			"FP_GOR_ach_helmet_multicamarid_rhino_headset",
			"FP_GOR_ach_helmet_multicamarid_rhino_headset_ESS",
			"FP_GOR_ach_helmet_multicamjungle",
			"FP_GOR_ach_helmet_multicamjungle_rhino",
			"FP_GOR_ach_helmet_multicamjungle_rhino_ESS",
			"FP_GOR_ach_helmet_multicamjungle_rhino_headset",
			"FP_GOR_ach_helmet_multicamjungle_rhino_headset_ESS",
			"FP_GOR_ach_helmet_multicamblack",
			"FP_GOR_ach_helmet_multicamblack_rhino",
			"FP_GOR_ach_helmet_multicamblack_rhino_ESS",
			"FP_GOR_ach_helmet_multicamblack_rhino_headset",
			"FP_GOR_ach_helmet_multicamblack_rhino_headset_ESS",
			"FP_GOR_ach_helmet_tigerstripejungle",
			"FP_GOR_ach_helmet_tigerstripejungle_rhino",
			"FP_GOR_ach_helmet_tigerstripejungle_rhino_ESS",
			"FP_GOR_ach_helmet_tigerstripejungle_rhino_headset",
			"FP_GOR_ach_helmet_tigerstripejungle_rhino_headset_ESS",
			"FP_GOR_ach_helmet_tigerstripedesert",
			"FP_GOR_ach_helmet_tigerstripedesert_rhino",
			"FP_GOR_ach_helmet_tigerstripedesert_rhino_ESS",
			"FP_GOR_ach_helmet_tigerstripedesert_rhino_headset",
			"FP_GOR_ach_helmet_tigerstripedesert_rhino_headset_ESS",
			"FP_GOR_ach_helmet_tigerstripenaval",
			"FP_GOR_ach_helmet_tigerstripenaval_rhino",
			"FP_GOR_ach_helmet_tigerstripenaval_rhino_ESS",
			"FP_GOR_ach_helmet_tigerstripenaval_rhino_headset",
			"FP_GOR_ach_helmet_tigerstripenaval_rhino_headset_ESS"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_troops",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};
class CfgWeapons
{
	class rhsusf_ach_helmet_ocp_alt;
	class rhsusf_ach_helmet_ESS_ocp_alt;
	class rhsusf_ach_helmet_headset_ocp_alt;
	class rhsusf_ach_helmet_headset_ess_ocp_alt;


	class FP_GOR_ach_helmet_taiga: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Hex Taiga)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_taiga_co.paa"};
	};
	class FP_GOR_ach_helmet_taiga_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Hex Taiga, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_taiga_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_taiga_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Hex Taiga, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_taiga_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_taiga_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Hex Taiga, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_taiga_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_taiga_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Hex Taiga, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_taiga_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_m81_norhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH M81 (Bare)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_M81_co.paa"};
	};
	class FP_GOR_ach_helmet_m81_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH M81 (ESS)";
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_M81_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_m81_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH M81 (headset)";
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_M81_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_m81_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH M81 (headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_M81_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_pantera: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Polish Pantera)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_pantera_co.paa"};
	};
	class FP_GOR_ach_helmet_pantera_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Polish Pantera, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_pantera_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_pantera_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Polish Pantera, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_pantera_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_pantera_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Polish Pantera, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_pantera_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_pantera_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Polish Pantera, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_pantera_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_stripeywoodland: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Woodland)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeywoodland_co.paa"};
	};
	class FP_GOR_ach_helmet_stripeywoodland_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Woodland, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeywoodland_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeywoodland_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Woodland, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeywoodland_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_stripeywoodland_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Woodland, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeywoodland_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeywoodland_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Woodland, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeywoodland_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_stripeydesert: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Desert)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeydesert_co.paa"};
	};
	class FP_GOR_ach_helmet_stripeydesert_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeydesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeydesert_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Desert, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeydesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_stripeydesert_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Desert, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeydesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeydesert_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Desert, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeydesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_stripeyarid: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Arid)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeyarid_co.paa"};
	};
	class FP_GOR_ach_helmet_stripeyarid_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Arid, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeyarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeyarid_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Arid, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeyarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_stripeyarid_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Arid, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeyarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_stripeyarid_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (DBC Arid, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_stripeyarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_aaf: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (AAF)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_aaf_co.paa"};
	};
	class FP_GOR_ach_helmet_aaf_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (AAF, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_aaf_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_aaf_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (AAF, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_aaf_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_aaf_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (AAF, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_aaf_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_aaf_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (AAF, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_aaf_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_mtp: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (British MTP)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_mtp_co.paa"};
	};
	class FP_GOR_ach_helmet_mtp_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (British MTP, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_mtp_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_mtp_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (British MTP, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_mtp_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_mtp_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (British MTP, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_mtp_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_mtp_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (British MTP, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_mtp_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_multicam: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicam_co.paa"};
	};
	class FP_GOR_ach_helmet_multicam_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicam_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicam_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicam_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_multicam_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicam_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicam_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicam_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_multicamarid: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Arid)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamarid_co.paa"};
	};
	class FP_GOR_ach_helmet_multicamarid_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Arid, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamarid_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Arid, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_multicamarid_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Arid, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamarid_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Arid, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamarid_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_multicamjungle: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Jungle)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamjungle_co.paa"};
	};
	class FP_GOR_ach_helmet_multicamjungle_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Jungle, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamjungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamjungle_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Jungle, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamjungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_multicamjungle_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Jungle, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamjungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamjungle_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Jungle, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamjungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_multicamblack: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Black)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamblack_co.paa"};
	};
	class FP_GOR_ach_helmet_multicamblack_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Black, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamblack_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamblack_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Black, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamblack_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_multicamblack_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Black, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamblack_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_multicamblack_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Multicam Black, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_multicamblack_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_tigerstripejungle: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe jungle)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripejungle_co.paa"};
	};
	class FP_GOR_ach_helmet_tigerstripejungle_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe jungle, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripejungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripejungle_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe jungle, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripejungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_tigerstripejungle_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe jungle, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripejungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripejungle_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe jungle, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripejungle_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_tigerstripedesert: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe desert)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripedesert_co.paa"};
	};
	class FP_GOR_ach_helmet_tigerstripedesert_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripedesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripedesert_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe desert, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripedesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_tigerstripedesert_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe desert, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripedesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripedesert_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe desert, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripedesert_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	
	class FP_GOR_ach_helmet_tigerstripenaval: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe naval)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripenaval_co.paa"};
	};
	class FP_GOR_ach_helmet_tigerstripenaval_rhino: rhsusf_ach_helmet_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe naval, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripenaval_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripenaval_rhino_ESS: rhsusf_ach_helmet_ESS_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe naval, Rhino/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripenaval_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class FP_GOR_ach_helmet_tigerstripenaval_rhino_headset: rhsusf_ach_helmet_headset_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe naval, Rhino/headset)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripenaval_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class FP_GOR_ach_helmet_tigerstripenaval_rhino_headset_ESS: rhsusf_ach_helmet_headset_ess_ocp_alt
	{
		author="Gordon Weedman";
		scope=2;
		displayName="ACH (Tigerstripe naval, Rhino/headset/ESS)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\RHSACH\data\rhs_helmet_ach_tigerstripenaval_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
};


