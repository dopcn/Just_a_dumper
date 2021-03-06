//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADBannerViewDelegate-Protocol.h"

@class GADSlot, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString, UIViewController;
@protocol GADNativeAdDelegate, GADNativeAdLoadDelegate;

@interface GADNativeAd : NSObject <GADBannerViewDelegate>
{
    _Bool _hasRecordedImpression;
    NSSet *_impressionTrackingURLs;
    _Bool _failedToLoadRequiredAssets;
    id <GADNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    NSString *_adUnitID;
    NSDictionary *_adConfiguration;
    GADSlot *_slot;
    id <GADNativeAdLoadDelegate> _loadingDelegate;
    NSSet *_thirdPartyClickTrackingURLs;
    NSString *_googleClickTrackingURLString;
    NSArray *_clickActions;
    NSMutableSet *_readAssets;
    NSMutableSet *_completedAssets;
    NSMutableSet *_requestedAssets;
    NSMutableArray *_adAssetActions;
}

+ (id)supportHTMLURL;
+ (Class)classFromAdConfigurationDictionary:(id)arg1;
+ (id)firstAdObjectInAdConfigurationDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableArray *adAssetActions; // @synthesize adAssetActions=_adAssetActions;
@property(nonatomic) _Bool failedToLoadRequiredAssets; // @synthesize failedToLoadRequiredAssets=_failedToLoadRequiredAssets;
@property(retain, nonatomic) NSMutableSet *requestedAssets; // @synthesize requestedAssets=_requestedAssets;
@property(retain, nonatomic) NSMutableSet *completedAssets; // @synthesize completedAssets=_completedAssets;
@property(retain, nonatomic) NSMutableSet *readAssets; // @synthesize readAssets=_readAssets;
@property(copy, nonatomic) NSArray *clickActions; // @synthesize clickActions=_clickActions;
@property(copy, nonatomic) NSString *googleClickTrackingURLString; // @synthesize googleClickTrackingURLString=_googleClickTrackingURLString;
@property(copy, nonatomic) NSSet *thirdPartyClickTrackingURLs; // @synthesize thirdPartyClickTrackingURLs=_thirdPartyClickTrackingURLs;
@property(nonatomic) __weak id <GADNativeAdLoadDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(retain, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
@property(readonly, copy, nonatomic) NSDictionary *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GADNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)loadImageWithURL:(id)arg1 forKey:(id)arg2;
- (void)loadContentAtURL:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadAssets;
- (void)failedToLoadAssetWithName:(id)arg1;
- (void)finishedLoadingAssetWithName:(id)arg1;
- (id)requiredAssets;
- (id)assetsRequiredToBeDisplayed;
- (void)markAssetWithSelectorAsRead:(SEL)arg1;
- (void)recordImpression;
- (void)performClickOnAsset:(id)arg1;
- (id)clickActionTemplateID;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

