#pragma once
//#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/CoreUObject_structs.hpp"

namespace TFD_SDK
{
	using namespace SDK;

	// NumValues: 0x000C
	enum class EM1OnlineServiceConnectionState : uint8
	{
		NotLoggedIn = 0,
		RequestedLogIn = 1,
		ReceivedLogInButNotJoined = 2,
		RequestedJoinGame = 3,
		InTransitionMapToJoinGame = 4,
		ReceivedJoinGame = 5,
		JoinedDedicatedServer = 6,
		ReceivedLoginIdFromDedicatedServer = 7,
		RequestedPlayerCharacterInfoByLoginId = 8,
		SentPlayerPawnToClient = 9,
		ReceivedPawnAndOkay = 10,
		EM1OnlineServiceConnectionState_MAX = 11,
	};
	// NumValues: 0x000D
	enum class EM1EquipmentSlotType : uint8
	{
		Ranged_0 = 0,
		Ranged_1 = 1,
		Ranged_2 = 2,
		Reactor = 9,
		Necklace = 10,
		Earring = 11,
		Ring = 12,
		Bracelet = 13,
		Face = 20,
		Hair = 21,
		AltWeapon = 90,
		PickupWeapon = 91,
		Max = 99,
	};
	// NumValues: 0x003A
	enum class EM1BattleKey : uint8
	{
		None = 0,
		Sprint = 1,
		Jump = 2,
		Evade = 3,
		Skill1 = 4,
		Skill2 = 5,
		Skill3 = 6,
		Skill4 = 7,
		SubSkill = 8,
		Action1 = 9,
		Action2 = 10,
		QuickTurn = 11,
		Reload = 12,
		NextWeapon = 13,
		PrevWeapon = 14,
		WeaponShortcut1 = 15,
		WeaponShortcut2 = 16,
		WeaponShortcut3 = 17,
		WeaponChangeHold = 18,
		WireAction = 19,
		Rescue = 20,
		GiveUpRescue = 21,
		WorldMap = 22,
		LocalMap = 23,
		Inventory = 24,
		Character = 25,
		Quest = 26,
		Menu = 27,
		MenuHold = 28,
		Help = 29,
		Interaction = 30,
		InteractionWithPlayer = 31,
		Chatting = 32,
		ToastHoldButton = 33,
		RadialMenu = 34,
		ToggleObjectivePanel = 35,
		Matching = 36,
		Consumable = 37,
		BattlePass = 38,
		CashShop = 39,
		Codex = 40,
		Journal = 41,
		Social = 42,
		ArcheTuning = 43,
		ResetLabStatistics = 44,
		Preset = 45,
		Detecting = 46,
		Pinging = 47,
		IncreaseMouseSensitivity = 48,
		DecreaseMouseSensitivity = 49,
		PushToTalk = 50,
		CompositeSettingsOnly = 51,
		TeleportToCity = 52,
		RestartAlone = 53,
		NextVoidErosionStep = 54,
		SlowWalkMode = 55,
		ShowSkillCoolTime = 56,
		Max = 57,
	};
	// NumValues: 0x000F
	enum class EM1ItemType : uint8
	{
		None = 0,
		Currency = 1,
		Equipment = 2,
		Consumable = 3,
		Rune = 4,
		Character = 5,
		InstantUse = 6,
		Customizing = 7,
		Title = 8,
		Record = 9,
		CurrencyInternal = 10,
		Fellow = 12,
		Medal = 13,
		TuningBoardJewel = 14,
		Max = 15,
	};
	// NumValues: 0x000C
	enum class EM1MissionEndReason : uint8
	{
		None = 0,
		Completed = 1,
		ByTaskFailure = 2,
		ConnectionClose = 3,
		ExplicitGiveUp = 4,
		OutOfPlayableArea = 5,
		EndPlayByDataLayerUnload = 6,
		InterruptedByOtherMission = 7,
		LeaveMissionByTeleport = 8,
		GiveUpMissionByTeleport = 9,
		LimitTimeOver = 10,
		EM1MissionEndReason_MAX = 11,
	};
	// NumValues: 0x000A
	enum class EM1MissionTargetState : uint8
	{
		Default = 0,
		BeingSpawned = 1,
		Spawned = 2,
		Destructed = 3,
		BeingDespawned = 4,
		Interaction = 5,
		Idle = 6,
		Respawn = 7,
		Deactivated = 8,
		EM1MissionTargetState_MAX = 9,
	};
	// NumValues: 0x000F
	enum class EM1PresetSlotType : uint8
	{
		Ranged_0 = 0,
		Ranged_1 = 1,
		Ranged_2 = 2,
		Reactor = 9,
		Necklace = 10,
		Earring = 11,
		Ring = 12,
		Bracelet = 13,
		Face = 20,
		Hair = 21,
		Fellow = 70,
		PlayerCharacter = 80,
		AltWeapon = 90,
		PickupWeapon = 91,
		Max = 99,
	};
	// NumValues: 0x0006
	enum class EM1MiniGameResult : uint8
	{
		Unknown = 0,
		Fail = 1,
		Success = 2,
		Cancel = 3,
		ForceCancel = 4,
		EM1MiniGameResult_MAX = 5,
	};
	// NumValues: 0x00EE
	enum class EM1StatType : uint8
	{
		Stat_MaxHp = 0,
		Stat_KnockbackSpeed = 1,
		Stat_KnockbackTime = 2,
		Stat_KnockdownTime = 3,
		Stat_RangeMax = 4,
		Stat_GravityScaleCoefficient = 5,
		Stat_CrosshairSizeMax = 6,
		Stat_Impulse = 7,
		Stat_AimOnDelay = 8,
		Stat_AimOffDelay = 9,
		Stat_JumpZVelocity = 10,
		Stat_CurrentEnergyShield = 11,
		Stat_InteractionRevive = 12,
		Stat_RunSpeed = 13,
		Stat_SprintSpeed = 14,
		Stat_ZoomMoveSpeed = 15,
		Stat_RoundsPerMagazine = 16,
		Stat_ReloadRounds = 17,
		Stat_FireInterval = 18,
		Stat_MaxMp = 19,
		Stat_MaxEnergyShield = 20,
		Stat_ATK = 21,
		Stat_ATKMin = 22,
		Stat_ATKMax = 23,
		Stat_DEF = 24,
		Stat_CriticalChance = 25,
		Stat_CriticalATKIncrease = 26,
		Stat_ShellCount = 27,
		Stat_RoundsConsume = 28,
		Stat_AimMoveSpeed = 29,
		Stat_WeaknessDamageIncrease = 30,
		Stat_SpreadZoomSize_Deprecated = 31,
		Stat_CrosshairMoveSizeModifier = 32,
		Stat_CrosshairFireSizeModifier = 33,
		Stat_CrosshairZoomFireSizeModifier = 34,
		Stat_CrosshairRecoverySpeed = 35,
		Stat_CrosshairChangeSpeed = 36,
		Stat_ClimbSpeed = 37,
		Stat_StressMaxRate_Deprecated = 38,
		Stat_StressDamageRate = 39,
		Stat_StressDecreaseRate = 40,
		Stat_NonCombatEntryTime_Deprecated = 41,
		Stat_StressDecreaseStartTime = 42,
		Stat_WalkSpeed = 43,
		Stat_MoveDestructivePower = 44,
		Stat_WeaponProjHitRadiusCoefficient = 45,
		Stat_EvadeTime = 46,
		Stat_EvadeRecoveryTime = 47,
		Stat_Domination = 48,
		Stat_Manipulation = 49,
		Stat_Fortitude = 50,
		Stat_CrosshairSizeMin = 51,
		Stat_ReloadSpeed = 52,
		Stat_ReloadCompleteDelay = 53,
		Stat_ReduceRangeStart = 54,
		Stat_ReduceRangeEnd = 55,
		Stat_ATKReductionByRange = 56,
		Stat_ATKExplosion = 57,
		Stat_ATKBlazer = 58,
		Stat_ATKGlacier = 59,
		Stat_ATKElectricity = 60,
		Stat_ATKDemonic = 61,
		Stat_DEFBlazer = 62,
		Stat_DEFGlacier = 63,
		Stat_DEFElectricity = 64,
		Stat_DEFDemonic = 65,
		Stat_RESCriticalChance = 66,
		Stat_ReloadTime = 67,
		Stat_Burst = 68,
		Stat_Crush = 69,
		Stat_Piercing = 70,
		Stat_FireBurstInterval = 71,
		Stat_ATKReductionByExplosionRange = 72,
		Stat_ZoomOutDelay = 73,
		Stat_Penetration = 74,
		Stat_PenetrationDefence = 75,
		Stat_WeaponDestructivePower = 76,
		Stat_SkillDestructivePower = 77,
		Stat_FireIncreaseSpread_Deprecated = 78,
		Stat_LifeTime_Deprecated = 79,
		Stat_BonusLifeTime_Deprecated = 80,
		Stat_RangeMin_Deprecated = 81,
		Stat_WireCooltimeCoefficient = 82,
		Stat_WireChargingTimeCoefficient = 83,
		Stat_KnockbackAttackRate = 84,
		Stat_KnockbackDefenceResistance = 85,
		Stat_KnockbackTimeResistance = 86,
		Stat_KnockbackSpeedResistance = 87,
		Stat_KnockdownAttackRate = 88,
		Stat_KnockdownXSpeed = 89,
		Stat_KnockdownZSpeed = 90,
		Stat_KnockdownDefenceResistance = 91,
		Stat_KnockdownXSpeedResistance = 92,
		Stat_KnockdownZSpeedResistance = 93,
		Stat_KnockdownTimeResistance = 94,
		Stat_MeleeSpecialAttackReduceCoolTime_Deprecated = 95,
		Stat_HitStopAttackPoint = 96,
		Stat_HitStopDefencePoint = 97,
		Stat_BerserkMoveSpeed = 98,
		Stat_BerserkMaxRate = 99,
		Stat_BerserkDamageRate = 100,
		Stat_BerserkDecreaseStartTime = 101,
		Stat_BerserkDecreaseRate = 102,
		Stat_BerserkMaintenanceTime = 103,
		Stat_NaturalRecoveryTickTimeHp = 104,
		Stat_NaturalRecoveryTickTimeMp = 105,
		Stat_NaturalRecoveryTickTimeEnergyShield = 106,
		Stat_NaturalRecoveryHp = 107,
		Stat_NaturalRecoveryMp = 108,
		Stat_NaturalRecoveryEnergyShield = 109,
		Stat_InBattleNaturalRecoveryHp = 110,
		Stat_InBattleNaturalRecoveryMp = 111,
		Stat_InBattleNaturalRecoveryEnergyShield = 112,
		Stat_CurrentHp = 113,
		Stat_CurrentMp = 114,
		Stat_MaxCommonGauge = 115,
		Stat_CurrentCommonGauge = 116,
		Stat_DEFInflection_VarX1_Deprecated = 117,
		Stat_DEFInflection_VarX2_Deprecated = 118,
		Stat_DEFInflection_VarX3_Deprecated = 119,
		Stat_WireStackCountIncrease = 120,
		Stat_RecoilCoefficient = 121,
		Stat_SkillCooltimeCoefficient = 122,
		Stat_SkillCostCoefficient = 123,
		Stat_SkillATKCoefficient = 124,
		Stat_FinalDamageCoefficient_Deprecated = 125,
		Stat_HpOrbRecoveryCoefficient_Deprecated = 126,
		Stat_MpOrbRecoveryCoefficient_Deprecated = 127,
		Stat_EmptyRoundsReloadTimeSpeed = 128,
		Stat_SkillDurationIncrease = 129,
		Stat_SkillDurationDecrease = 130,
		Stat_SkillScaleCoefficient = 131,
		Stat_WeaponChangingSpeed = 132,
		Stat_MaxGeneralRoundsCoefficient = 133,
		Stat_MaxEnhancedRoundsCoefficient = 134,
		Stat_MaxImpactRoundsCoefficient = 135,
		Stat_MaxHighpowerRoundsCoefficient = 136,
		Stat_NaturalRecoveryTickPR_Deprecated = 137,
		Stat_InBattleNaturalRecoveryPR_Deprecated = 138,
		Stat_NaturalRecoveryPR_Deprecated = 139,
		Stat_CrosshairJumpSizeModifier = 140,
		Stat_PhysicalATK = 141,
		Stat_NatureATK = 142,
		Stat_GiveHpRecoveryCoefficient = 143,
		Stat_TakeHpRecoveryCoefficient = 144,
		Stat_GiveMpRecoveryCoefficient = 145,
		Stat_TakeMpRecoveryCoefficient = 146,
		Stat_RWATKCoefficient = 147,
		Stat_GiveFinalDamageCoefficient = 148,
		Stat_TakeFinalDamageCoefficient = 149,
		Stat_LevelFactor = 150,
		Stat_SkillATKCorrection = 151,
		Stat_ItemLevelCorrection = 152,
		Stat_MaxStressGauge = 153,
		Stat_CurrentStressGauge = 154,
		Stat_MaxBerserkGauge = 155,
		Stat_CurrentBerserkGauge = 156,
		Stat_SkillATKPower = 157,
		Stat_SkillPowerCoefficient = 158,
		Stat_SkillPlainPowerCoefficient = 159,
		Stat_SkillBlazerPowerCoefficient = 160,
		Stat_SkillGlacierPowerCoefficient = 161,
		Stat_SkillElectricityPowerCoefficient = 162,
		Stat_SkillDemonicPowerCoefficient = 163,
		Stat_SkillFusionPowerCoefficient = 164,
		Stat_SkillSingularPowerCoefficient = 165,
		Stat_SkillDimensionPowerCoefficient = 166,
		Stat_SkillTechPowerCoefficient = 167,
		Stat_SkillPlainATKCoefficient = 168,
		Stat_SkillBlazerATKCoefficient = 169,
		Stat_SkillGlacierATKCoefficient = 170,
		Stat_SkillElectricityATKCoefficient = 171,
		Stat_SkillDemonicATKCoefficient = 172,
		Stat_SkillFusionATKCoefficient = 173,
		Stat_SkillSingularATKCoefficient = 174,
		Stat_SkillDimensionATKCoefficient = 175,
		Stat_SkillTechATKCoefficient = 176,
		Stat_SkillCriticalChance = 178,
		Stat_SkillCriticalATKIncrease = 179,
		Stat_SkillRESCriticalChance = 180,
		Stat_DEFSkill = 181,
		Stat_DEFPlain = 182,
		Stat_Accuracy = 183,
		Stat_ZoomAccuracy = 184,
		Stat_InvokeChanceElementalSE = 185,
		Stat_GiveShieldRecoveryCoefficient = 186,
		Stat_TakeShieldRecoveryCoefficient = 187,
		Stat_MaxSprintSpeed = 188,
		Stat_WeaponProjHitRadius = 189,
		Stat_DBNORescueTime = 190,
		Stat_RuneDropCoefficient = 191,
		Stat_EquipmentDropCoefficient = 192,
		Stat_ConsumableDropCoefficient = 193,
		Stat_GoldDropCoefficient = 194,
		Stat_QulipothiumDropCoefficient = 195,
		Stat_CharEXPCoefficient = 196,
		Stat_ProficiencyCoefficient = 197,
		Stat_TypeBossATKBonus = 198,
		Stat_TypeDarknessATKBonus = 199,
		Stat_TypeTruthATKBonus = 200,
		Stat_TypeImmortalATKBonus = 201,
		Stat_DBNODurationCoefficient = 202,
		Stat_LootDistanceCoefficient = 203,
		Stat_DoubleJumpZVelocity = 204,
		Stat_EciveSearchDistanceCoefficient = 205,
		Stat_EciveSearchRemainTimeCoefficient = 206,
		Stat_SubSkillATKPower = 207,
		Stat_SubSkillATKCoefficient = 208,
		Stat_TakeWeaknessDamageCoefficient_Deprecated = 209,
		Stat_RWChargeRateCoefficient = 210,
		Stat_RWDischargeRateCoefficient = 211,
		Stat_TypeBossSkillATKBonus = 212,
		Stat_TypeDarknessSkillATKBonus = 213,
		Stat_TypeTruthSkillATKBonus = 214,
		Stat_TypeImmortalSkillATKBonus = 215,
		Stat_BurstDelay = 216,
		Stat_DefaultStressStopDuration = 217,
		Stat_FieldTimingRing_LimitTimeRatio = 218,
		Stat_FieldTimingRing_NeedleRotationTimeRatio = 219,
		Stat_FieldTimingRing_ReduceSuccessCount = 220,
		Stat_FieldTimingRing_IncreaseTimingAngleMax = 221,
		Stat_FieldTimingRing_FailTimeRatio = 222,
		Stat_SkillVelocityAndRangeCoefficient = 223,
		Stat_StressMaxHpRandMinRate = 224,
		Stat_StressMaxHpRandMaxRate = 225,
		Stat_StressMaxHpCurrentRate = 226,
		Stat_ActionSpeedCoeffcient = 227,
		Stat_ProjectilePenetration = 228,
		Stat_ProjectilePenetrationDefence = 229,
		Stat_RageMaxRate = 230,
		Stat_RageDamageRate = 231,
		Stat_RageDecreaseRate = 232,
		Stat_MaxRageGauge = 233,
		Stat_CurrentRageGauge = 234,
		Stat_MultiHitChance = 235,
		Stat_AdvantageCoefficient = 236,
		Stat_MultiHitDamageIncrease = 237,
		MAX = 238,
	};
	// NumValues: 0x0004
	enum class EM1MissionActorState : uint8
	{
		None = 0,
		Activated = 1,
		Deactivated = 2,
		EM1MissionActorState_MAX = 3,
	};
	// NumValues: 0x0014
	enum class EM1MissionSubType : uint8
	{
		Default = 0,
		Destruction = 1,
		Defense = 2,
		Supply = 3,
		Collection = 4,
		Assasination = 5,
		Extermination = 6,
		Occupation = 7,
		WaveDefense = 8,
		ContinuousSurvival = 9,
		DataCollection = 10,
		Explosion = 11,
		Steal = 12,
		Escort = 13,
		MultiCollection = 14,
		MultiAssasination = 15,
		VoidFragment = 16,
		VoidFusion = 17,
		DestructionVulgusPost = 18,
		EM1MissionSubType_MAX = 19,
	};


