// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos.Data.Raid.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

 #import "PogoprotosEnums.pbobjc.h"
 #import "PogoprotosData.pbobjc.h"
 #import "PogoprotosDataCapture.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class CaptureProbability;
@class PokemonData;
@class Raid;
GPB_ENUM_FWD_DECLARE(PokemonId);
GPB_ENUM_FWD_DECLARE(RaidLevel);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - PogoprotosDataRaidRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface PogoprotosDataRaidRoot : GPBRootObject
@end

#pragma mark - EventInfo

typedef GPB_ENUM(EventInfo_FieldNumber) {
  EventInfo_FieldNumber_ImageURL = 1,
  EventInfo_FieldNumber_IconURL = 2,
  EventInfo_FieldNumber_NameKey = 3,
};

@interface EventInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *imageURL;

@property(nonatomic, readwrite, copy, null_resettable) NSString *iconURL;

@property(nonatomic, readwrite, copy, null_resettable) NSString *nameKey;

@end

#pragma mark - Participation

typedef GPB_ENUM(Participation_FieldNumber) {
  Participation_FieldNumber_IndividualDamagePokeballs = 1,
  Participation_FieldNumber_TeamDamagePokeballs = 2,
  Participation_FieldNumber_GymOwnershipPokeballs = 3,
  Participation_FieldNumber_BasePokeballs = 4,
  Participation_FieldNumber_BluePercentage = 5,
  Participation_FieldNumber_RedPercentage = 6,
  Participation_FieldNumber_YellowPercentage = 7,
  Participation_FieldNumber_BonusItemMultiplier = 8,
};

@interface Participation : GPBMessage

@property(nonatomic, readwrite) int32_t individualDamagePokeballs;

@property(nonatomic, readwrite) int32_t teamDamagePokeballs;

@property(nonatomic, readwrite) int32_t gymOwnershipPokeballs;

@property(nonatomic, readwrite) int32_t basePokeballs;

@property(nonatomic, readwrite) double bluePercentage;

@property(nonatomic, readwrite) double redPercentage;

@property(nonatomic, readwrite) double yellowPercentage;

@property(nonatomic, readwrite) float bonusItemMultiplier;

@end

#pragma mark - PlayerRaidInfo

typedef GPB_ENUM(PlayerRaidInfo_FieldNumber) {
  PlayerRaidInfo_FieldNumber_TotalCompletedRaids = 3,
  PlayerRaidInfo_FieldNumber_TotalCompletedLegendaryRaids = 4,
  PlayerRaidInfo_FieldNumber_RaidsArray = 5,
};

@interface PlayerRaidInfo : GPBMessage

@property(nonatomic, readwrite) int32_t totalCompletedRaids;

@property(nonatomic, readwrite) int32_t totalCompletedLegendaryRaids;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Raid*> *raidsArray;
/** The number of items in @c raidsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger raidsArray_Count;

@end

#pragma mark - Raid

typedef GPB_ENUM(Raid_FieldNumber) {
  Raid_FieldNumber_RaidSeed = 1,
  Raid_FieldNumber_StartedMs = 2,
  Raid_FieldNumber_CompletedMs = 3,
  Raid_FieldNumber_EncounterPokemonId = 4,
  Raid_FieldNumber_CompletedBattle = 5,
  Raid_FieldNumber_ReceivedRewards = 6,
  Raid_FieldNumber_FinishedEncounter = 7,
};

@interface Raid : GPBMessage

@property(nonatomic, readwrite) int64_t raidSeed;

@property(nonatomic, readwrite) int64_t startedMs;

@property(nonatomic, readwrite) int64_t completedMs;

@property(nonatomic, readwrite) enum PokemonId encounterPokemonId;

@property(nonatomic, readwrite) BOOL completedBattle;

@property(nonatomic, readwrite) BOOL receivedRewards;

@property(nonatomic, readwrite) BOOL finishedEncounter;

@end

/**
 * Fetches the raw value of a @c Raid's @c encounterPokemonId property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t Raid_EncounterPokemonId_RawValue(Raid *message);
/**
 * Sets the raw value of an @c Raid's @c encounterPokemonId property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRaid_EncounterPokemonId_RawValue(Raid *message, int32_t value);

#pragma mark - RaidEncounter

typedef GPB_ENUM(RaidEncounter_FieldNumber) {
  RaidEncounter_FieldNumber_Pokemon = 1,
  RaidEncounter_FieldNumber_EncounterId = 2,
  RaidEncounter_FieldNumber_SpawnpointId = 3,
  RaidEncounter_FieldNumber_CaptureProbabilities = 4,
  RaidEncounter_FieldNumber_ThrowsRemaining = 5,
  RaidEncounter_FieldNumber_RaidLevel = 6,
  RaidEncounter_FieldNumber_FortId = 7,
};

@interface RaidEncounter : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PokemonData *pokemon;
/** Test to see if @c pokemon has been set. */
@property(nonatomic, readwrite) BOOL hasPokemon;

@property(nonatomic, readwrite) int64_t encounterId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *spawnpointId;

@property(nonatomic, readwrite, strong, null_resettable) CaptureProbability *captureProbabilities;
/** Test to see if @c captureProbabilities has been set. */
@property(nonatomic, readwrite) BOOL hasCaptureProbabilities;

@property(nonatomic, readwrite) int32_t throwsRemaining;

@property(nonatomic, readwrite) enum RaidLevel raidLevel;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fortId;

@end

/**
 * Fetches the raw value of a @c RaidEncounter's @c raidLevel property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RaidEncounter_RaidLevel_RawValue(RaidEncounter *message);
/**
 * Sets the raw value of an @c RaidEncounter's @c raidLevel property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRaidEncounter_RaidLevel_RawValue(RaidEncounter *message, int32_t value);

#pragma mark - RaidInfo

typedef GPB_ENUM(RaidInfo_FieldNumber) {
  RaidInfo_FieldNumber_RaidSeed = 1,
  RaidInfo_FieldNumber_RaidSpawnMs = 2,
  RaidInfo_FieldNumber_RaidBattleMs = 3,
  RaidInfo_FieldNumber_RaidEndMs = 4,
  RaidInfo_FieldNumber_RaidPokemon = 5,
  RaidInfo_FieldNumber_RaidLevel = 6,
  RaidInfo_FieldNumber_Complete = 7,
  RaidInfo_FieldNumber_IsExclusive = 8,
  RaidInfo_FieldNumber_IsRaidHidden = 9,
};

@interface RaidInfo : GPBMessage

@property(nonatomic, readwrite) int64_t raidSeed;

@property(nonatomic, readwrite) int64_t raidSpawnMs;

@property(nonatomic, readwrite) int64_t raidBattleMs;

@property(nonatomic, readwrite) int64_t raidEndMs;

@property(nonatomic, readwrite, strong, null_resettable) PokemonData *raidPokemon;
/** Test to see if @c raidPokemon has been set. */
@property(nonatomic, readwrite) BOOL hasRaidPokemon;

@property(nonatomic, readwrite) enum RaidLevel raidLevel;

@property(nonatomic, readwrite) BOOL complete;

@property(nonatomic, readwrite) BOOL isExclusive;

@property(nonatomic, readwrite) BOOL isRaidHidden;

@end

/**
 * Fetches the raw value of a @c RaidInfo's @c raidLevel property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RaidInfo_RaidLevel_RawValue(RaidInfo *message);
/**
 * Sets the raw value of an @c RaidInfo's @c raidLevel property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRaidInfo_RaidLevel_RawValue(RaidInfo *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
