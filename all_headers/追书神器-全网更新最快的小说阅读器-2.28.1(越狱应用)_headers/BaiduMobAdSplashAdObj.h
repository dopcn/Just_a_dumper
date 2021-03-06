//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaiduMobAdResourceDownloaderDelegate-Protocol.h"

@class BaiduMobAdResourceDownloader, NSArray, NSDictionary, NSString;
@protocol BaiduMobAdSplashAdObjDelegate;

@interface BaiduMobAdSplashAdObj : NSObject <BaiduMobAdResourceDownloaderDelegate>
{
    BaiduMobAdResourceDownloader *_downloader;
    NSDictionary *_adData;
    _Bool _flagIsUnzipping;
    NSString *_indexPath;
    _Bool _resourseCached;
    int _actionType;
    int _anti_tag;
    NSString *_clickURL;
    NSString *_chargeLogURL;
    NSString *_resourseCachePath;
    NSString *_showLogURL;
    NSString *_splashId;
    NSString *_resourseURL;
    NSString *_adType;
    id <BaiduMobAdSplashAdObjDelegate> _delegate;
    NSString *_winLog;
    NSString *_thirdClick;
    NSString *_thirdShow;
    NSString *_publishId;
    NSString *_htmlString;
    NSArray *_nwinLog;
    NSString *_tid;
}

+ (_Bool)removeSplashFromLocalCache;
+ (id)getSplashFromLocalCache;
+ (_Bool)saveSplashAdToLocalCache:(id)arg1;
+ (_Bool)removeCachedSplashAd;
+ (id)getCachedSplashAd;
+ (id)cacheFile;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSArray *nwinLog; // @synthesize nwinLog=_nwinLog;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(copy, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(copy, nonatomic) NSString *thirdShow; // @synthesize thirdShow=_thirdShow;
@property(copy, nonatomic) NSString *thirdClick; // @synthesize thirdClick=_thirdClick;
@property(copy, nonatomic) NSString *winLog; // @synthesize winLog=_winLog;
@property(nonatomic) int anti_tag; // @synthesize anti_tag=_anti_tag;
@property(retain, nonatomic) NSString *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) id <BaiduMobAdSplashAdObjDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(nonatomic) _Bool resourseCached; // @synthesize resourseCached=_resourseCached;
@property(retain, nonatomic) NSString *resoureURL; // @synthesize resoureURL=_resourseURL;
@property(retain, nonatomic) NSString *splashId; // @synthesize splashId=_splashId;
@property(retain, nonatomic) NSString *showLogURL; // @synthesize showLogURL=_showLogURL;
@property(retain, nonatomic) NSString *resourseCachePath; // @synthesize resourseCachePath=_resourseCachePath;
@property(retain, nonatomic) NSString *chargeLogURL; // @synthesize chargeLogURL=_chargeLogURL;
@property(retain, nonatomic) NSString *clickURL; // @synthesize clickURL=_clickURL;
@property(retain, nonatomic) NSDictionary *adData; // @synthesize adData=_adData;
- (void)dealloc;
- (void)resourceLoadFailed;
- (void)resourceDidLoad:(id)arg1;
- (void)requestResource;
- (void)splashSuccess;
- (void)buildThirdPartyLog:(id)arg1;
- (id)initWithDictonary:(id)arg1;
- (_Bool)canShow;

@end

