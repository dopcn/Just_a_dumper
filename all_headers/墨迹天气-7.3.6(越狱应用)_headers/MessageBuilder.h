//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MessageBuilder : NSObject
{
    int _version;
    int _networkType;
    int _mCat;
    int _geoId;
    NSString *_deviceID;
    NSString *_triggerStr;
    NSMutableDictionary *_props;
    long long _deltaTime;
    NSString *_appVersion;
    NSNumber *_sdkVersion;
    NSString *_idfa;
    NSString *_userGroups;
}

+ (id)getMessageAttributeCanonicalName:(int)arg1;
@property(retain, nonatomic) NSString *userGroups; // @synthesize userGroups=_userGroups;
@property(retain, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(retain, nonatomic) NSNumber *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) int geoId; // @synthesize geoId=_geoId;
@property(nonatomic) long long deltaTime; // @synthesize deltaTime=_deltaTime;
@property(nonatomic) int mCat; // @synthesize mCat=_mCat;
@property(retain, nonatomic) NSMutableDictionary *props; // @synthesize props=_props;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *triggerStr; // @synthesize triggerStr=_triggerStr;
@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)addPropertyWithProperty:(int)arg1 value:(id)arg2;
- (void)setProperties:(id)arg1;
- (id)build;
- (id)initWithDeviceID:(id)arg1 version:(int)arg2 typeString:(id)arg3 networkType:(int)arg4 messageCategory:(int)arg5 deltaTime:(long long)arg6 geoId:(int)arg7 appVersion:(id)arg8 sdkVersion:(id)arg9 idfa:(id)arg10 userGroups:(id)arg11;
- (id)initWithDeviceID:(id)arg1 version:(int)arg2 triggerType:(int)arg3 networkType:(int)arg4 messageCategory:(int)arg5 deltaTime:(long long)arg6 geoId:(int)arg7 appVersion:(id)arg8 sdkVersion:(id)arg9 idfa:(id)arg10 userGroups:(id)arg11;

@end

