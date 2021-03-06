//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXManager.h"

#import "TimerHolderDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSObject, NSString, TimerHolder, WKWebView, WebViewJsonRPC, YXHttpDownloader, YXLinkShareOperation, YXLinkShareRequest;
@protocol OS_dispatch_semaphore;

@interface YXLinkShareManager : YXManager <WKNavigationDelegate, TimerHolderDelegate>
{
    WebViewJsonRPC *_bridge;
    WKWebView *_webView;
    TimerHolder *_timer;
    YXHttpDownloader *_downloader;
    NSObject<OS_dispatch_semaphore> *_onStopWebViewSemaphore;
    NSObject<OS_dispatch_semaphore> *_onCleanWebContentSemaphore;
    YXLinkShareOperation *_currentOperation;
    YXLinkShareOperation *_cachedLastOperation;
}

+ (id)privateQueue;
+ (void)asyncPrivateQueue:(CDUnknownBlockType)arg1;
+ (id)notificationString2notificationOptionDic;
+ (id)urlFromText:(id)arg1;
+ (id)urlFromPasteboard;
@property(retain) YXLinkShareOperation *cachedLastOperation; // @synthesize cachedLastOperation=_cachedLastOperation;
@property(retain) YXLinkShareOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property __weak NSObject<OS_dispatch_semaphore> *onCleanWebContentSemaphore; // @synthesize onCleanWebContentSemaphore=_onCleanWebContentSemaphore;
@property __weak NSObject<OS_dispatch_semaphore> *onStopWebViewSemaphore; // @synthesize onStopWebViewSemaphore=_onStopWebViewSemaphore;
@property(retain, nonatomic) YXHttpDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) TimerHolder *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WebViewJsonRPC *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)fix_iOS8;
- (void)printThreadStack;
- (void)printCallStack;
- (unsigned long long)notificationOfNotificationString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)requestURL;
@property(readonly, nonatomic) YXLinkShareRequest *request;
- (_Bool)validNavigation:(id)arg1;
- (void)postResponseWithNaotificationName:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopListen;
- (void)startListen;
- (id)downloadImageWithURLString:(id)arg1;
- (void)stopTimer;
- (void)onTimerHolderFire:(id)arg1;
- (void)p_startTimerWithRequest:(id)arg1 repeat:(_Bool)arg2;
- (void)p_stopWebView;
- (void)p_doCompleteWithStopWebView:(_Bool)arg1;
- (void)p_invokeComplete;
- (void)updateImageWithData:(id)arg1 source:(long long)arg2 navigation:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)updateImageDataWithURLString:(id)arg1 source:(long long)arg2 download:(_Bool)arg3 navigation:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)updateDesc:(id)arg1 source:(long long)arg2 navigation:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)updateTitle:(id)arg1 source:(long long)arg2 navigation:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)updateMessageWithTitle:(id)arg1 desc:(id)arg2 thumbnailSrc:(id)arg3 fromSource:(long long)arg4;
- (void)updateError:(id)arg1 navigation:(id)arg2;
- (void)p_injectYXOOScriptWithSupportResponse:(CDUnknownBlockType)arg1;
- (void)p_getDataByYXOOWithSupportResponse:(CDUnknownBlockType)arg1;
- (void)p_getShareDataWithWithSupportResponse:(CDUnknownBlockType)arg1;
- (void)p_getAppMessageDataWithSupportResponse:(CDUnknownBlockType)arg1;
- (void)p_fetchMediaMessage;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)redirectURLRequest:(id)arg1;
- (_Bool)p_checkRequestIsValid:(id)arg1 error:(id *)arg2;
- (void)p_cleanWebViewContent;
- (void)p_copyInfoFromOperation:(id)arg1 toOperation:(id)arg2;
- (void)p_createNewOperationWithRequest:(id)arg1 copy:(_Bool)arg2;
- (void)p_cacheCurrentOperation;
- (void)p_freezeCurrentOperationWaitUntilDone;
- (void)startDetectWithRequest:(id)arg1;
- (void)startDelayDetectWithRequest:(id)arg1 withDelayMaxTime:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)tipURL:(id)arg1 scene:(unsigned long long)arg2 ruleName:(id)arg3 identifier:(id)arg4;
- (id)fetchMesssageWithScene:(unsigned long long)arg1 waitInSeconds:(double)arg2 minDelay:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (id)startTipPasteboardInSessionWithRule:(id)arg1 identifier:(id)arg2;
- (id)startTipPasteboardInTimeLineWithRule:(id)arg1;
- (id)startTipWithURL:(id)arg1 idn:(id)arg2 rule:(id)arg3 scene:(unsigned long long)arg4 notificationmask:(unsigned long long)arg5;
- (_Bool)normalDecisionPolicyWithResponse:(id)arg1;
- (_Bool)isOnForRuleName:(id)arg1;
- (void)setOn:(_Bool)arg1 forRuleName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

