//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YYMissionWebViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, TaskSystemGuideInfo, UIView, YYNoviceGuideStrongAnimationView, YYNoviceGuideWeakAnimationView;
@protocol YYMissionWebViewControl;

@interface YYTaskSysTemGuideViewController : UIViewController <YYMissionWebViewDelegate>
{
    _Bool _isFull;
    _Bool _isKeyboardShow;
    _Bool _isComboOn;
    _Bool _loginGuide;
    UIView *_taskGuideSuperView;
    YYNoviceGuideWeakAnimationView *_weakGuideAnimation;
    YYNoviceGuideStrongAnimationView *_compleGuideStrongAnimation;
    TaskSystemGuideInfo *_giftTaskInfo;
    TaskSystemGuideInfo *_clockInInfo;
    NSTimer *_timer;
    UIView<YYMissionWebViewControl> *_missionWebView;
    NSMutableArray *_missionAlertQueue;
    unsigned long long _medalCount;
}

@property(nonatomic) _Bool loginGuide; // @synthesize loginGuide=_loginGuide;
@property(nonatomic) unsigned long long medalCount; // @synthesize medalCount=_medalCount;
@property(retain, nonatomic) NSMutableArray *missionAlertQueue; // @synthesize missionAlertQueue=_missionAlertQueue;
@property(retain, nonatomic) UIView<YYMissionWebViewControl> *missionWebView; // @synthesize missionWebView=_missionWebView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isComboOn; // @synthesize isComboOn=_isComboOn;
@property(retain, nonatomic) TaskSystemGuideInfo *clockInInfo; // @synthesize clockInInfo=_clockInInfo;
@property(retain, nonatomic) TaskSystemGuideInfo *giftTaskInfo; // @synthesize giftTaskInfo=_giftTaskInfo;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(retain, nonatomic) YYNoviceGuideStrongAnimationView *compleGuideStrongAnimation; // @synthesize compleGuideStrongAnimation=_compleGuideStrongAnimation;
@property(retain, nonatomic) YYNoviceGuideWeakAnimationView *weakGuideAnimation; // @synthesize weakGuideAnimation=_weakGuideAnimation;
@property(retain, nonatomic) UIView *taskGuideSuperView; // @synthesize taskGuideSuperView=_taskGuideSuperView;
- (void).cxx_destruct;
- (void)onChannelWillChanged:(id)arg1;
- (void)channelViewSwitchToMinimizeWindow:(id)arg1;
- (void)giftTaskTimeOut:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)missionWebViewDidDismiss:(id)arg1;
- (void)dequeueMissionAlert;
- (void)addMissionAlertBlock:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2 priority:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)onAchievementTaskGeneralBroadCast:(id)arg1;
- (void)onAchievementTaskGeneralSingleCast:(id)arg1;
- (void)onTaskSystemYearAwards:(id)arg1;
- (void)onExpenseMissionCompletedAlert:(id)arg1;
- (void)onComboMissionCompletedAlert:(id)arg1;
- (void)onCardModuleDismiss;
- (void)showGiftTaskStrongOrWeakAnimationWithInfo:(id)arg1;
- (void)onComboHidden;
- (void)onHideSmallComboButton;
- (void)onHideFreeComboButton;
- (void)onHideBigComboButton;
- (void)onShowFreeComboButton;
- (void)onShowSmallComboButton;
- (void)onShowBigComboButton;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)onTaskSysTemGuideClick:(long long)arg1;
- (void)dealloc;
- (void)onLoginSucceed:(long long)arg1;
- (void)removeTaskView;
- (void)onOpenMoreView;
- (void)onPushMoreButton;
- (void)showMoreRedPoint:(_Bool)arg1;
- (void)onTaskSystemTaskGuide:(id)arg1;
- (void)onWeakGuide;
- (void)gotoLogin;
- (void)taskSystemGuide:(id)arg1 taskNovice:(id)arg2 isToLogin:(_Bool)arg3 taskId:(long long)arg4;
- (void)messageGuide;
- (id)getComBoButttonView;
- (void)_addSubview:(id)arg1;
- (void)taskWeakGuide;
- (void)showExpenseMissionAlertIfNeed;
- (void)channelViewController:(id)arg1 willChangeLayout:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)initAnonymousUsersTip;
- (id)initWithTaskGuideSuperView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

