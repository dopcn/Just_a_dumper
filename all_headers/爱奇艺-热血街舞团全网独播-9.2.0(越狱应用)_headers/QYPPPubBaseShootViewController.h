//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QYPPAlertViewDelegate-Protocol.h"
#import "QYPPPubAudioRouteNotificationObserver-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, QYPPAlertView_, QYPPPrompterTextView, QYPPPubAudioRouteNotification, QYPPPubRecordBtnPanel, QYPPShootCounterView;

@interface QYPPPubBaseShootViewController : UIViewController <QYPPAlertViewDelegate, QYPPPubAudioRouteNotificationObserver>
{
    _Bool _isVerifyLogin;
    _Bool _defaultStatusbarHidden;
    CDUnknownBlockType _recordDoneBlock;
    QYPPPubRecordBtnPanel *_recordControlPanel;
    QYPPPrompterTextView *_prompterTextView;
    QYPPAlertView_ *_returnAlert;
    QYPPShootCounterView *_shootCounterView;
    NSArray *_prompterArray;
    NSDate *_startLoadingTimeStamp;
    NSDictionary *_staticLoadingTimeParams;
    QYPPPubAudioRouteNotification *_audioRouteNotification;
}

@property(retain, nonatomic) QYPPPubAudioRouteNotification *audioRouteNotification; // @synthesize audioRouteNotification=_audioRouteNotification;
@property(retain, nonatomic) NSDictionary *staticLoadingTimeParams; // @synthesize staticLoadingTimeParams=_staticLoadingTimeParams;
@property(retain, nonatomic) NSDate *startLoadingTimeStamp; // @synthesize startLoadingTimeStamp=_startLoadingTimeStamp;
@property(nonatomic) _Bool defaultStatusbarHidden; // @synthesize defaultStatusbarHidden=_defaultStatusbarHidden;
@property(nonatomic) _Bool isVerifyLogin; // @synthesize isVerifyLogin=_isVerifyLogin;
@property(retain, nonatomic) NSArray *prompterArray; // @synthesize prompterArray=_prompterArray;
@property(retain, nonatomic) QYPPShootCounterView *shootCounterView; // @synthesize shootCounterView=_shootCounterView;
@property(retain, nonatomic) QYPPAlertView_ *returnAlert; // @synthesize returnAlert=_returnAlert;
@property(retain, nonatomic) QYPPPrompterTextView *prompterTextView; // @synthesize prompterTextView=_prompterTextView;
@property(retain, nonatomic) QYPPPubRecordBtnPanel *recordControlPanel; // @synthesize recordControlPanel=_recordControlPanel;
@property(copy, nonatomic) CDUnknownBlockType recordDoneBlock; // @synthesize recordDoneBlock=_recordDoneBlock;
- (void).cxx_destruct;
- (void)checkIfNeedLoginBeforeLoginAction:(CDUnknownBlockType)arg1 finishLoginAction:(CDUnknownBlockType)arg2 cancelLoginAction:(CDUnknownBlockType)arg3 dontLoginAction:(CDUnknownBlockType)arg4;
- (void)loginActionWithBeforeAction:(CDUnknownBlockType)arg1 finishAction:(CDUnknownBlockType)arg2 cancelAction:(CDUnknownBlockType)arg3;
- (_Bool)shouldHandleHeadsetPlugin;
- (void)cancel;
- (void)destory;
- (void)restartProcess;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)createReturnAlert;
- (void)addPrompterView;
- (void)showPrompterButton;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pageLoadTiming;
- (void)startLoadTiming;
- (void)checkHeadsetIsPlugin;
- (void)headsetDidUnPlugin;
- (void)headsetDidPlugin;
- (void)audioRouteNotification:(id)arg1 isHeadsetPlugin:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