	// 0x0004 (0x0004 - 0x0000)
	struct FM1TemplateId final
	{
	public:
		int32                                         ID;                                                // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FM1WeaponSlot final
	{
	public:
		int64                                         ItemUid;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FM1TemplateId                          TemplateId;                                        // 0x0008(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EM1EquipmentSlotType                          SlotType;                                          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class AM1Weapon*							  Weapon;                                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0090 (0x0090 - 0x0000)
	struct FM1ActivatedWeaponSlot final
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		struct FM1WeaponSlot                          WeaponSlot;                                        // 0x0008(0x0018)(NoDestructor, NativeAccessSpecifierPublic)
		TMap<EM1BattleKey, class UM1WeaponInputContext*> InputContexts;                                  // 0x0020(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPublic)
		uint8                                         Pad_70[0x20];                                      // 0x0070(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0020 (0x0020 - 0x0000)
	struct FFontOutlineSettings final
	{
	public:
		int32                                         OutlineSize;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bSeparateFillAlpha;                                // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bApplyOutlineToDropShadows;                        // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		class UObject*								  OutlineMaterial;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           OutlineColor;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1ItemTidBox final
	{
	public:
		EM1ItemType                                   Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         TemplateId;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0030 (0x0030 - 0x0000)
	struct FM1DropItemInfo final
	{
	public:
		bool                                          bPublicItem;                                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor*								  ItemOwner;                                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		int32                                         Count;                                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FM1ItemTidBox                          ItemBox;                                           // 0x0014(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
		uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		int64                                         ItemOid;                                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64                                         MonsterUid;                                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0020 (0x0020 - 0x0000)
	struct FM1MissionTaskLink final
	{
	public:
		class FName                                   TaskName;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		int32                                         LinkIndex;                                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AM1MissionTaskActor*					  InstancedTaskActor;                                // 0x0010(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		TSubclassOf<class AM1MissionTaskActor>        TaskActorClass;                                    // 0x0018(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0030 (0x0030 - 0x0000)
	struct FM1PresetItem final
	{
	public:
		EM1PresetSlotType                             PresetSlotType;                                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		int64                                         ItemUid;                                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RuneLoadoutSlotIndex;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         CustomizeLoadoutSlotIndex;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         TuningboardLoadoutSlotIndex;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SeasonReinforceLoadoutSlotIndex;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EM1ItemType                                   ItemType;                                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FM1TemplateId                          ItemTid;                                           // 0x0024(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Level;                                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0068 (0x0068 - 0x0000)
	struct FM1PresetSlot final
	{
	public:
		int32                                         PresetIndex;                                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 PresetName;                                        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<EM1PresetSlotType, struct FM1PresetItem> PresetItemBySlotType;                              // 0x0018(0x0050)(NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct FM1MiniGameResult final
	{
	public:
		struct FM1TemplateId                          MiniGameTemplateId;                                // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FM1TemplateId                          FieldDifficultyTemplateId;                         // 0x0004(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EM1MiniGameResult                             Result;                                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1ScaledInteger final
	{
	public:
		int64                                         Value;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};
	// 0x0060 (0x0060 - 0x0000)
	struct FM1MissionProgressInfo final
	{
	public:
		class AM1MissionTaskActor*					  ActivatedTaskActor;                                // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class AM1MissionTaskActor*					  LastTaskActor;                                     // 0x0008(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		EM1MissionActorState                          MissionActorState;                                 // 0x0010(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         ActivatedTaskIndex;                                // 0x0014(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		TArray<class UM1MissionControlComponent*>     JoinedControls;                                    // 0x0018(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		TArray<class AM1Player*>                      DeadJoinedPlayers;                                 // 0x0028(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
		struct FDateTime                              BeginTime;                                         // 0x0038(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		double                                        PlayedTime;                                        // 0x0040(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		double                                        PenaltyTime;                                       // 0x0048(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0014 (0x0014 - 0x0000)
	struct FM1CoolTimer final
	{
	public:
		class FName                                   CoolTimeContext;                                   // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		bool                                          bActivated;                                        // 0x0008(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CoolTimeDuration;                                  // 0x000C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		float                                         RemainingCoolTime;                                 // 0x0010(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct alignas(0x08) FTableRowBase
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1RecoilInfo final
	{
	public:
		float                                         Pitch;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Yaw;                                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0030 (0x0038 - 0x0008)
	struct FM1RangedWeaponRecoilData final : public FTableRowBase
	{
	public:
		class FString                                 StringId;                                          // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RecoilApplyInterpSpeed;                            // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RecoilRecoverInterpSpeed;                          // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RecoilRecoverStartDelay;                           // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RecoilResetTimeAfterFire;                          // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FM1RecoilInfo>                  RecoilInfos;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	
	// 0x0220 (0x0248 - 0x0028)
	class AActor : public UObject
	{
	public:
		uint8                                         Pad_Children[0x118]; // 0x28 
		TArray<class AActor*>                         Children; // 0x0140(0x0010) Need
		uint8                                         Pad_AActor_Class[0xF8]; // 0x150 
	public:
		bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);
		float GetDistanceTo(const class AActor* OtherActor) const;
		struct FVector K2_GetActorLocation() const;
		struct FRotator K2_GetActorRotation() const;
	};
	// 0x0080 (0x00A8 - 0x0028)
	class UActorComponent : public UObject
	{
	public:
		uint8 Pad_UActorComponent_Class[0x80]; // 0x0028
	};
	// 0x0000 (0x0028 - 0x0028)
	class UBlueprintFunctionLibrary : public UObject
	{
	};
	// 0x02A8 (0x02D0 - 0x0028)
	class UCanvas final : public UObject
	{
	public:
		uint8                                         Pad_ClipX[0x8]; // 0x0028(0x0004)
		float                                         ClipX; // 0x0030(0x0004)
		float                                         ClipY; // 0x0034(0x0004)
		uint8                                         Pad_SizeX[0x8]; // 0x0038
		int32                                         SizeX; // 0x0040(0x0004)
		int32                                         SizeY; // 0x0044(0x0004)
		uint8                                         Pad_UCanvas_Class[0x288]; // 0x0048
	public:
		void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
		void K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	};
	// 0x0008 (0x0030 - 0x0028)
	class UDataAsset : public UObject
	{
	public:
		uint8                                         Pad_UDataAsset[0x8];                               // 0x0028
	};
	// 0x1010 (0x1038 - 0x0028)
	class UEngine : public UObject
	{
	public:
		uint8 Pad_SmallFont[0x30]; // 0x0028
		class UFont* SmallFont; // 0x0058(0x0008)
		uint8 Pad_UEngine_Class[0xFD8]; // 0x0060
	public:
		static class UEngine* GetEngine();
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Engine">();
		}
	};
	// 0x01A8 (0x01D0 - 0x0028)
	class UFont final : public UObject
	{
	public:
		uint8                                         Pad_ADE[0x1A8]; // 0x0028
	};
	// 0x0198 (0x01C0 - 0x0028)
	class UGameInstance : public UObject
	{
	public:
		uint8 Pad_LocalPlayers[0x10]; // 0x28 
		TArray<class ULocalPlayer*>  LocalPlayers; // 0x0038(0x0010)
		uint8 Pad_UGameInstance_Class[0x178]; // 0x48 
	};
	// 0x0000 (0x0028 - 0x0028)
	class UGameplayStatics final : public UBlueprintFunctionLibrary
	{
	public:
		static class APlayerController* GetPlayerController(const class UObject* WorldContextObject, int32 PlayerIndex);
		static bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
		static double GetWorldDeltaSeconds(const class UObject* WorldContextObject);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"GameplayStatics">();
		}
		static class UGameplayStatics* GetDefaultObj()
		{
			return GetDefaultObjImpl<UGameplayStatics>();
		}
	};
	// 0x0000 (0x0028 - 0x0028)
	class UKismetMathLibrary final : public UBlueprintFunctionLibrary
	{
	public:
		static struct FTransform Conv_MatrixToTransform(const struct FMatrix& InMatrix);
		static struct FMatrix Conv_TransformToMatrix(const struct FTransform& Transform);
		static double Distance2D(const struct FVector2D& v1, const struct FVector2D& v2);
		static struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
		static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
		static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
		
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"KismetMathLibrary">();
		}
		static class UKismetMathLibrary* GetDefaultObj()
		{
			return GetDefaultObjImpl<UKismetMathLibrary>();
		}
	};
	// 0x02C8 (0x02F0 - 0x0028)
	class ULevel final : public UObject
	{
	public:
		uint8  Pad_Actors[0x70]; // 0x28 
		class TArray<class AActor*> Actors; // 0x0098(0x0010)
		uint8  Pad_WorldSettings[0x1C8]; // 0xA8 
		class AWorldSettings* WorldSettings; // 0x0270(0x0008)
		uint8  Pad_ULevel_Class[0x78]; // 0x278
	};
	// 0x03B8 (0x03E0 - 0x0028)
	class UM1Account final : public UObject
	{
	public:
		uint8                                         Pad_Preset[0x2D0];                                        // 0x0028
		class UM1AccountPreset*						  Preset;													// 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1Account[0xE0];                                     // 0x0300

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Account">();
		}
	};
	// 0x0050 (0x0078 - 0x0028)
	class UM1AccountPreset final : public UObject
	{
	public:
		TMap<int32, struct FM1PresetSlot>             PresetSlotByIndex;                                 // 0x0028(0x0050)(NativeAccessSpecifierPrivate)

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1AccountPreset">();
		}
	};
	// 0x0008 (0x0030 - 0x0028)
	class UM1ActionInputContext : public UObject
	{
	public:
		uint8                                         Pad_UM1ActionInputContext[0x8];                                       // 0x0028
	};
	// 0x0118 (0x0140 - 0x0028)
	class UM1CharacterAttribute : public UObject
	{
	public:
		uint8 Pad_UM1CharacterAttribute_Class[0x118]; // 0x0028
	};
	// 0x0330 (0x0358 - 0x0028)
	class UM1MissionResult final : public UObject
	{
	public:
		uint8                                         Pad_MissionTemplateId[0x10];                       // 0x0028
		struct FM1TemplateId                          MissionTemplateId;                                 // 0x0038(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_MissionSubType[0x2D];                          // 0x003C
		EM1MissionSubType                             MissionSubType;                                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1MissionResult[0x2EE];                       // 0x006A
	};
	// 0x0018 (0x0040 - 0x0028)
	class UM1MissionTaskService : public UObject
	{
	public:
		uint8                                         Pad_28[0x11];                                      // 0x0028
		bool                                          bJoined;                                           // 0x0039(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         Pad_3A[0x6];                                       // 0x003A
	};
	// 0x0018 (0x0040 - 0x0028)
	class UM1PrivateOnlineSubService : public UObject
	{
	public:
		uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
		bool                                          bIsReady;                                          // 0x0038(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0120 (0x0148 - 0x0028)
	class UM1ResearchSystem final : public UObject
	{
	public:
		uint8                                         Pad_BookmarkResearchTids[0xA0];                    // 0x0028
		TArray<struct FM1TemplateId>                  BookmarkResearchTids;                              // 0x00C8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1ResearchSystem[0x70];                       // 0x00D8

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1ResearchSystem">();
		}
	};
	// 0x0070 (0x0098 - 0x0028)
	class UMissionGraphTaskNode : public UObject
	{
	public:
		uint8                                         Pad_UMissionGraphTaskNode[0x70];
	};
	// 0x0020 (0x0048 - 0x0028)
	class UPlayer : public UObject
	{
	public:
		uint8 Pad_PlayerController[0x8]; // 0x28
		class APlayerController* PlayerController; // 0x0030(0x0008)
		uint8 Pad_UPlayer_Class[0x10]; // 0x38
	};
	// 0x0010 (0x0038 - 0x0028)
	class UScriptViewportClient : public UObject
	{
	public:
		uint8 Pad_UScriptViewportClient_Class[0x10]; // 0x0028(0x0010)
	};
	// 0x0008 (0x0030 - 0x0028)
	class USubsystem : public UObject
	{
	public:
		uint8 Pad_USubsystem[0x8];
	};
	// 0x0000 (0x0028 - 0x0028)
	class UVisual : public UObject
	{
	};
	// 0x0108 (0x0130 - 0x0028)
	class UWidget : public UVisual
	{
	public:
		uint8 Pad_UWidget_Class[0x108];
	};
	// 0x08F8 (0x0920 - 0x0028)
	class UWorld final : public UObject
	{
	public:
		uint8 Pad_PersistentLevel[0x8]; // 0x28
		class ULevel* PersistentLevel; // 0x30(0x0008) Need
		uint8 Pad_Levels[0x140]; // 0x38
		TArray<class ULevel*> Levels; // 0x0178(0x0010) Need
		uint8  Pad_OwningGameInstance[0x38]; // 0x188
		class UGameInstance* OwningGameInstance; // 0x01C0(0x0008) Need
		uint8  Pad_UWorld_Class[0x758]; // 0x1C8 

	public:
		static class UWorld* GetWorld(uintptr_t dwBase);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"World">();
		}
	};

	// 0x0000 (0x0030 - 0x0030)
	class UGameInstanceSubsystem : public USubsystem
	{
	};
	// 0x0150 (0x0180 - 0x0030)
	class UM1ActorManagerSubsystem final : public UGameInstanceSubsystem
	{
	public:
		TArray<class AM1Character*> Characters; // 0x0030(0x0010)
		uint8 Pad_UM1ActorManagerSubsystem_Class[0x140];// 0x0040
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1ActorManagerSubsystem">();
		}
	};
	// 0x0008 (0x0038 - 0x0030)
	class UM1WeaponInputContext : public UM1ActionInputContext
	{
	public:
		uint8                                         Pad_UM1WeaponInputContext[0x8];                                     // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};
	// 0x0068 (0x0098 - 0x0030)
	class UMissionGraph : public UDataAsset
	{
	public:
		uint8                                         Pad_UMissionGraph[0x68];                           // 0x0030(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// 0x0378 (0x03B0 - 0x0038)
	class UGameViewportClient : public UScriptViewportClient
	{
		uint8 Pad_UGameViewportClient_Class[0x378]; // 0x0038 378
	};
	
	// 0x0000 (0x0040 - 0x0040)
	class UM1MissionTaskServiceInteraction final : public UM1MissionTaskService
	{
	public:
		void ServerRequestMissionTargetBeginInteraction(class AM1MissionTargetInteraction* InActor, class AM1PlayerControllerInGame* InAcceptor);
	};
	// 0x0060 (0x00A0 - 0x0040)
	class UM1PrivateOnlineServicePreset final : public UM1PrivateOnlineSubService
	{
	public:
		uint8                                         Pad_40[0x60];                                      // 0x0040(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		void ServerRequestApplyPreset(int32 InPresetIndex);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PrivateOnlineServicePreset">();
		}
	};
	// 0x0060 (0x00A0 - 0x0040)
	class UM1PrivateOnlineServiceResearch final : public UM1PrivateOnlineSubService
	{
	public:
		uint8                                         Pad_40[0x60];                                      // 0x0040(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
	public:
		void ServerRequestStartResearch(const struct FM1TemplateId& InResearchTemplateId, int32 InRepeatCount);
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PrivateOnlineServiceResearch">();
		}
	};

	// 0x0230 (0x0278 - 0x0048)
	class ULocalPlayer : public UPlayer
	{
	public:
		uint8 Pad_ViewportClient[0x30]; // 0x48
		class UGameViewportClient* ViewportClient; // 0x0078(0x0008)
		uint8 Pad_ULocalPlayer_Class[0x1F8]; // 0x80
	};
	
	// 0x0150 (0x01E8 - 0x0098)
	class UM1DataMission final : public UMissionGraph
	{
	public:
		uint8                                         Pad_MissionDataRowName[0x20];                       // 0x0098
		class FName                                   MissionDataRowName;                                 // 0x00B8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EM1MissionSubType                             MissionSubType;                                     // 0x00C0(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_UM1DataMission[0x127];                          // 0x00C1
	};
	// 0x0238 (0x02D0 - 0x0098)
	class UM1MissionTask final : public UMissionGraphTaskNode
	{
	public:
		class FName                                   TaskName;                                          // 0x0098(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1MissionTask[0x230];                         // 0x00A0
	};
	
	// 0x0020 (0x00C8 - 0x00A8)
	class UM1ActorComponent : public UActorComponent
	{
	public:
		uint8 Pad_UM1ActorComp_Class[0x20];
	};
	// 0x0730 (0x07D8 - 0x00A8)
	class UM1MissionControlComponent final : public UActorComponent
	{
	public:
		uint8                                         Pad_SubServices[0x20];                             // 0x00A8
		TArray<class UM1MissionTaskService*>          SubServices;                                       // 0x00C8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
		uint8                                         Pad_ActivatedMissions[0x130];                      // 0x00D8
		TArray<class AM1MissionActor*>                AvailableMissions;                                 // 0x0208(0x0010)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
		TArray<class AM1MissionActor*>                ActivatedMissions;                                 // 0x0218(0x0010)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
		uint8                                         Pad_MissionResult[0x390];                          // 0x0228
		class UM1MissionResult*						  MissionResult;                                     // 0x05B8(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1MissionControlComponent_Class[0x218];       // 0x05C0

	public:
		void ServerStartMissionByTemplateID(const struct FM1TemplateId& InTemplateId);
		void ServerRestartLastPlayedMission();
		void ServerRunTaskActor(class AM1MissionTaskActor* InActor);
		void ServerLeaveMission(EM1MissionEndReason InReason);
	};
	// 0x0148 (0x01F0 - 0x00A8)
	class alignas(0x10) USceneComponent : public UActorComponent
	{
	public:
		uint8                                         Pad_382[0x148];
	public:
		struct FTransform K2_GetComponentToWorld() const;
	};

	// 0x0008 (0x00D0 - 0x00C8)
	class UM1CharacterComponent : public UM1ActorComponent
	{
	public:
		uint8 Pad_UM1CharacterComponent[0x8];  // 0x00C8
	};
	// 0x00B0 (0x0178 - 0x00C8)
	class UM1CoolTimeComponent final : public UM1ActorComponent
	{
	public:
		TArray<struct FM1CoolTimer>                   CoolTimers;                                        // 0x00C8(0x0010)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
		uint8                                         Pad_D8[0xA0];                                      // 0x00D8(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0A08 (0x0AD0 - 0x00C8)
	class UM1PrivateOnlineServiceComponent final : public UM1ActorComponent
	{
	public:
		TArray<class UM1PrivateOnlineSubService*>     SubServices;        // 0x00C8(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		uint8 Pad_UM1PrivateOnlineServiceComponent_Class[0x9F8];	      // 0x00D8

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PrivateOnlineServiceComponent">();
		}
	};
	// 0x0458 (0x0520 - 0x00C8)
	class UM1StatComponent : public UM1ActorComponent
	{
	public:
		uint8                                         Pad_230[0x458];                                    // 0x00C8

	public:
		struct FM1ScaledInteger GetStatValue(const EM1StatType InStatType) const;

	};
	// 0x0010 (0x00D8 - 0x00C8)
	class UM1WeaponComponent : public UM1ActorComponent
	{
	public:
		uint8 Pad_UM1WeaponComp_Class[0x10];	// 0x00C8
	};

	// 0x0130 (0x0200 - 0x00D0)
	class alignas(0x10) UM1TeleportHandlerComponent final : public UM1CharacterComponent
	{
	public:
		uint8                                         Pad_1C9[0x130];                                     // 0x01C9(0x0037)(Fixing Struct Size After Last Property [ Dumper-7 ])
	public:
		void ServerMoveToTeleportToLocation(const struct FVector& InLocation, const struct FRotator& InRotation);
	};
	// 0x0158 (0x0228 - 0x00D0)
	class UM1WeaponSlotControlComponent final : public UM1CharacterComponent
	{
	public:
		uint8 Pad_ActiveSlot[0x20]; // 0x00D0
		struct FM1ActivatedWeaponSlot ActivatedWeaponSlot; // 0x00F0(0x0090)
		uint8 Pad_UM1WeaponSlotControlComponent_Class[0xA8]; // 0x0180
	};
	// 0x0038 (0x0110 - 0x00D8)
	class UM1WeaponSprayPatternComponent final : public UM1WeaponComponent
	{
	public:
		uint8                                         Pad_CrosshairSizeBase[0xC];					  // 0x00D8
		float										  CrosshairSizeBase;							  // 0x00E4(0x0004)
		struct FM1RangedWeaponRecoilData*			  RecoilData;									  // 0x00E8(0x0008)
		struct FM1RangedWeaponRecoilData*			  ZoomRecoilData;								  // 0x00E8(0x0008)
		bool										  bApplySpreadSize;								  // 0x00F8(0x0001)
		uint8                                         Pad_CurrentSpreadSize[0xF];					  // 0x00F9
		float										  CurrentSpreadSize;						      // 0x0108(0x0004)                        
		uint8                                         Pad_UM1WeaponSprayPatternComponent[0x4];        // 0x010C
	};
	// 0x0028 (0x0100 - 0x00D8)
	class UM1WeaponRoundsComponent final : public UM1WeaponComponent
	{
	public:
		uint8 Pad_CurrentRounds[0x14]; // 0x00D8
		int32 CurrentRounds; // 0x00EC(0x0004)
		uint8 Pad_UM1WeaponRoundsComponent_Class[0x10]; // 0x00F0
	public:
		void ClientFillCurrentRoundByServer();
	};
	
	// 0x0020 (0x0150 - 0x0130)
	class UTextLayoutWidget : public UWidget
	{
	public:
		uint8 Pad_UTextLayoutWidget_Class[0x20];
	};
	// 0x0120 (0x0250 - 0x0130)
	class UUserWidget : public UWidget
	{
	public:
		uint8 Pad_UUserWidget_Class[0x120];
	};

	// 0x00E8 (0x0228 - 0x0140)
	class UM1MonsterAttribute : public UM1CharacterAttribute
	{
	public:
		uint8 UM1MonsterAttribute_Class[0xE8]; // 0x0140

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MonsterAttribute">();
		}
	};

	// 0x01B0 (0x0300 - 0x0150)
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText Text; // 0x0150(0x0018)
		uint8 Pad_UTextBlock_Class[0x198];// 0x0168
	};

	// 0x0108 (0x02C8 - 0x01C0)
	class UM1GameInstance : public UGameInstance
	{
	public:
		EM1OnlineServiceConnectionState ConnectionState; // 0x01C0(0x0001)
		uint8 Pad_UM1GameInstance_Class[0x107]; // 0x01C1

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1GameInstance">();
		}
	};

	// 0x0230 (0x0420 - 0x01F0)
	class UM1ActorWidgetComponent : public USceneComponent
	{
	public:
		uint8 Pad_ActorWidget[0x48]; // 0x01F0
		TWeakObjectPtr<class UM1UIActorWidget> ActorWidget; // 0x0238(0x0008)
		uint8 Pad_UM1ActorWidgetComponent_Class[0x1E0]; // 0x0240
	};
	// 0x0280 (0x0470 - 0x01F0)
	class UPrimitiveComponent : public USceneComponent
	{
	public:
		uint8 Pad_UPrimitiveComponent_Class[0x280]; // 0x01F0
	};
	
	// 0x0088 (0x02D0 - 0x0248)
	class AController : public AActor
	{
	public:
		uint8 Pad_PlaterState[0x8]; // 0x248
		class APlayerState* PlayerState;                                       // 0x0250(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8 Pad_Pawn[0x30]; // 0x258
		class APawn* Pawn; // 0x0288(0x0008)
		uint8 Pad_Character[0x8]; // 0x290
		class ACharacter* Character; // 0x0298(0x0008)
		uint8 Pad_AController_Class[0x30]; // 0x2A0
	public:
		void SetControlRotation(const struct FRotator& NewRotation);
		bool LineOfSightTo(const class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks) const;
	};
	// 0x0000 (0x0248 - 0x0248)
	class AInfo : public AActor
	{
	};
	// 0x00E8 (0x0330 - 0x0248)
	class AM1Actor : public AActor
	{
	public:
		uint8 Pad_AM1Actor_Class[0xE8];
	};
	// 0x0398 (0x05E0 - 0x0248)
	class alignas(0x10) AM1DropContainer : public AActor
	{
	public:
		uint8                                         Pad_BeingPicked[0x278]; // 0x248
		bool                                          bBeingPickedLocally; // 0x04C0(0x0001) Need
		bool                                          bTriedSetToObtained; // 0x04C1(0x0001) Need
		uint8                                         Pad_AM1DropContainer_Class[0x11E]; // 0x04C2
	public:
		bool IsObtained() const;
	};
	// 0x0030 (0x0278 - 0x0248)
	class AM1MiniGameActor final : public AActor
	{
	public:
		struct FM1TemplateId                          MiniGameTid;                                       // 0x0248(0x0004)(Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		struct FM1TemplateId                          FieldDifficultyTid;                                // 0x024C(0x0004)(Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8										  Pad_AM1MiniGameActor[0x28];                        // 0x0250

	public:
		void ServerDropItems(class AController* InInstigator);
		void ServerOnMiniGameEnded(const struct FM1MiniGameResult& InResult);
		void ClientStopMiniGame();

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MiniGameActor">();
		}
	};
	// 0x0390 (0x05D8 - 0x0248)
	class AM1MissionActor : public AActor
	{
	public:
		uint8                                         Pad_MissionData[0x30];						     // 0x0248
		class UM1DataMission*						  MissionData;                                       // 0x0278(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         Pad_TaskLinks[0x10];								 // 0x0280
		TArray<struct FM1MissionTaskLink>             TaskLinks;                                         // 0x0290(0x0010)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
		uint8                                         Pad_ProgressInfo[0xC8];						     // 0x02A0
		struct FM1MissionProgressInfo                 ProgressInfo;                                      // 0x0368(0x0060)(Net, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		uint8                                         Pad_CoolTimeComponent[0x1C8];                      // 0x03C8
		class UM1CoolTimeComponent*					  CoolTimeComponent;                                 // 0x0590(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionActor_Class[0x40];                   // 0x0598
	};
	// 0x0018 (0x0260 - 0x0248)
	class AM1MissionTaskMoveWayPoint : public AActor
	{
	public:
		uint8                                         Pad_Index_0[0x10];                                 // 0x0248
		int32                                         Index_0;                                           // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionTaskMoveWayPoint[0x4];               // 0x025C
	};
	// 0x0210 (0x0458 - 0x0248)
	class AM1TaskEventActor : public AActor
	{
	public:
		uint8                                         Pad_AM1TaskEventActor_Class[0x210];                // 0x0248(0x001A)(Fixing Size After Last Property [ Dumper-7 ])
	};
	// 0x0070 (0x02B8 - 0x0248)
	class APawn : public AActor
	{
	public:
		uint8 Pad_APawn_Class[0x70];
	};
	// 0x36E8 (0x3930 - 0x0248)
	class APlayerCameraManager : public AActor
	{
	public:
		uint8 Pad_APlayerCameraManager_Class[0x36E8]; // 0x0248 3808

