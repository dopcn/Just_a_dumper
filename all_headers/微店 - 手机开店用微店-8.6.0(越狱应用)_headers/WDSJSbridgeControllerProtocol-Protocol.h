//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIView;

@protocol WDSJSbridgeControllerProtocol <NSObject>
- (void)JSbridge_WillRouteToPage:(NSString *)arg1 contextInfo:(NSDictionary *)arg2;
- (void)JSbridge_injectJSString:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)JSbridge_setTitle:(NSString *)arg1;
- (NSURL *)JSbridge_currentURLForLoading;
- (NSURL *)JSbridge_currentURL;
- (UIView *)JSbridge_selfView;
- (UIView *)JSbridge_WebView;
- (void)JSbridge_showFooterButton;
- (void)JSbridge_hideLoading;
- (void)JSbridge_showLoadingWithText:(NSString *)arg1 duraction:(double)arg2;
- (void)JSbridge_showLoading;
- (void)JSbridge_closeWebView;
@end

