//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTNativeExpressAd, GDTNativeExpressAdView, NSArray, NSError;

@protocol GDTNativeExpressAdDelegete <NSObject>

@optional
- (void)nativeExpressAdViewApplicationWillEnterBackground:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewDidDissmissScreen:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewWillDissmissScreen:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewDidPresentScreen:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewClosed:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewClicked:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewExposure:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewRenderFail:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdViewRenderSuccess:(GDTNativeExpressAdView *)arg1;
- (void)nativeExpressAdFailToLoad:(GDTNativeExpressAd *)arg1 error:(NSError *)arg2;
- (void)nativeExpressAdSuccessToLoad:(GDTNativeExpressAd *)arg1 views:(NSArray *)arg2;
@end

