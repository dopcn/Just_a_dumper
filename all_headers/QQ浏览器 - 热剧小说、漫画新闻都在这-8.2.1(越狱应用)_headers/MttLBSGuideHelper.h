//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MttAlertViewDelegate-Protocol.h"

@class NSString;

@interface MttLBSGuideHelper : UIView <MttAlertViewDelegate>
{
    long long _preNotificationType;
    long long _preLBSPermission;
}

@property(nonatomic) long long preLBSPermission; // @synthesize preLBSPermission=_preLBSPermission;
@property(nonatomic) long long preNotificationType; // @synthesize preNotificationType=_preNotificationType;
- (void)handleLBSUpdate:(id)arg1;
- (void)handleLBSBecomeActive;
- (void)showLBSDenyAlert;
- (void)mttAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleBecomeActive;
- (void)showLBSNofityGuide;
- (void)startMonitorNotifyPermission;
- (long long)getNotificationType;
- (void)initDefaultData;
- (void)dismiss;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

