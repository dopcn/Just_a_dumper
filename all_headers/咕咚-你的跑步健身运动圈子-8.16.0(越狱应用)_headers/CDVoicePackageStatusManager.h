//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CDVoicePackageStatusManager : NSObject
{
    _Bool _hasNewPackage;
    _Bool _voiceSettingAccessed;
    _Bool _sportSettingAccessed;
    _Bool _personSettingAccessed;
    _Bool _rateSettingAccessed;
    NSMutableDictionary *_statuses;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *statuses; // @synthesize statuses=_statuses;
- (void).cxx_destruct;
@property(nonatomic) _Bool personSettingAccessed; // @synthesize personSettingAccessed=_personSettingAccessed;
@property(nonatomic) _Bool voiceSettingAccessed; // @synthesize voiceSettingAccessed=_voiceSettingAccessed;
@property(nonatomic) _Bool rateSettingAccessed; // @synthesize rateSettingAccessed=_rateSettingAccessed;
@property(nonatomic) _Bool sportSettingAccessed; // @synthesize sportSettingAccessed=_sportSettingAccessed;
@property(nonatomic) _Bool hasNewPackage; // @synthesize hasNewPackage=_hasNewPackage;
- (void)updateProgress:(double)arg1 forResourceID:(id)arg2;
- (void)deleteStatus:(unsigned long long)arg1 forResourceID:(id)arg2;
- (void)addStatus:(unsigned long long)arg1 forResourceID:(id)arg2;
- (id)init;

@end

