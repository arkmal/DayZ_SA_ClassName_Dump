////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:52:32 2018 : 'file' last modified on Wed Aug 22 22:02:42 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\mkii\config.bin{
class CfgPatches
{
	class DZ_Pistols_mkii
	{
		units[] = {"mkii"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base;
	class MKII_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Civilian"};
		weight = 1300;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_MKII_10Rnd"};
		chamberableFrom[] = {"Ammo_22"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\MkII\MkII_reload",0.7,1,20};
		reloadAction = "ReloadRugerMK2";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AmphibianS_Shot_SoundSet","AmphibianS_Tail_SoundSet","AmphibianS_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AmphibianS_silencerHomeMade_SoundSet","AmphibianS_silencerHomeMadeTail_SoundSet","AmphibianS_InteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\MkII\MkII_close_0",0.8,1,80};
			begin2[] = {"dz\sounds\weapons\firearms\MkII\MkII_close_1",0.8,1,80};
			begin3[] = {"dz\sounds\weapons\firearms\MkII\MkII_close_2",0.8,1,80};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\MkII\MkII_close_2",0.02,1,20};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 0.08;
			recoil = "recoil_mkii";
			recoilProne = "recoil_mkii_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 10.0;
			type = "shot";
		};
	};
	class MKII: MKII_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_MKII0";
		descriptionShort = "$STR_cfgWeapons_MKII1";
		model = "\dz\weapons\pistols\mkii\rugerMKII.p3d";
		attachments[] = {"suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mag_MKII_10Rnd","","","","","","","","",""}};
		itemSize[] = {3,3};
		dexterity = 3.5;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\mkii\data\ruger_metal_1.rvmat","DZ\weapons\pistols\mkii\data\ruger_metal_1_damage.rvmat","DZ\weapons\pistols\mkii\data\ruger_metal_1_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_mkii[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_mkii_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymkii: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\mkii\rugerMKII.p3d";
	};
};
//};
