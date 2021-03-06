//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MTWebViewJavascriptBridgeBaseDelegate;

@interface MTWebViewJavascriptBridgeBase : NSObject
{
    id _webViewDelegate;
    long long _uniqueId;
    NSString *_appLanguage;
    id <MTWebViewJavascriptBridgeBaseDelegate> _delegate;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    NSDictionary *_webViewInjectionParams;
}

+ (void)setLogMaxLength:(int)arg1;
+ (void)enableLogging;
+ (id)bridgeWithWebView:(id)arg1;
@property(copy, nonatomic) NSDictionary *webViewInjectionParams; // @synthesize webViewInjectionParams=_webViewInjectionParams;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(nonatomic) __weak id <MTWebViewJavascriptBridgeBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getSysInfoByName:(char *)arg1;
- (id)mt_currentSystemLanguage;
- (void)injectPhoneInfo;
- (void)injectJavascriptFile;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)_deserializeMessageJSON:(id)arg1;
- (id)_serializeMessage:(id)arg1 pretty:(_Bool)arg2;
- (id)_evaluateJavascript:(id)arg1;
- (void)_evaluateJavascriptWithoutReaturnValue:(id)arg1;
- (void)_dispatchMessage:(struct NSString *)arg1;
- (void)logUnkownMessage:(id)arg1;
- (void)sendMessageData:(struct NSString *)arg1;
- (_Bool)matchesProtocolHeaderWithURL:(id)arg1;
- (_Bool)isUrl:(id)arg1 withinHostWhiteList:(id)arg2;
- (_Bool)isUrlLocal:(id)arg1;
- (_Bool)isCorrectProcotocolScheme:(id)arg1;
- (void)appLanguage:(id)arg1;
- (void)reset;
- (id)init;
- (void)initContainers;
- (void)updateParamsFromWebView:(id)arg1;
- (void)dealloc;

@end

