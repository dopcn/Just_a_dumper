//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCXViewController.h"

#import "NCXFacePlayControlDelegate-Protocol.h"
#import "NCXFacePlayDelegate-Protocol.h"
#import "NCXFreeCallChildViewController-Protocol.h"

@class NCXAudioRouteButton, NCXEffectManager, NCXFacePlayControl, NCXFacePlaySelectViewController, NCXFacePlayShareImageManager, NCXFacePlayShareViewController, NCXOverlayView, NCXPIPController, NCXTextureView, NCXVideoAlertView, NCXVideoRenderView, NCXVoIPSession, NSString, UIButton, UIImageView, UILabel, UIView;

@interface NCXFreeCallFacePlayViewController : NCXViewController <NCXFacePlayDelegate, NCXFacePlayControlDelegate, NCXFreeCallChildViewController>
{
    NCXVoIPSession *mSession;
    NCXVideoRenderView *mSendVideoRenderView;
    NCXVideoRenderView *mRecvVideoRenderView;
    NCXAudioRouteButton *mAudioRouteButton;
    NCXFacePlaySelectViewController *mSelectViewController;
    long long mViewMode;
    _Bool mStartingWithVideo;
    _Bool mSendStarted;
    _Bool mRecvStarted;
    _Bool mViewAppeared;
    NCXFacePlayControl *mFacePlayControl;
    UIButton *mMuteButton;
    NCXVideoAlertView *mAlertView;
    long long mAlertMode;
    long long mAnalyticsScreen;
    NCXPIPController *audioPIPController;
    NCXEffectManager *mEffectManager;
    NCXFacePlayShareViewController *mShareViewController;
    NCXFacePlayShareImageManager *mShareImageManager;
    UIButton *_cancelButton;
    NCXOverlayView *_recvVideoView;
    NCXOverlayView *_sendVideoView;
    NCXTextureView *_commImageView;
    NCXOverlayView *_selectView;
    UIView *_playingButtonsView;
    UIView *_captureView;
    NCXOverlayView *_shareView;
    UIView *_blockingView;
    UIView *_errorMessageView;
    UILabel *_errorMessageLabel;
    UIView *_triggerMessageView;
    UILabel *_triggerMessageLabel;
    UIView *_waitingOverlayView;
    UIView *_waitingBackgroundView;
    UIView *_waitingMessageOverlayView;
    UIImageView *_loadingImageView;
    UILabel *_profileNameLabel;
    UILabel *_connectingMessageLabel;
    UILabel *_playWaitingMessageLabel;
    UIView *_connectingButtonsView;
    UIView *_incomingButtonsView;
    UIButton *_incomingEndButton;
    UIButton *_incomingAcceptButton;
    UIView *_outgoingButtonsView;
    UIButton *_outgoingEndButton;
    UIView *_audioRouteButtonView;
    UIButton *_statisticsMessageButton;
    UIView *_alertOverlayView;
}

