//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALMBaseModel.h"

@class NSMutableDictionary, NSString;

@interface YKFABTestPlanetCacheModel : ALMBaseModel
{
    NSString *_bucket;
    NSMutableDictionary *_testItemDic;
}

+ (id)createABTestPlanetCacheModel;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *testItemDic; // @synthesize testItemDic=_testItemDic;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (void)logWithLevel:(long long)arg1 content:(id)arg2;
- (id)bucketForModule:(id)arg1 onComponent:(id)arg2;
- (void)setBucket:(id)arg1 forModule:(id)arg2 onComponent:(id)arg3;
- (void)abTestConfigDidUpdated:(id)arg1;
- (void)registerDefaultModuleAndComponet;
- (id)init;
- (void)dealloc;

@end