	public:
		struct FVector GetCameraLocation() const;
		struct FRotator GetCameraRotation() const;
	};
	// 0x0118 (0x0360 - 0x0248)
	class APlayerState : public AInfo
	{
	public:
		uint8                                         Pad_APlayerState_Class[0x118];                     // 0x0248(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x01E0 (0x0428 - 0x0248)
	class AWorldSettings : public AInfo
	{
	public:
		uint8 Pad_TimeDilation[0x130]; // 0x248 
		float TimeDilation; // 0x0378(0x0004)
		uint8 Pad_AWorldSettings_Class[0xAC]; // 0x037C
	};

	// 0x04D0 (0x0720 - 0x0250)
	class UM1UIWidget : public UUserWidget
	{
	public:
		uint8 Pad_UM1UIWidget_Class[0x4D0];
	};

	// 0x0248 (0x0500 - 0x02B8)
#pragma pack(push, 0x1)
	class alignas(0x10) ACharacter : public APawn
	{
	public:
		class USkeletalMeshComponent* Mesh; // 0x02B8(0x0008)
		uint8 Pad_ACharacter_Class[0x240]; // 0x2C0
	};
#pragma pack(pop)

	// 0x04B8 (0x0788 - 0x02D0)
	class APlayerController : public AController
	{
	public:
		uint8 Pad_Player[0x8]; // 0x2D0
		class UPlayer* Player; // 0x02D8(0x0008)
		uint8 Pad_PlayerCameraManager[0x10]; // 0x2E0
		class APlayerCameraManager* PlayerCameraManager; // 0x02F0(0x0008)
		uint8 Pad_APlayerController[0x490]; // 0x02F8

