//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduSplashHelprDelegate-Protocol.h"
#import "FNativeSplashHelprDelegate-Protocol.h"
#import "FotoAdStrategyClassDelegate-Protocol.h"
#import "FullLaunchAdManagerDelegate-Protocol.h"

@class FullLaunchADInfo, FullLaunchAdView, NSString;

@interface FullLaunchAD : NSObject <FullLaunchAdManagerDelegate, BaiduSplashHelprDelegate, FNativeSplashHelprDelegate, FotoAdStrategyClassDelegate>
{
    double thirdTimeStart;
    _Bool needCheckToShowSelfAd;
    _Bool needShowRequestThirdAd;
    FullLaunchADInfo *_fullScreenAdInfo_online;
    FullLaunchADInfo *_fullScreenAdInfo_third;
    FullLaunchADInfo *_fullScreenAdInfo_default;
    FullLaunchAdView *_fullScreenAdView;
}

+ (void)LogNativeEvent:(id)arg1 type:(id)arg2;
+ (_Bool)needMadHouseNative;
+ (_Bool)needLingJiNative;
+ (_Bool)needWanliukeNative;
+ (_Bool)needTTLaunchNative;
+ (_Bool)needApiLaunch;
+ (_Bool)needNativeLaunch;
+ (_Bool)needVideoLaunch;
+ (_Bool)isNumberInRand:(long long)arg1;
+ (id)fullInstance;
@property(retain, nonatomic) FullLaunchAdView *fullScreenAdView; // @synthesize fullScreenAdView=_fullScreenAdView;
@property(retain, nonatomic) FullLaunchADInfo *fullScreenAdInfo_default; // @synthesize fullScreenAdInfo_default=_fullScreenAdInfo_default;
@property(retain, nonatomic) FullLaunchADInfo *fullScreenAdInfo_third; // @synthesize fullScreenAdInfo_third=_fullScreenAdInfo_third;
@property(retain, nonatomic) FullLaunchADInfo *fullScreenAdInfo_online; // @synthesize fullScreenAdInfo_online=_fullScreenAdInfo_online;
- (void)removeOffLaunchADImage;
- (struct CGRect)getRectFromDict:(id)arg1;
- (id)generateOnlineAd;
- (void)loadResult:(_Bool)arg1;
- (void)requestSelfScreenAD;
- (id)getLastThirdAdInfo;
- (void)saveThirdAdInfo:(id)arg1 imageData:(id)arg2;
- (void)loadThirdAdImage:(id)arg1 needShow:(_Bool)arg2;
- (void)onLaunchSuccess:(id)arg1;
- (void)onLaunchFailed;
- (void)onLaunchNeedBaidu;
- (void)checkToShowDdfaultAd;
- (void)requestThirdScreenAD:(_Bool)arg1;
- (void)OnNativeSplashLoaded:(id)arg1;
- (void)OnNativeSplashClicked;
- (void)OnNativeSplashFailed;
- (void)requestNativeScreenAD;
- (void)OnBaiduSplashClose;
- (void)OnBaiduSplashLoaded;
- (void)OnBaiduSplashFailed;
- (void)strongRemoveAdView;
- (void)showAdViewInWindow:(id)arg1;
- (id)getLaunchImage:(id)arg1;
- (id)getOnlineAdLaunchImage:(id)arg1;
- (id)getThirdAdLaunchImage:(id)arg1;
- (id)OnlineLaunchADvalid;
- (_Bool)canShowFullAd;
- (_Bool)getFullScreenAd:(_Bool)arg1;
- (_Bool)requestFullScreenAd:(_Bool)arg1;
- (id)generateDefaultAd;
- (id)getThirdAdImageCachePath:(id)arg1;
- (id)getThirdAdImageName:(id)arg1 time:(double)arg2;
- (id)getImagePath:(id)arg1 folder:(id)arg2;
- (id)getTmpLaunchImagePath:(id)arg1;
- (id)getLaunchImagePath:(id)arg1;
- (id)getFilePath;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

