//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseHoverBottomModule.h"

@class DSActivityView, NSDate, NSString;

@interface TPKOrderSubmitModule : GCBaseHoverBottomModule
{
    DSActivityView *_activityView;
    NSString *_textForLockUI;
    NSDate *_lockTime;
}

@property(retain, nonatomic) NSDate *lockTime; // @synthesize lockTime=_lockTime;
@property(retain, nonatomic) NSString *textForLockUI; // @synthesize textForLockUI=_textForLockUI;
@property(retain, nonatomic) DSActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)moduleDidDisappear:(_Bool)arg1;
- (id)postErrorAlertWithResponseAndBlocks:(id)arg1;
- (id)unlockUI:(id)arg1;
- (id)lockUI:(id)arg1;
- (id)updateLockUI:(id)arg1;
- (id)pushOrderDetailViewController:(id)arg1;
- (void)setupModule;

@end

