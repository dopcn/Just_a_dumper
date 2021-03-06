//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EKEvent, EKEventStore, MASTAdView, NSArray, NSDictionary, NSError, NSString, NSURL, NSURLRequest, UIButton, UIImage, UIView, UIViewController, UIWebView;

@protocol MASTAdViewDelegate <NSObject>
- (void)MASTAdView:(MASTAdView *)arg1 mainAdGetUrlsForVids:(NSDictionary *)arg2;
- (void)MASTAdView:(MASTAdView *)arg1 mainAdViewMore:(NSString *)arg2;
- (void)MASTAdViewMainAdRemoveRichAd:(MASTAdView *)arg1;

@optional
- (void)MASTAdView:(MASTAdView *)arg1 richMediaClickPing:(_Bool)arg2;
- (void)MASTAdViewStageReady:(MASTAdView *)arg1;
- (void)MASTAdViewShrinkMainVideo:(MASTAdView *)arg1;
- (void)MASTAdViewExpandMainVideo:(MASTAdView *)arg1;
- (void)MASTAdViewResumeMainVideo:(MASTAdView *)arg1;
- (void)MASTAdViewPauseMainVideo:(MASTAdView *)arg1;
- (UIView *)MASTAdViewResizeSuperview:(MASTAdView *)arg1;
- (UIViewController *)MASTAdViewPresentationController:(MASTAdView *)arg1;
- (void)MASTAdView:(MASTAdView *)arg1 didProcessRichmediaRequest:(NSURLRequest *)arg2;
- (_Bool)MASTAdView:(MASTAdView *)arg1 shouldSavePhotoToCameraRoll:(UIImage *)arg2;
- (_Bool)MASTAdView:(MASTAdView *)arg1 shouldSaveCalendarEvent:(EKEvent *)arg2 inEventStore:(EKEventStore *)arg3;
- (_Bool)MASTAdView:(MASTAdView *)arg1 shouldPlayVideo:(NSString *)arg2;
- (void)MASTAdView:(MASTAdView *)arg1 didReceiveThirdPartyRequest:(NSDictionary *)arg2 withParams:(NSDictionary *)arg3;
- (_Bool)MASTAdViewSupportsStorePicture:(MASTAdView *)arg1;
- (_Bool)MASTAdViewSupportsCalendar:(MASTAdView *)arg1;
- (_Bool)MASTAdViewSupportsPhone:(MASTAdView *)arg1;
- (_Bool)MASTAdViewSupportsSMS:(MASTAdView *)arg1;
- (_Bool)MASTAdView:(MASTAdView *)arg1 shouldLogEvent:(NSString *)arg2 ofType:(int)arg3;
- (void)MASTAdViewWillLeaveApplication:(MASTAdView *)arg1;
- (void)MASTAdViewInternalBrowserDidClose:(MASTAdView *)arg1;
- (void)MASTAdViewInternalBrowserWillClose:(MASTAdView *)arg1;
- (void)MASTAdViewInternalBrowserDidOpen:(MASTAdView *)arg1;
- (void)MASTAdViewInternalBrowserWillOpen:(MASTAdView *)arg1;
- (void)MASTAdViewDidCollapse:(MASTAdView *)arg1;
- (void)MASTAdViewWillCollapse:(MASTAdView *)arg1;
- (void)MASTAdView:(MASTAdView *)arg1 didResizeToFrame:(struct CGRect)arg2;
- (void)MASTAdView:(MASTAdView *)arg1 willResizeToFrame:(struct CGRect)arg2;
- (void)MASTAdViewDidExpand:(MASTAdView *)arg1;
- (_Bool)MASTAdViewShouldExpand:(MASTAdView *)arg1;
- (void)MASTAdViewWillExpand:(MASTAdView *)arg1;
- (void)MASTAdViewWillExpandView:(MASTAdView *)arg1 size:(struct CGSize)arg2;
- (UIButton *)MASTAdViewCustomCloseButton:(MASTAdView *)arg1;
- (void)MASTAdViewCloseButtonPressed:(MASTAdView *)arg1;
- (_Bool)MASTAdView:(MASTAdView *)arg1 shouldOpenURL:(NSURL *)arg2;
- (void)MASTAdView:(MASTAdView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)MASTAdViewDidRecieveAd:(MASTAdView *)arg1;
- (void)MASTAdView:(MASTAdView *)arg1 mainAdSetObjectViewable:(NSDictionary *)arg2;
- (void)MASTAdView:(MASTAdView *)arg1 mainAdGetParams:(NSDictionary *)arg2;
- (_Bool)parseRequest:(NSURLRequest *)arg1 withWebView:(UIView *)arg2;
- (void)MASTAdViewMraidInit:(UIWebView *)arg1;
- (void)MASTAdWebviewDidFinishLoad:(MASTAdView *)arg1;
- (void)MASTAdViewMraidInitFinished:(MASTAdView *)arg1;
- (NSString *)MASTAdViewGetTickerInfo:(MASTAdView *)arg1;
- (NSArray *)MASTAdViewSupportExtendAPIs:(MASTAdView *)arg1;
- (NSString *)MASTAdViewGetAppContextForBrige:(MASTAdView *)arg1;
- (NSString *)MASTAdViewGetNetworkStatusForBridge:(MASTAdView *)arg1;
- (NSString *)MASTAdViewUserKeyForJsBridge:(MASTAdView *)arg1;
@end