	public:
		bool GetMousePosition(float* LocationX, float* LocationY) const;
	};

	// 0x0020 (0x0320 - 0x0300)
#pragma pack(push, 0x1)
	class alignas(0x10) UM1TextBlock : public UTextBlock
	{
	public:
		uint8 Pad_UM1TextBlock_Class[0x20];
	};
#pragma pack(pop)

	// 0x0448 (0x0778 - 0x0330)
	class AM1AbilityActor : public AM1Actor
	{
	public:
		uint8 Pad_AM1AbilityActor_Class[0x448];	// 0x0330	
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1AbilityActor">();
		}
	};
	// 0x0108 (0x0438 - 0x0330)
	class AM1FieldInteractableActor : public AM1Actor
	{
	public:
		uint8 Pad_AM1FieldIntActor_Class[0x108]; // 0x0330
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor">();
		}
	};
	// 0x0010 (0x0340 - 0x0330)
	class AM1StatBasedActor : public AM1Actor
	{
	public:
		uint8                                         Pad_AM1StatBasedActor_Class[0x10];                  // 0x0330(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};
	// 0x0160 (0x0490 - 0x0330)
	class AM1Weapon : public AM1Actor
	{
	public:
		uint8 Pad_RoundsComponent[0x30];	// 0x0330
		class UM1WeaponSprayPatternComponent* SprayPatternComponent;                             // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		class UM1WeaponRoundsComponent* RoundsComponent; // 0x0368(0x0008)
		uint8 Pad_AM1Weapon_Class[0x120]; // 0x0370
	};

