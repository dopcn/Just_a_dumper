//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FullLaunchHelperDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;
@protocol FullLaunchJSHelprDelegate;

@interface FullLaunchJSHelpr : NSObject <UIWebViewDelegate, FullLaunchHelperDelegate>
{
    UIWebView *_mWebView;
    id <FullLaunchJSHelprDelegate> _delegate;
}

+ (id)sharedSingleton;
@property(nonatomic) id <FullLaunchJSHelprDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIWebView *mWebView; // @synthesize mWebView=_mWebView;
- (id)getadurl;
- (id)getJSFilePath;
- (id)getTempJSFilePath;
- (void)loadNewHtml;
- (void)dispatchResult:(id)arg1;
- (void)onLaunchRequestSuccess:(id)arg1;
- (void)onLaunchRequestFailed:(id)arg1;
- (void)excuteTouTiao;
- (void)excuteGDTLaunch;
- (void)setBaiduState:(_Bool)arg1;
- (void)excuteBaiduLaunch;
- (_Bool)excuteUrl:(id)arg1;
- (void)logEvent:(id)arg1 value:(id)arg2;
- (void)logGoogleEventWithAd:(id)arg1 errMessage:(id)arg2 errCode:(long long)arg3;
- (void)valueFailed:(id)arg1;
- (id)getCarrier;
- (id)getConn;
- (id)getDeviceData:(id)arg1;
- (id)isrespondsToFucsForJS:(id)arg1;
- (id)isAppsExist:(id)arg1;
- (id)isAppExist:(id)arg1;
- (id)isrespondsToFucForJS:(id)arg1;
- (_Bool)isrespondsToFuc:(id)arg1;
- (id)getDeviceToken;
- (id)getDeviceInfosDictionary;
- (void)callOCFuc:(id)arg1 Params:(id)arg2 CallBack:(id)arg3 BackParams:(id)arg4 ErrBack:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)excuteJsWithDelegate:(id)arg1;
- (void)dealloc;
- (id)initSingleton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

