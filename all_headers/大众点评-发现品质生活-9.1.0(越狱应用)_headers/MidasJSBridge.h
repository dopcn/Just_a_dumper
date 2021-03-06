//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIWebView;
@protocol UIWebViewDelegate;

@interface MidasJSBridge : NSObject <UIWebViewDelegate>
{
    NSString *_schema;
    UIWebView *_webView;
    id <UIWebViewDelegate> _webViewDelegate;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    CDUnknownBlockType _messageHandler;
    unsigned long long _uniqueId;
}

+ (id)bridgeForWebView:(id)arg1;
@property(nonatomic) unsigned long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(retain, nonatomic) NSMutableArray *startupMessageQueue; // @synthesize startupMessageQueue=_startupMessageQueue;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
- (id)_deserializeMessageJSON:(id)arg1;
- (id)_serializeMessage:(id)arg1 pretty:(_Bool)arg2;
- (void)_dispatchMessage:(struct NSDictionary *)arg1;
- (void)_queueMessage:(struct NSDictionary *)arg1;
- (id)_evaluateJavascript:(id)arg1;
- (void)logUnkownMessage:(id)arg1;
- (void)injectJavascriptFile:(id)arg1;
- (_Bool)isCorrectProcotocolScheme:(id)arg1;
- (void)flushMessageQueue:(id)arg1;
- (id)fetchQueryCommandFromWebview;
- (void)sendData:(id)arg1 handlerName:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)isQueueMessageURL:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

