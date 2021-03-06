//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TBCServerAPI;

@interface TBCDynamic : NSObject
{
    NSDictionary *_dynamicSync;
    NSMutableArray *_mForbiddenModules;
    NSMutableArray *_mHotReleases;
    NSMutableDictionary *_mHotEntries;
    NSArray *_mHotDirects;
    TBCServerAPI *_rnSyncHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBCServerAPI *rnSyncHandler; // @synthesize rnSyncHandler=_rnSyncHandler;
@property(retain, nonatomic) NSArray *mHotDirects; // @synthesize mHotDirects=_mHotDirects;
@property(retain, nonatomic) NSMutableDictionary *mHotEntries; // @synthesize mHotEntries=_mHotEntries;
@property(retain, nonatomic) NSMutableArray *mHotReleases; // @synthesize mHotReleases=_mHotReleases;
@property(retain, nonatomic) NSMutableArray *mForbiddenModules; // @synthesize mForbiddenModules=_mForbiddenModules;
@property(retain, nonatomic) NSDictionary *dynamicSync; // @synthesize dynamicSync=_dynamicSync;
- (void).cxx_destruct;
- (void)installRule:(id)arg1;
- (void)installNewCommand;
- (void)intersectCommand:(id)arg1 forDynamicItem:(id)arg2;
- (void)syncSettingReady:(id)arg1;
- (id)dataOfHost:(id)arg1 plugin:(id)arg2;
- (id)dataOfHost:(id)arg1;
- (_Bool)conditionHost:(id)arg1 ofPlugin:(id)arg2;
- (void)addView:(id)arg1 toView:(id)arg2 ofInstance:(id)arg3;
- (void)sendMsg:(long long)arg1 dataConfig:(id)arg2 extraData:(id)arg3;
- (void)installHotEntry:(id)arg1;
- (void)installHotRelease:(id)arg1;
- (id)loadView:(id)arg1 inHtmlURL:(id)arg2 withProps:(id)arg3;
- (id)hotDirectOfHost:(id)arg1;
- (id)hotDirectOfHost:(id)arg1 andPlugin:(id)arg2;
@property(readonly, nonatomic) NSDictionary *hotEntries;
@property(readonly, nonatomic) NSArray *hotReleases;
@property(readonly, nonatomic) NSArray *forbiddenModules;
- (void)broadcast:(id)arg1;
- (void)update;
- (void)dealloc;
- (id)init;

@end

