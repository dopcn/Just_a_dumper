//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QBSplashAdsModel : NSObject
{
    _Bool _needShare;
    _Bool _need_nav;
    _Bool _isResourceDownloaded;
    _Bool _need_login;
    _Bool _isDownloadingResources;
    long long _adId;
    long long _weight;
    NSString *_redirectType;
    long long _delayT;
    double _validEndT;
    double _validStartT;
    NSString *_webInfo;
    NSString *_imgUrl;
    long long _topicInfo;
    long long _interval;
    double _lastShowT;
    NSString *_sub_type;
    long long _weightHelper;
}

@property(nonatomic) _Bool isDownloadingResources; // @synthesize isDownloadingResources=_isDownloadingResources;
@property(nonatomic) _Bool need_login; // @synthesize need_login=_need_login;
@property(nonatomic) long long weightHelper; // @synthesize weightHelper=_weightHelper;
@property(retain, nonatomic) NSString *sub_type; // @synthesize sub_type=_sub_type;
@property(nonatomic) _Bool isResourceDownloaded; // @synthesize isResourceDownloaded=_isResourceDownloaded;
@property(nonatomic) double lastShowT; // @synthesize lastShowT=_lastShowT;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *webInfo; // @synthesize webInfo=_webInfo;
@property(nonatomic) double validStartT; // @synthesize validStartT=_validStartT;
@property(nonatomic) double validEndT; // @synthesize validEndT=_validEndT;
@property(nonatomic) _Bool need_nav; // @synthesize need_nav=_need_nav;
@property(nonatomic) _Bool needShare; // @synthesize needShare=_needShare;
@property(nonatomic) long long delayT; // @synthesize delayT=_delayT;
@property(retain, nonatomic) NSString *redirectType; // @synthesize redirectType=_redirectType;
@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(nonatomic) long long adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)downloadResources;
- (void)onAdAction;
- (id)adImage;
- (void)checkResourceReady;
@property(readonly) _Bool isResourceReady;
- (_Bool)isUseble;
@property(readonly) _Bool isExpired;
@property(readonly) NSString *adIdStr;
- (unsigned long long)subType;
- (id)initWithDict:(id)arg1;
- (void)dealloc;

@end