	// 0x0400 (0x0740 - 0x0340)
	class AM1MissionTargetActor : public AM1StatBasedActor
	{
	public:
		uint8										  Pax_CurrentState[0x284];													// 0x0340					
		EM1MissionTargetState                         CurrentState; 															// 0x05C4(0x0001)
		uint8                                         Pad_AM1MissionTargetActor_Class[0x17B];                                   // 0x05C5
	};

	// 0x0088 (0x03E8 - 0x0360)
	class AM1PlayerState final : public APlayerState
	{
	public:
		class UM1MissionControlComponent*			  MissionControlComponent;                           // 0x0360(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8										  Pad_AM1PlayerState_Class[0x80];                    // 0x0368
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerState">();
		}
	};

	// 0x0030 (0x0450 - 0x0420)
	class UM1CharacterInfoWidgetComponent final : public UM1ActorWidgetComponent
	{
	public:
		uint8 Pad_UM1CharacterInfoWidgetComponent_Class[0x30];	// 0x0420
	};

	// 0x0020 (0x0458 - 0x0438)
	class AM1FieldInteractableActor_Hit : public AM1FieldInteractableActor
	{
	public:
		uint8                                         AM1FieldInteractableActor_Hit_Class[0x20];
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor_Hit">();
		}
	};
	// 0x0018 (0x0450 - 0x0438)
	class AM1FieldInteractableActor_Interaction : public AM1FieldInteractableActor
	{
	public:
		uint8 Pad_AM1FieldIntActorInt_Class[0x18]; // 0x0438

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor_Interaction">();
		}
	};
	// 0x0010 (0x0460 - 0x0450)
	class AM1FieldInteractableActorMiniGame final : public AM1FieldInteractableActor_Interaction
	{
	public:
		uint8				  Pad_AM1FieldInteractableActorMiniGame[0x10];								// 0x0450
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActorMiniGame">();
		}
	};
	// 0x0388 (0x07E0 - 0x0458)
