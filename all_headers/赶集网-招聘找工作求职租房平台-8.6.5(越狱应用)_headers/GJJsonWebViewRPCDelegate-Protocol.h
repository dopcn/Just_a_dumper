//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GJJsonRPCWebView, NSArray, NSDictionary, NSString;

@protocol GJJsonWebViewRPCDelegate <NSObject>

@optional
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 saveImg:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 getWeiXinUserInfo:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 directShareWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 geLogWithParams:(NSDictionary *)arg2;
- (_Bool)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 openOutUrlWithParams:(NSDictionary *)arg2;
- (NSString *)GJJsonRPCWebViewShouldSetCustomUploadServerHost:(GJJsonRPCWebView *)arg1;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 getWebpImg:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 updateHeaderRightButtonWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 showShareDialogWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 weiXinShareWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 triggerEventWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebViewBackToNative:(GJJsonRPCWebView *)arg1;
- (void)GJJsonRPCWebViewBackToRootView:(GJJsonRPCWebView *)arg1;
- (void)GJJsonRPCWebViewBack:(GJJsonRPCWebView *)arg1 withParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 callClientPayWithParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 createNativeForParams:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 updateTitile:(NSString *)arg2;
- (void)GJJsonRPCWebViewLogin:(GJJsonRPCWebView *)arg1 rpcId:(NSString *)arg2 params:(NSDictionary *)arg3;
- (void)GJJsonRPCWebViewLoginout:(GJJsonRPCWebView *)arg1 rpcId:(NSString *)arg2 params:(NSDictionary *)arg3;
- (NSDictionary *)GJJsonRPCWebViewGetCityInfo:(GJJsonRPCWebView *)arg1;
- (NSDictionary *)GJJsonRPCWebViewGetDeviceInfo:(GJJsonRPCWebView *)arg1;
- (NSDictionary *)GJJsonRPCWebViewGetUserInfo:(GJJsonRPCWebView *)arg1 params:(NSDictionary *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 webViewCallbackForUrl:(NSString *)arg2;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 createNewWebViewForUrl:(NSString *)arg2 control:(NSArray *)arg3;
- (void)GJJsonRPCWebView:(GJJsonRPCWebView *)arg1 LogWithParams:(NSDictionary *)arg2;
@end

