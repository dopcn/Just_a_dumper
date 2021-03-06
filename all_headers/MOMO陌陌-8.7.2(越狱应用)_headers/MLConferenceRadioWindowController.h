//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLBroadcastBaseViewController.h"

#import "MLConferenceWindowCallBackProtocol-Protocol.h"

@class MLBroadcastDataSourceCoordinator, MLBroadcastUICoordinator, MLConferenceRadioStarSlaverManager, MLConferenceRadioWindowApplyView, MLConnectSlaveInfo, NSArray, NSMutableArray, NSOperationQueue, NSString;
@protocol MLConferenceWindowControllerDelegate;

@interface MLConferenceRadioWindowController : MLBroadcastBaseViewController <MLConferenceWindowCallBackProtocol>
{
    _Bool _showedAsSlaver;
    _Bool _applyViewVisible;
    _Bool _doubleAudioWaveRandom;
    NSArray *_slaverInfoArray;
    unsigned long long _currentSlaverCount;
    unsigned long long _commonSlaverCount;
    unsigned long long _conferenceType;
    id <MLConferenceWindowControllerDelegate> _delegate;
    MLBroadcastDataSourceCoordinator *_dataSourceCoordinator;
    MLBroadcastUICoordinator *_uiCoordinator;
    NSMutableArray *_currentWinViewArray;
    MLConferenceRadioWindowApplyView *_applyView;
    MLConferenceRadioStarSlaverManager *_starSlaverManager;
    NSOperationQueue *_muteStateQueryQueue;
    NSOperationQueue *_volumeStateQueryQueue;
    MLConnectSlaveInfo *_hostInfo;
}

@property(retain, nonatomic) MLConnectSlaveInfo *hostInfo; // @synthesize hostInfo=_hostInfo;
@property(nonatomic) _Bool doubleAudioWaveRandom; // @synthesize doubleAudioWaveRandom=_doubleAudioWaveRandom;
@property(retain, nonatomic) NSOperationQueue *volumeStateQueryQueue; // @synthesize volumeStateQueryQueue=_volumeStateQueryQueue;
@property(retain, nonatomic) NSOperationQueue *muteStateQueryQueue; // @synthesize muteStateQueryQueue=_muteStateQueryQueue;
@property(retain, nonatomic) MLConferenceRadioStarSlaverManager *starSlaverManager; // @synthesize starSlaverManager=_starSlaverManager;
@property(nonatomic, getter=isApplyViewVisible) _Bool applyViewVisible; // @synthesize applyViewVisible=_applyViewVisible;
@property(nonatomic) _Bool showedAsSlaver; // @synthesize showedAsSlaver=_showedAsSlaver;
@property(retain, nonatomic) MLConferenceRadioWindowApplyView *applyView; // @synthesize applyView=_applyView;
@property(retain, nonatomic) NSMutableArray *currentWinViewArray; // @synthesize currentWinViewArray=_currentWinViewArray;
@property(retain, nonatomic) MLBroadcastUICoordinator *uiCoordinator; // @synthesize uiCoordinator=_uiCoordinator;
@property(nonatomic) __weak MLBroadcastDataSourceCoordinator *dataSourceCoordinator; // @synthesize dataSourceCoordinator=_dataSourceCoordinator;
@property(nonatomic) __weak id <MLConferenceWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long conferenceType; // @synthesize conferenceType=_conferenceType;
@property(nonatomic) unsigned long long commonSlaverCount; // @synthesize commonSlaverCount=_commonSlaverCount;
@property(nonatomic) unsigned long long currentSlaverCount; // @synthesize currentSlaverCount=_currentSlaverCount;
@property(copy, nonatomic) NSArray *slaverInfoArray; // @synthesize slaverInfoArray=_slaverInfoArray;
- (void).cxx_destruct;
- (void)updateApplyViewWaitingAvatarWithURLStrings:(id)arg1 role:(unsigned long long)arg2;
- (void)updateApplyViewWithRole:(unsigned long long)arg1 waitCount:(long long)arg2;
- (id)applyViewTitle:(unsigned long long)arg1;
- (void)updateButtonWindowView;
- (void)leaveClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)followClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)updateTimeCallback:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)timeOverCallback:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)closeClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)starValueClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)rankListClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)viewClickedResponse:(id)arg1 slaverInfo:(id)arg2 ext:(id)arg3;
- (void)showEmoticon:(id)arg1 slaverId:(id)arg2;
- (void)showMuteState:(unsigned long long)arg1 slaverID:(id)arg2;
- (void)updateConferenceWindowAlpha:(double)arg1;
- (void)updateVolumeWithMediaInfo:(id)arg1;
- (void)updateMuteWithMediaInfo:(id)arg1;
- (void)updateStarLeadIcon;
- (_Bool)applyViewHidden;
- (void)showApplyView:(_Bool)arg1;
- (_Bool)onTouchWindowWithPoint:(struct CGPoint)arg1;
- (void)updateApplyViewTitle:(id)arg1;
- (void)updateHostNickWithValue:(id)arg1 hostID:(id)arg2;
- (void)updateStarValueWithValue:(long long)arg1 slaverID:(id)arg2;
- (id)windowViewWithSlaverID:(id)arg1;
- (void)createWinView:(id)arg1;
- (struct CGRect)winViewFrame:(id)arg1 winView:(id)arg2;
- (id)conferenceWindowSlaverBaseView:(id)arg1;
- (id)connectWaitView:(id)arg1 idx:(long long)arg2;
- (id)conferenceWindowHostView:(id)arg1;
- (void)updateWithDisplayWindowInfoList:(id)arg1 ext:(id)arg2;
- (void)cancelAllOperations;
- (void)showGiftImageWithUrl:(id)arg1 time:(float)arg2 withMomoId:(id)arg3;
- (void)showOfflineTipLabel:(_Bool)arg1 withMomoID:(id)arg2;
- (void)setupConferenceMode:(unsigned long long)arg1 waitCount:(unsigned long long)arg2 role:(unsigned long long)arg3;
- (void)removeSlaverWindows;
- (void)resetAllConferenceWindows;
- (void)removeAllConferenceWindows;
- (void)setupSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