#pragma pack(push, 0x1)
	class alignas(0x10) AM1MissionTaskActor : public AM1TaskEventActor
	{
	public:
		uint8                                         Pad_MissionTask[0x108];							 // 0x0458
		class UM1MissionTask*						  MissionTask;                                       // 0x0560(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		int32                                         TaskIndex;                                         // 0x0568(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_WayPoints[0x7C];								 // 0x056C
		TArray<class AM1MissionTaskMoveWayPoint*>     WayPoints;                                         // 0x05E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionTaskActor[0x1E8];				     // 0x05F8
	};
#pragma pack(pop)

	// 0x0040 (0x04B0 - 0x0470)
#pragma pack(push, 0x1)
	class alignas(0x10) UMeshComponent : public UPrimitiveComponent
	{
	public:
		uint8 Pad_UMeshComponent_Class[0x40]; // 0x0470
	};
#pragma pack(pop)

	// 0x02E0 (0x0790 - 0x04B0)   //watch
	class USkinnedMeshComponent : public UMeshComponent
	{
	public:
		uint8 Pad_BoneArray[0x68]; // 0x04B0
		TArray<FTransform> BoneArray; // 0x0518(0x0010)
		uint8 Pad_USkinnedMeshComponent_Class[0x268]; // 0x528
	public:
		class FName GetBoneName(int32 BoneIndex) const;
	};
	static_assert(offsetof(USkinnedMeshComponent, BoneArray) == 0x0518, "Bad alignment");

	// 0x0760 (0x0C60 - 0x0500)
	class AM1Character : public ACharacter
	{
	public:
		uint8 Pad_InfoWidget[0x340]; // 0x500
		class UM1CharacterInfoWidgetComponent* InfoWidgetComponent; // 0x0840(0x0008) Need this
		uint8 Pad_StatComponent[0x18]; // 0x0848
		class UM1StatComponent* StatComponent;                                     // 0x0860(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8 Pad_CharacterAttribute[0x20]; // 0x0868
		class UM1CharacterAttribute* CharacterAttribute;// 0x0888(0x0008)
		uint8 Pad_CharacterId[0x210]; // 0x0890
		struct FM1TemplateId CharacterId; // 0x0AA0(0x0004) Need this
		uint8 Pad_AM1CharClass[0x1BC]; // 0x0AA4

	public:
		bool IsDead() const;
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Character">();
		}
	};
	static_assert(offsetof(AM1Character, InfoWidgetComponent) == 0x0840, "Bad alignment");
	static_assert(offsetof(AM1Character, StatComponent) == 0x0860, "Bad alignment");
	static_assert(offsetof(AM1Character, CharacterAttribute) == 0x0888, "Bad alignment");
	static_assert(offsetof(AM1Character, CharacterId) == 0xAA0, "Bad alignment");

	// 0x00A0 (0x0680 - 0x05E0)
	class AM1DroppedItem : public AM1DropContainer
	{
	public:
		uint8                                         Pad_DropItemInfo[0x40]; // 0x05E0
		struct FM1DropItemInfo                        DropItemInfo; // 0x0620(0x0030)
		uint8                                         Pad_ObtainRequested[0x20]; // 0x0650
		bool                                          bObtainRequestedOnClient; // 0x0670(0x0001)
		uint8                                         Pad_AM1DroppedItem_Class[0xF]; // 0x0671

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1DroppedItem">();
		}
	};
	
	// 0x0000 (0x0680 - 0x0680)
	class ABP_DroppedItemBase_C : public AM1DroppedItem
	{
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoEnhancedDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoEnhancedDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoGeneralDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoGeneralDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoHighpowerDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoHighpowerDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoImpactDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoImpactDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_BuffOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_BuffOrbDroppedItem_C">();
		}
	};
	// 0x0020 (0x06A0 - 0x0680)
	class ABP_EmberDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EmberDroppedItem_C[0x20];
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EmberDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_EquipTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_EquipTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier02DroppedItem_C">();
		}
	};
	// 0x0010 (0x0690 - 0x0680)
	class ABP_EquipTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EquipTier03DroppedItem_C[0x10];
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_GoldDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_GoldDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_HealthOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_HealthOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_KuiperShardDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_KuiperShardDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ManaOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ManaOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier04DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier04DroppedItem_C">();
		}
	};
	
	// 0x0030 (0x0750 - 0x0720)
	class UM1UIActorWidget : public UM1UIWidget
	{
	public:
		uint8 Pad_UM1UIActorWidget_Class[0x30];
	};
	
	// 0x0028 (0x0768 - 0x0740)
	class AM1MissionTargetInteraction : public AM1MissionTargetActor
	{
	public:
		uint8                                         Pad_AM1MissionTargetInteraction_Class[0x28];                                      // 0x0740
	};

	// 0x00C0 (0x0810 - 0x0750)
	class UM1UICharacterInfoBase : public UM1UIActorWidget
	{
	public:
		uint8 Pad_TB_Name[0x8]; // 0x0750
		class UM1TextBlock* TB_Name; // 0x0758(0x0008)
		uint8 Pad_UM1UICharacterInfoBase_Class[0xB0]; // 0x0760

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1UICharacterInfoBase">();
		}
	};

	// 0x0188 (0x0910 - 0x0788)
	class AM1PlayerController : public APlayerController
	{
	public:
		uint8 Pad_ActorManager[0x78]; // 0x788
		class UM1ActorManagerSubsystem* ActorManager_Subsystem; // 0x0800(0x0008)
		uint8 Pad_PrivateOnlineServComp[0x10]; // 0x0808
		class UM1PrivateOnlineServiceComponent* PrivateOnlineServiceComponent; // 0x0818(0x0008)
		uint8 Pad_AM1PlayerController_Class[0xF0]; // 0x820

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerController">();
		}
	};

	// 0x0690 (0x0E20 - 0x0790)
	class USkeletalMeshComponent : public USkinnedMeshComponent
	{
		uint8 Pad_USkeletalMeshComponent_Class[0x690]; // 0x790
	};

	// 0x0060 (0x0840 - 0x07E0)
	class AM1MissionTaskActorDestructionVulgusPost : public AM1MissionTaskActor
	{
	public:
		uint8                                         Pad_MissionTargets[0x10];										 // 0x07E0
		TArray<class AM1MissionTargetInteraction*>    MissionTargets;											     // 0x07F0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionTaskActorDestructionVulgusPost_Class[0x40];      // 0x0800
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskActorDestructionVulgusPost">();
		}
	};
	static_assert(offsetof(AM1MissionTaskActorDestructionVulgusPost, MissionTargets) == 0x07F0, "Bad alignment");

	// 0x04A8 (0x0DB8 - 0x0910)
	class AM1PlayerControllerInGame : public AM1PlayerController
	{
	public:
		uint8 Pad_AM1PlayerControllerInGame_Class[0x4A8];// 0x0B20
	public:
		void ServerRequestFieldObjectDropItems(class AM1FieldInteractableActor* InActor);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerControllerInGame">();
		}
	};
	// 0x0220 (0x0E80 - 0x0C60)
