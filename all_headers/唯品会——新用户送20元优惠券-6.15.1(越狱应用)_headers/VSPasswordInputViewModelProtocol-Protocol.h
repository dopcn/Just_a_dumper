//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, VSPasswordInputViewController;

@protocol VSPasswordInputViewModelProtocol <NSObject>
- (NSString *)pageProperty;
- (NSString *)pageEventName;
- (void)onCancel;
- (void)onConfirm:(VSPasswordInputViewController *)arg1 password:(NSString *)arg2;
- (_Bool)isPasswordSetting;
- (NSString *)passwordValid:(NSString *)arg1;
- (NSString *)inputPlaceHolder;
- (NSString *)confirmTitle;
- (NSString *)subTitle;
- (NSString *)title;

@optional
- (UIView *)footerViewForVC:(VSPasswordInputViewController *)arg1;
- (NSString *)headTipTitle;
@end