+ (id)viewControllerWithSession:(id)arg1 startingWithVideo:(_Bool)arg2;
@property(nonatomic) UIView *alertOverlayView; // @synthesize alertOverlayView=_alertOverlayView;
@property(nonatomic) UIButton *statisticsMessageButton; // @synthesize statisticsMessageButton=_statisticsMessageButton;
@property(nonatomic) UIView *audioRouteButtonView; // @synthesize audioRouteButtonView=_audioRouteButtonView;
@property(nonatomic) UIButton *outgoingEndButton; // @synthesize outgoingEndButton=_outgoingEndButton;
@property(nonatomic) UIView *outgoingButtonsView; // @synthesize outgoingButtonsView=_outgoingButtonsView;
@property(nonatomic) UIButton *incomingAcceptButton; // @synthesize incomingAcceptButton=_incomingAcceptButton;
@property(nonatomic) UIButton *incomingEndButton; // @synthesize incomingEndButton=_incomingEndButton;
@property(nonatomic) UIView *incomingButtonsView; // @synthesize incomingButtonsView=_incomingButtonsView;
@property(nonatomic) UIView *connectingButtonsView; // @synthesize connectingButtonsView=_connectingButtonsView;
@property(nonatomic) UILabel *playWaitingMessageLabel; // @synthesize playWaitingMessageLabel=_playWaitingMessageLabel;
@property(nonatomic) UILabel *connectingMessageLabel; // @synthesize connectingMessageLabel=_connectingMessageLabel;
@property(nonatomic) UILabel *profileNameLabel; // @synthesize profileNameLabel=_profileNameLabel;
@property(nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(nonatomic) UIView *waitingMessageOverlayView; // @synthesize waitingMessageOverlayView=_waitingMessageOverlayView;
@property(nonatomic) UIView *waitingBackgroundView; // @synthesize waitingBackgroundView=_waitingBackgroundView;
@property(nonatomic) UIView *waitingOverlayView; // @synthesize waitingOverlayView=_waitingOverlayView;
@property(nonatomic) UILabel *triggerMessageLabel; // @synthesize triggerMessageLabel=_triggerMessageLabel;
@property(nonatomic) UIView *triggerMessageView; // @synthesize triggerMessageView=_triggerMessageView;
@property(nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(nonatomic) UIView *errorMessageView; // @synthesize errorMessageView=_errorMessageView;
@property(nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property(nonatomic) NCXOverlayView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) UIView *playingButtonsView; // @synthesize playingButtonsView=_playingButtonsView;
@property(nonatomic) NCXOverlayView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) NCXTextureView *commImageView; // @synthesize commImageView=_commImageView;
@property(nonatomic) NCXOverlayView *sendVideoView; // @synthesize sendVideoView=_sendVideoView;
@property(nonatomic) NCXOverlayView *recvVideoView; // @synthesize recvVideoView=_recvVideoView;
@property(nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NCXFacePlayShareImageManager *shareImageManager; // @synthesize shareImageManager=mShareImageManager;
@property(retain, nonatomic) NCXFacePlayShareViewController *shareViewController; // @synthesize shareViewController=mShareViewController;
@property(retain, nonatomic) NCXEffectManager *effectManager; // @synthesize effectManager=mEffectManager;
@property(nonatomic) __weak NCXPIPController *audioPIPController; // @synthesize audioPIPController;
- (void).cxx_destruct;
- (void)facePlayWantsCaptureCompletedView:(id)arg1;
- (void)facePlayWantsDisplayShareView:(id)arg1;
- (void)facePlay:(id)arg1 wantsInterruptGameWithVictory:(_Bool)arg2;
- (void)facePlay:(id)arg1 didHandleTermCode:(long long)arg2;
- (void)facePlay:(id)arg1 willHandleTermCode:(long long)arg2;
- (void)facePlay:(id)arg1 didReceivePeerResult:(id)arg2;
- (void)facePlay:(id)arg1 didStopGameWithSessionID:(long long)arg2 gameID:(int)arg3;
- (void)facePlay:(id)arg1 didStartGameWithSessionID:(long long)arg2 gameID:(int)arg3;
- (_Bool)facePlay:(id)arg1 shouldWaitAsGuestWithGameID:(int)arg2 gameVersion:(long long)arg3 failure:(CDUnknownBlockType)arg4;
- (void)facePlay:(id)arg1 didChangeState:(long long)arg2 fromState:(long long)arg3;
- (void)facePlayControl:(id)arg1 didCompleted:(_Bool)arg2;
- (void)facePlayControlDidEndFeverTime:(id)arg1;
- (void)facePlayControlDidStartFeverTime:(id)arg1;
- (void)facePlayControlDidStartGame:(id)arg1;
- (void)facePlayControlDidEndGame:(id)arg1 result:(id)arg2;
- (void)facePlayControl:(id)arg1 didLoadScript:(_Bool)arg2;
- (void)facePlayControl:(id)arg1 didRenderCommonViewInTexture:(unsigned int)arg2 size:(struct CGSize)arg3 context:(id)arg4;
- (id)participantID;
- (void)closeShareView;
- (void)VoIPSessionDidChangeRemoteVideoState:(id)arg1;
- (void)VoIPSessionDidReceiveFirstRemoteVideoFrame:(id)arg1;
- (void)VoIPSessionStateDidChange:(id)arg1 state:(long long)arg2;
- (void)enableShortcut;
- (void)rejectLegalNotice;
- (_Bool)isHost;
- (_Bool)isCaptureCameraPaused;
- (void)closeSelectView;
- (void)startEffect:(id)arg1;
- (id)gamePackages;
- (void)effectTriggerWantsEyeBlink:(id)arg1;
- (void)effectTriggerWantsMouthOpen:(id)arg1;
- (void)effectTriggerWantsFaceDetection:(id)arg1;
- (void)showAlertViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAlertView;
- (void)setAlertMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAlertMode:(long long)arg1;
- (void)toggleMicrophoneMuted:(id)arg1;
- (void)disconnect:(id)arg1 forEvent:(id)arg2;
- (void)reject:(id)arg1 forEvent:(id)arg2;
- (void)accept:(id)arg1;
- (void)cancel:(id)arg1;
- (void)hideTriggerMessage;
- (void)showTriggerMessage:(id)arg1;
- (void)hideErrorMessage;
- (void)showErrorMessage:(id)arg1;
- (void)didStartReceiving;
- (void)didStartSending;
- (void)setViewMode:(long long)arg1;
- (void)sendAnalyticsScreen;
- (void)updateMuteButton;
- (void)updateStateMessage;
- (void)updateStackedImageView;
- (void)updateSendVideoRenderView;
- (void)updateRecvVideoRenderView;
- (void)updateBlockingView;
- (void)updateView;
- (void)updateReconnectionMessageWithText:(id)arg1;
- (void)updateCallDurationWithText:(id)arg1;
- (void)updateStatInfo;
- (void)updateProfile;
@property(readonly, nonatomic) _Bool supportsVideo;
- (_Bool)wantsIdleTimerDisabled;
- (_Bool)wantsProximityMonitoringEnabled;
- (void)cleanup;
- (void)setupFacePlayControl;
- (void)setupShareView;
- (void)setupVideoRenderView;
- (void)setupSelectView;
- (void)setupView;
- (void)captureViewWithKey:(id)arg1 afterDelay:(double)arg2 repeatCount:(unsigned long long)arg3;
- (id)captureCurrentView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)setupWithSession:(id)arg1 startingWithVideo:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

