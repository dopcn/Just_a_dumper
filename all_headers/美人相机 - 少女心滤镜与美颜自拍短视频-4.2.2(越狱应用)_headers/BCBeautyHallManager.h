//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SaveMaskVideoAlertToolDelegate-Protocol.h"

@class BCAccountManager, NSString, SaveMaskVideoAlertTool;

@interface BCBeautyHallManager : NSObject <SaveMaskVideoAlertToolDelegate>
{
    BCAccountManager *_accountManager;
    SaveMaskVideoAlertTool *_alertTool;
}

+ (void)setupBindDeviceWithUserId:(id)arg1;
+ (void)bindMobileNumber;
+ (_Bool)succeessLogin;
+ (void)tokenIsExpired;
+ (void)changeTestmodel;
+ (void)showBeautyHallWithController:(id)arg1 url:(id)arg2;
+ (id)shareBeautyHall;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SaveMaskVideoAlertTool *alertTool; // @synthesize alertTool=_alertTool;
@property(retain, nonatomic) BCAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void).cxx_destruct;
- (void)didClickSaveMaskVideoAlertToolSureButton;
- (void)beautyHallBindPhoneSucceed:(id)arg1;
- (void)beautyHallLoginSucceed:(id)arg1;
- (void)shareObject:(id)arg1 shareWeibo:(id)arg2 shareType:(long long)arg3;
- (long long)shareTypeWithplatformType:(unsigned long long)arg1;
- (void)beautyHallSensorsStatistics;
- (void)beautyHallPageStatistics;
- (void)beautyHallEventStatistics;
- (void)beautyHallShare;
- (void)beautyHallShowMissHall;
- (void)beautyHallBindPhoneNumber;
- (void)beautyHallLogin;
- (void)openBeautyHallWithController:(id)arg1;
- (void)configureBeautyMallSDK;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

