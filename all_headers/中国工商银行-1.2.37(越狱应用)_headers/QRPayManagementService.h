//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QRPayCheckPasswordViewProtocol-Protocol.h"

@class NSString, QRPayUserInfoItem, UIViewController;

@interface QRPayManagementService : NSObject <QRPayCheckPasswordViewProtocol>
{
    QRPayUserInfoItem *_userInfoToPassword;
    UIViewController *_viewcontroller;
}

@property(retain, nonatomic) UIViewController *viewcontroller; // @synthesize viewcontroller=_viewcontroller;
@property(retain, nonatomic) QRPayUserInfoItem *userInfoToPassword; // @synthesize userInfoToPassword=_userInfoToPassword;
- (void).cxx_destruct;
- (void)pressedForgetPassword;
- (void)doAfterCheckPayPasswordWithResult:(id)arg1 checkPassWordView:(id)arg2;
- (void)gotoCheckPayPasswordForPayManagementView;
- (void)qrPayWithoutPasswordinManage:(id)arg1;
- (void)qrResetPasswordinManage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

