//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXManager.h"

@class YXMessageEffectAdDetailConfigModel, YXMessageEffectAdHelper;

@interface YXMessageEffectAdConfigManager : YXManager
{
    _Bool _isStatisticShow;
    double _requestTime;
    YXMessageEffectAdHelper *_effectAdHepler;
    YXMessageEffectAdDetailConfigModel *_effectAdConfigModel;
}

@property(retain, nonatomic) YXMessageEffectAdDetailConfigModel *effectAdConfigModel; // @synthesize effectAdConfigModel=_effectAdConfigModel;
@property(retain, nonatomic) YXMessageEffectAdHelper *effectAdHepler; // @synthesize effectAdHepler=_effectAdHepler;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) _Bool isStatisticShow; // @synthesize isStatisticShow=_isStatisticShow;
- (void).cxx_destruct;
- (id)launchLogoConfigUrl;
- (id)getDESDecode:(id)arg1;
- (id)getDESEncode:(id)arg1;
- (void)downloadconfigFile:(id)arg1 param:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)isLoadMessageEffectAd;
- (void)cleanLoadCount;
- (void)updateEffectAdLoadDate;
- (void)startRequestMessageEffectAd;
- (void)loadMessageEffectAdverConfig;

@end

