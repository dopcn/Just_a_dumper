//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BSDeviceUdIdEntity, BSSizeEntity, BSVersionEntity, NSString, PBAppendableArray, PBArray;

@interface BSDeviceEntity : PBGeneratedMessage
{
    unsigned int hasIsJailbreaked_:1;
    unsigned int hasScreenDensity_:1;
    unsigned int hasVendor_:1;
    unsigned int hasModel_:1;
    unsigned int hasOsVersion_:1;
    unsigned int hasUdid_:1;
    unsigned int hasScreenSize_:1;
    unsigned int hasType_:1;
    unsigned int hasOs_:1;
    unsigned int hasOrientation_:1;
    unsigned int isJailbreaked_:1;
    float screenDensity;
    NSString *vendor;
    NSString *model;
    BSVersionEntity *osVersion;
    BSDeviceUdIdEntity *udid;
    BSSizeEntity *screenSize;
    int type;
    int os;
    int orientation;
    PBAppendableArray *sensorsArray;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) PBAppendableArray *sensorsArray; // @synthesize sensorsArray;
@property(retain) BSSizeEntity *screenSize; // @synthesize screenSize;
@property float screenDensity; // @synthesize screenDensity;
@property int orientation; // @synthesize orientation;
@property(retain) BSDeviceUdIdEntity *udid; // @synthesize udid;
@property(retain) NSString *model; // @synthesize model;
@property(retain) NSString *vendor; // @synthesize vendor;
@property(retain) BSVersionEntity *osVersion; // @synthesize osVersion;
@property int os; // @synthesize os;
@property int type; // @synthesize type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (int)sensorsAtIndex:(unsigned long long)arg1;
@property(readonly) PBArray *sensors; // @dynamic sensors;
- (id)defaultInstance;
- (id)init;
@property _Bool isJailbreaked;
- (void)setHasIsJailbreaked:(_Bool)arg1;
- (_Bool)hasIsJailbreaked;
- (void)setHasScreenSize:(_Bool)arg1;
- (_Bool)hasScreenSize;
- (void)setHasScreenDensity:(_Bool)arg1;
- (_Bool)hasScreenDensity;
- (void)setHasOrientation:(_Bool)arg1;
- (_Bool)hasOrientation;
- (void)setHasUdid:(_Bool)arg1;
- (_Bool)hasUdid;
- (void)setHasModel:(_Bool)arg1;
- (_Bool)hasModel;
- (void)setHasVendor:(_Bool)arg1;
- (_Bool)hasVendor;
- (void)setHasOsVersion:(_Bool)arg1;
- (_Bool)hasOsVersion;
- (void)setHasOs:(_Bool)arg1;
- (_Bool)hasOs;
- (void)setHasType:(_Bool)arg1;
- (_Bool)hasType;

@end

