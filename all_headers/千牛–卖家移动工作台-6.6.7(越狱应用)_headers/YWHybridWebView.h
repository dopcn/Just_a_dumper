//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController, YWHybridEngine;
@protocol UIWebViewDelegate, YWBridgeCallDelegate;

@interface YWHybridWebView : UIWebView <UIActionSheetDelegate, UIWebViewDelegate>
{
    _Bool _isBridgeEnable;
    _Bool _hasFirstLoaded;
    id <YWBridgeCallDelegate> _bridgeCallDelegate;
    UIViewController *_viewController;
    NSString *_appKey;
    CDUnknownBlockType _openUrlBlock;
    id <UIWebViewDelegate> _orgin;
    YWHybridEngine *_bridgeEngine;
    NSMutableDictionary *_interceptUrls;
    NSMutableDictionary *_interceptUrlRegexs;
}

@property(retain, nonatomic) NSMutableDictionary *interceptUrlRegexs; // @synthesize interceptUrlRegexs=_interceptUrlRegexs;
@property(retain, nonatomic) NSMutableDictionary *interceptUrls; // @synthesize interceptUrls=_interceptUrls;
@property(nonatomic) _Bool hasFirstLoaded; // @synthesize hasFirstLoaded=_hasFirstLoaded;
@property(retain, nonatomic) YWHybridEngine *bridgeEngine; // @synthesize bridgeEngine=_bridgeEngine;
@property(nonatomic, setter=bridgeEnable:) _Bool isBridgeEnable; // @synthesize isBridgeEnable=_isBridgeEnable;
@property(nonatomic) __weak id <UIWebViewDelegate> orgin; // @synthesize orgin=_orgin;
@property(copy, nonatomic) CDUnknownBlockType openUrlBlock; // @synthesize openUrlBlock=_openUrlBlock;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <YWBridgeCallDelegate> bridgeCallDelegate; // @synthesize bridgeCallDelegate=_bridgeCallDelegate;
- (void).cxx_destruct;
- (void)registerInterceptWQService:(id)arg1;
- (_Bool)interceptEnable;
- (id)fommatUrl:(id)arg1;
- (_Bool)interceptForUrl:(id)arg1;
- (void)unRegisterInterceptUrl:(id)arg1;
- (void)registerInterceptUrl:(id)arg1 goOn:(_Bool)arg2;
- (void)unRegisterInterceptUrlWithRegex:(id)arg1;
- (void)registerInterceptUrlWithRegex:(id)arg1 matchedBlock:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)registerService;
- (id)getAppKey;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect)arg1 onViewController:(id)arg2 enableBridge:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 onViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

