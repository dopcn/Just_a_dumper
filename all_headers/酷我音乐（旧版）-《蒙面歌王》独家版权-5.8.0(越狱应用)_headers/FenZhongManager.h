//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FenZhongManager : NSObject
{
    int _srcPersent[16];
    int _recomPersent[16];
    _Bool _bHasLoadTagPersent;
    _Bool _bHasSendLog;
    _Bool _isAnalyzing;
    int _testUserGroup;
    NSMutableArray *_tagItems;
    NSString *_configDicFile;
    NSMutableDictionary *_configDic;
    NSString *_songTagDicFile;
    NSMutableDictionary *_songTagDic;
}

+ (id)Instance;
+ (int)FenZhongUserGroup;
+ (_Bool)isEnableFenZhong;
@property(nonatomic) _Bool isAnalyzing; // @synthesize isAnalyzing=_isAnalyzing;
@property(nonatomic) _Bool bHasSendLog; // @synthesize bHasSendLog=_bHasSendLog;
@property(nonatomic) _Bool bHasLoadTagPersent; // @synthesize bHasLoadTagPersent=_bHasLoadTagPersent;
@property(nonatomic) int testUserGroup; // @synthesize testUserGroup=_testUserGroup;
@property(retain, nonatomic) NSMutableDictionary *songTagDic; // @synthesize songTagDic=_songTagDic;
@property(retain, nonatomic) NSString *songTagDicFile; // @synthesize songTagDicFile=_songTagDicFile;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
@property(retain, nonatomic) NSString *configDicFile; // @synthesize configDicFile=_configDicFile;
@property(retain, nonatomic) NSMutableArray *tagItems; // @synthesize tagItems=_tagItems;
- (void)saveSongTagWithMediaItems:(id)arg1;
- (void)saveSongTag:(id)arg1 withRid:(unsigned long long)arg2;
- (id)getTagWithSongRid:(unsigned long long)arg1;
- (void)onSyncEnd:(id)arg1;
- (void)sendFenZhongUserGroupLog;
- (_Bool)isYunyingTestGroupA;
- (int)fenZhongTagWithArtist:(id)arg1;
- (int)fenZhongRecomPersentWithTag:(int)arg1;
- (int *)fenZhongRecomPersent;
- (_Bool)loadFenZhongTagTables;
- (void)checkAndReloadRecommondPage;
- (void)checkAndAnalyzeUserFenZhongTag;
- (_Bool)loadUserFenZhongTag;
- (void)analyzeTestUserGroupWithTagNone:(int)arg1 recentCount:(int)arg2;
- (void)loadTestUserGroup;
- (void)loadTagPersent;
- (id)parseContent:(id)arg1;
- (id)fenZhongStringWithTag:(int)arg1;
- (int)fenZhongTagWithString:(id)arg1;
- (void)syncToConfigPListFile;
- (void)setIntValue:(int)arg1 OfConfigDicForKey:(id)arg2;
- (int)intValueOfConfigDicForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