#pragma pack(push, 0x1)
	class alignas(0x10) AM1Monster : public AM1Character
	{
	public:
		uint8 Pad_AM1Monster_Class[0x220]; // 0x0C60
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Monster">();
		}
	};
#pragma pack(pop)
	// 0x0770 (0x13D0 - 0x0C60)
	class AM1Player : public AM1Character
	{
	public:

		uint8 Pad_TeleportHandler[0x2B0]; // 0x0C60
		class UM1TeleportHandlerComponent* TeleportHandler;  // 0x0F10(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8 Pad_WeaponSlotControl[0x10]; // 0x0F18
		class UM1WeaponSlotControlComponent* WeaponSlotControl;                                 // 0x0F28(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8 Pad_PlayerName[0x88]; // 0x0F30
		class FString PlayerName; // 0x0FB8(0x0010) Need this
		uint8 Pad_AM1PlayerClass[0x408]; // 0x0FC8

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Player">();
		}
	};

	// 0x0001 (0x0001 - 0x0000)
	struct M1Character_IsDead final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantize final : public FVector
	{
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantizeNormal final : public FVector
	{
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FActorInstanceHandle final
	{
	public:
		TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x009C (0x009C - 0x0000)
	struct FHitResult final
	{
	public:
		int32                                         FaceIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Time;                                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Distance;                                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    Location;                                          // 0x000C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    ImpactPoint;                                       // 0x0018(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal              Normal;                                            // 0x0024(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal              ImpactNormal;                                      // 0x0030(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    TraceStart;                                        // 0x003C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    TraceEnd;                                          // 0x0048(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         PenetrationDepth;                                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         MyItem;                                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Item;                                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         ElementIndex;                                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bBlockingHit : 1;                                  // 0x0061(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bStartPenetrating : 1;                             // 0x0061(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		TWeakObjectPtr<class UPhysicalMaterial>       PhysMaterial;                                      // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorInstanceHandle                   HitObjectHandle;                                   // 0x006C(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TWeakObjectPtr<class UPrimitiveComponent>     Component;                                         // 0x0084(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   BoneName;                                          // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   MyBoneName;                                        // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x00B0 (0x00B0 - 0x0000)
	struct Actor_K2_SetActorLocation final
	{
	public:
		struct FVector                                NewLocation;                                       // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bSweep;                                            // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHitResult                             SweepHitResult;                                    // 0x0010(0x009C)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                          bTeleport;                                         // 0x00AC(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x00AD(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0010 (0x0010 - 0x0000)
	struct Actor_GetDistanceTo final
	{
	public:
		const class AActor*							  OtherActor;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x000C (0x000C - 0x0000)
	struct Actor_K2_GetActorLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct Controller_SetControlRotation final
	{
	public:
		struct FRotator                               NewRotation;                                       // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct Controller_LineOfSightTo final
	{
	public:
		const class AActor*							  Other;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                ViewPoint;                                         // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bAlternateChecks;                                  // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x0015(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerCameraManager_GetCameraLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerCameraManager_GetCameraRotation final
	{
	public:
		struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct PlayerController_GetMousePosition final
	{
	public:
		float                                         LocationX;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocationY;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0030 (0x0030 - 0x0000)
	struct SceneComponent_K2_GetComponentToWorld final
	{
	public:
		struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct SkinnedMeshComponent_GetBoneName final
	{
	public:
		int32                                         BoneIndex;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct GameplayStatics_GetPlayerController final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         PlayerIndex;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController*					  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0020 (0x0020 - 0x0000)
	struct GameplayStatics_ProjectWorldToScreen final
	{
	public:
		class APlayerController*					  Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                WorldPosition;                                     // 0x0008(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPosition;                                    // 0x0014(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bPlayerViewportRelative;                           // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x001D(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// 0x0010 (0x0010 - 0x0000)
	struct GameplayStatics_GetWorldDeltaSeconds final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0070 (0x0070 - 0x0000)
	struct KismetMathLibrary_Conv_MatrixToTransform final
	{
	public:
		struct FMatrix                                InMatrix;                                          // 0x0000(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                             ReturnValue;                                       // 0x0040(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0070 (0x0070 - 0x0000)
	struct KismetMathLibrary_Conv_TransformToMatrix final
	{
	public:
		struct FTransform                             Transform;                                         // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                ReturnValue;                                       // 0x0030(0x0040)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0024 (0x0024 - 0x0000)
	struct KismetMathLibrary_FindLookAtRotation final
	{
	public:
		struct FVector                                Start;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                Target;                                            // 0x000C(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                               ReturnValue;                                       // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x00C0 (0x00C0 - 0x0000)
	struct KismetMathLibrary_Multiply_MatrixMatrix final
	{
	public:
		struct FMatrix                                A;                                                 // 0x0000(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                B;                                                 // 0x0040(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                ReturnValue;                                       // 0x0080(0x0040)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x002C (0x002C - 0x0000)
	struct KismetMathLibrary_RInterpTo final
	{
	public:
		struct FRotator                               Current;                                           // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                               Target;                                            // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                         DeltaTime;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         InterpSpeed;                                       // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                               ReturnValue;                                       // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct KismetMathLibrary_Distance2D final
	{
	public:
		struct FVector2D                              v1;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              v2;                                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0024 (0x0024 - 0x0000)
	struct Canvas_K2_DrawLine final
	{
	public:
		struct FVector2D                              ScreenPositionA;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPositionB;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Thickness;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           RenderColor;                                       // 0x0014(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0068 (0x0068 - 0x0000)
	struct Canvas_K2_DrawText final
	{
	public:
		class UFont*								  RenderFont;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 RenderText;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPosition;                                    // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              Scale;                                             // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           RenderColor;                                       // 0x0028(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Kerning;                                           // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           ShadowColor;                                       // 0x003C(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ShadowOffset;                                      // 0x004C(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bCentreX;                                          // 0x0054(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bCentreY;                                          // 0x0055(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bOutlined;                                         // 0x0056(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_57[0x1];                                       // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		struct FLinearColor                           OutlineColor;                                      // 0x0058(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0001 (0x0001 - 0x0000)
	struct M1DropContainer_IsObtained final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0004 (0x0004 - 0x0000)
	struct M1PrivateOnlineServicePreset_ServerRequestApplyPreset final
	{
	public:
		int32                                         InPresetIndex;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1MissionTaskServiceInteraction_ServerRequestMissionTargetBeginInteraction final
	{
	public:
		class AM1MissionTargetInteraction*			  InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AM1PlayerControllerInGame*			  InAcceptor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0004 (0x0004 - 0x0000)
	struct M1MissionControlComponent_ServerStartMissionByTemplateID final
	{
	public:
		struct FM1TemplateId                          InTemplateId;                                      // 0x0000(0x0004)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1MissionControlComponent_ServerRunTaskActor final
	{
	public:
		class AM1MissionTaskActor*					  InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0001 (0x0001 - 0x0000)
	struct M1MissionControlComponent_ServerLeaveMission final
	{
	public:
		EM1MissionEndReason                           InReason;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1MiniGameActor_ServerDropItems final
	{
	public:
		class AController*							  InInstigator;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct M1MiniGameActor_ServerOnMiniGameEnded final
	{
	public:
		struct FM1MiniGameResult                      InResult;                                          // 0x0000(0x000C)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1StatComponent_GetStatValue final
	{
	public:
		EM1StatType                                   InStatType;                                        // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x000C (0x000C - 0x0000)
	struct Actor_K2_GetActorRotation final
	{
	public:
		struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0018 (0x0018 - 0x0000)
	struct M1TeleportHandlerComponent_ServerMoveToTeleportToLocation final
	{
	public:
		struct FVector                                InLocation;                                        // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                               InRotation;                                        // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1PlayerControllerInGame_ServerRequestFieldObjectDropItems final
	{
	public:
		class AM1FieldInteractableActor* InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0008 (0x0008 - 0x0000)
	struct M1PrivateOnlineServiceResearch_ServerRequestStartResearch final
	{
	public:
		struct FM1TemplateId                          InResearchTemplateId;                              // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         InRepeatCount;                                     // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
}