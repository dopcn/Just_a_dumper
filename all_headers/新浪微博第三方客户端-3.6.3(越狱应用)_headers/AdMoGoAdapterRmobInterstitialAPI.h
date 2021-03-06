//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdMoGoAdNetworkInterstitialAdapter.h"

#import "UIWebViewDelegate-Protocol.h"

@class AdMoGoConfigData, AdMoGoWebBrowserController, NSDictionary, NSMutableData, NSString, NSTimer, UIButton, UIViewController, UIWebView;

@interface AdMoGoAdapterRmobInterstitialAPI : AdMoGoAdNetworkInterstitialAdapter <UIWebViewDelegate>
{
    NSMutableData *receivedData;
    NSDictionary *adDataDict;
    NSTimer *timer;
    _Bool isStop;
    _Bool isReady;
    UIButton *closeButton;
    _Bool isClick;
    UIViewController *viewController;
    AdMoGoConfigData *configData;
    UIWebView *adWebView;
    NSString *latitude;
    NSString *longitude;
    AdMoGoWebBrowserController *webBrowserController;
}

+ (void)load;
+ (int)networkType;
@property(retain, nonatomic) AdMoGoWebBrowserController *webBrowserController; // @synthesize webBrowserController;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showAd;
- (void)createCloseButton;
- (void)adclose;
- (void)dealloc;
- (void)releaseAdView;
- (void)stopBeingDelegate;
- (void)stopAd;
- (void)getRmobImage;
- (void)getDataDictionary;
- (void)checkData;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)presentInterstitial;
- (_Bool)isReadyPresentInterstitial;
- (void)startRequestAd:(id)arg1;
- (void)initAdRmob;
- (id)loadParam;
- (void)getLocation;
- (id)toJSONData:(id)arg1;
- (id)decodeFromPercentEscapeString:(id)arg1;
- (id)encodeToPercentEscapeString:(id)arg1;
- (void)stopTimer;
- (void)loadAdTimeOut:(id)arg1;
- (void)getAd;
- (id)getSid;
- (id)getRequestUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

