//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXManager.h"

@class YXFeedAdverModel;

@interface YXFeedAdverServiceManager : YXManager
{
    YXFeedAdverModel *_adverModel;
}

@property(retain, nonatomic) YXFeedAdverModel *adverModel; // @synthesize adverModel=_adverModel;
- (void).cxx_destruct;
- (id)getFeedAdverModel;
- (id)launchLogoConfigUrl;
- (void)saveFeedAdId:(long long)arg1;
- (long long)getFeedAdId;
- (void)saveFeedAdShowTime;
- (id)getFeedAdShowTime;
- (void)saveFeedAdIsShow:(_Bool)arg1;
- (_Bool)getFeedShowState;
- (void)checkDate;
- (id)getDESDecode:(id)arg1;
- (id)getDESEncode:(id)arg1;
- (void)downloadconfigFile:(id)arg1 param:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)downLoadAdverImage:(id)arg1;
- (void)getFeedAdverRequest:(CDUnknownBlockType)arg1;

@end

