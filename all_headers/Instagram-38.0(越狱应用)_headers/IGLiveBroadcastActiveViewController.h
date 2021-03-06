//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGDirectVerticalShareSheetControllerDelegate-Protocol.h"
#import "IGFaceEffectTrayViewControllerDelegate-Protocol.h"
#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#import "IGLiveBroadcastActionSheetControllerDelegate-Protocol.h"
#import "IGLiveBroadcastCaptureManagerDelegate-Protocol.h"
#import "IGLiveBroadcastControllerDelegate-Protocol.h"
#import "IGLiveBroadcastResourceViewControllerDelegate-Protocol.h"
#import "IGLiveBroadcastViewDelegate-Protocol.h"
#import "IGLiveFeedbackControllerDelegate-Protocol.h"
#import "IGLiveInviteControllerDelegate-Protocol.h"
#import "IGLiveWithBroadcastActionSheetControllerDelegate-Protocol.h"
#import "IGLiveWithPrivacyConfirmationViewControllerDelegate-Protocol.h"
#import "IGStoryViewerSectionControllerViewerDelegate-Protocol.h"

@class FBTimer, IGCameraViewController, IGDirectVerticalShareSheetController, IGFaceEffectTrayViewController, IGKeyboardObserver, IGLiveBroadcastActionSheetController, IGLiveBroadcastConfig, IGLiveBroadcastDebugView, IGLiveBroadcastEventController, IGLiveBroadcastInviteLoggingContext, IGLiveBroadcastLoggingContext, IGLiveBroadcastProductionManager, IGLiveBroadcastResourceViewController, IGLiveBroadcastToolbox, IGLiveBroadcastView, IGLiveBroadcastViewerListViewDataSource, IGLiveCommentViewUpdater, IGLiveDarkOverlayView, IGLiveDebugInfoVideoProcessor, IGLiveFeedbackController, IGLiveHalfSheetTransition, IGLiveInviteSheetViewController, IGLiveRequestToJoinCommentsUpdater, IGLiveRequestToJoinPuller, IGLiveRequestToJoinService, IGLiveRightsManagerService, IGLiveViewerListViewController, IGLiveWaveService, IGLiveWithBroadcastActionSheetController, IGLiveWithBroadcastView, IGUser, IGUserSession, IGViewController, NSString, UILocalNotification, UIView;
@protocol IGLiveBroadcastActiveViewControllerDelegate;

@interface IGLiveBroadcastActiveViewController : UIViewController <IGKeyboardObserverFrameChangeDelegate, IGFaceEffectTrayViewControllerDelegate, IGLiveBroadcastActionSheetControllerDelegate, IGLiveBroadcastCaptureManagerDelegate, IGLiveBroadcastControllerDelegate, IGLiveBroadcastViewDelegate, IGLiveFeedbackControllerDelegate, IGLiveWithBroadcastActionSheetControllerDelegate, IGLiveBroadcastResourceViewControllerDelegate, IGStoryViewerSectionControllerViewerDelegate, IGLiveWithPrivacyConfirmationViewControllerDelegate, IGLiveInviteControllerDelegate, IGDirectVerticalShareSheetControllerDelegate>
{
    _Bool _requestToJoinEnabled;
    IGLiveDarkOverlayView *_darkOverlayView;
    _Bool _isPolicyViolatingStream;
    _Bool _isCheckpointedForPolicyViolation;
    _Bool _isCheckpointConfirmed;
    IGLiveRightsManagerService *_rightsManagerService;
    IGViewController *_sourceViewController;
    NSString *_module;
    _Bool _enableLiveWith;
    _Bool _didHaveJoinedGuests;
    _Bool _isVisible;
    _Bool _isShowingFaceEffectTray;
    _Bool _isAnimatingFaceEffectTray;
    IGFaceEffectTrayViewController *_faceEffectTrayViewController;
    id <IGLiveBroadcastActiveViewControllerDelegate> _delegate;
    IGLiveBroadcastToolbox *_toolbox;
    IGLiveBroadcastProductionManager *_productionManager;
    IGLiveDebugInfoVideoProcessor *_debugVideoProcessor;
    IGLiveFeedbackController *_feedbackController;
    IGKeyboardObserver *_keyboardObserver;
    IGLiveBroadcastActionSheetController *_actionSheetController;
    IGLiveCommentViewUpdater *_commentViewUpdater;
    IGLiveViewerListViewController *_viewerListViewController;
    IGLiveWithBroadcastActionSheetController *_liveWithActionSheetController;
    IGLiveWithBroadcastView *_liveWithBroadcastView;
    IGLiveBroadcastEventController *_liveBroadcastEventController;
    long long _viewerCountRefreshThreshold;
    UIView *_liveWithInviteSheetBackground;
    FBTimer *_callStatusDismissTimer;
    IGUser *_liveWithGuest;
    long long _liveWithState;
    IGLiveBroadcastView *_contentView;
    IGLiveBroadcastDebugView *_debugOverlayView;
    IGCameraViewController *_cameraViewController;
    IGUserSession *_userSession;
    IGLiveBroadcastLoggingContext *_loggingContext;
    UILocalNotification *_interruptionLocalNotification;
    IGLiveInviteSheetViewController *_inviteSheetViewController;
    IGLiveBroadcastViewerListViewDataSource *_viewerListDataSource;
    IGDirectVerticalShareSheetController *_viewerInviteController;
    IGLiveBroadcastInviteLoggingContext *_viewerInviteLoggingContext;
    IGLiveHalfSheetTransition *_halfSheetTransition;
    IGLiveBroadcastResourceViewController *_liveResourceViewController;
    IGLiveBroadcastConfig *_liveBroadcastConfig;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    IGLiveRequestToJoinCommentsUpdater *_requestToJoinCommentsUpdater;
    IGLiveRequestToJoinService *_requestToJoinService;
    IGLiveWaveService *_waveService;
}

@property(retain, nonatomic) IGLiveWaveService *waveService; // @synthesize waveService=_waveService;
@property(retain, nonatomic) IGLiveRequestToJoinService *requestToJoinService; // @synthesize requestToJoinService=_requestToJoinService;
@property(retain, nonatomic) IGLiveRequestToJoinCommentsUpdater *requestToJoinCommentsUpdater; // @synthesize requestToJoinCommentsUpdater=_requestToJoinCommentsUpdater;
@property(retain, nonatomic) IGLiveRequestToJoinPuller *requestToJoinPuller; // @synthesize requestToJoinPuller=_requestToJoinPuller;
@property(nonatomic) _Bool isAnimatingFaceEffectTray; // @synthesize isAnimatingFaceEffectTray=_isAnimatingFaceEffectTray;
@property(nonatomic) _Bool isShowingFaceEffectTray; // @synthesize isShowingFaceEffectTray=_isShowingFaceEffectTray;
@property(readonly, nonatomic) IGLiveBroadcastConfig *liveBroadcastConfig; // @synthesize liveBroadcastConfig=_liveBroadcastConfig;
@property(retain, nonatomic) IGLiveBroadcastResourceViewController *liveResourceViewController; // @synthesize liveResourceViewController=_liveResourceViewController;
@property(retain, nonatomic) IGLiveHalfSheetTransition *halfSheetTransition; // @synthesize halfSheetTransition=_halfSheetTransition;
@property(readonly, nonatomic) IGLiveBroadcastInviteLoggingContext *viewerInviteLoggingContext; // @synthesize viewerInviteLoggingContext=_viewerInviteLoggingContext;
@property(readonly, nonatomic) IGDirectVerticalShareSheetController *viewerInviteController; // @synthesize viewerInviteController=_viewerInviteController;
@property(retain, nonatomic) IGLiveBroadcastViewerListViewDataSource *viewerListDataSource; // @synthesize viewerListDataSource=_viewerListDataSource;
@property(nonatomic) __weak IGLiveInviteSheetViewController *inviteSheetViewController; // @synthesize inviteSheetViewController=_inviteSheetViewController;
@property(retain, nonatomic) UILocalNotification *interruptionLocalNotification; // @synthesize interruptionLocalNotification=_interruptionLocalNotification;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) IGLiveBroadcastLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(readonly, nonatomic) IGLiveBroadcastDebugView *debugOverlayView; // @synthesize debugOverlayView=_debugOverlayView;
@property(readonly, nonatomic) IGLiveBroadcastView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long liveWithState; // @synthesize liveWithState=_liveWithState;
@property(retain, nonatomic) IGUser *liveWithGuest; // @synthesize liveWithGuest=_liveWithGuest;
@property(retain, nonatomic) FBTimer *callStatusDismissTimer; // @synthesize callStatusDismissTimer=_callStatusDismissTimer;
@property(readonly, nonatomic) UIView *liveWithInviteSheetBackground; // @synthesize liveWithInviteSheetBackground=_liveWithInviteSheetBackground;
@property(nonatomic) long long viewerCountRefreshThreshold; // @synthesize viewerCountRefreshThreshold=_viewerCountRefreshThreshold;
@property(nonatomic) _Bool didHaveJoinedGuests; // @synthesize didHaveJoinedGuests=_didHaveJoinedGuests;
@property(readonly, nonatomic) _Bool enableLiveWith; // @synthesize enableLiveWith=_enableLiveWith;
@property(readonly, nonatomic) IGLiveBroadcastEventController *liveBroadcastEventController; // @synthesize liveBroadcastEventController=_liveBroadcastEventController;
@property(readonly, nonatomic) IGLiveWithBroadcastView *liveWithBroadcastView; // @synthesize liveWithBroadcastView=_liveWithBroadcastView;
@property(readonly, nonatomic) IGLiveWithBroadcastActionSheetController *liveWithActionSheetController; // @synthesize liveWithActionSheetController=_liveWithActionSheetController;
@property(nonatomic) __weak IGLiveViewerListViewController *viewerListViewController; // @synthesize viewerListViewController=_viewerListViewController;
@property(readonly, nonatomic) IGLiveCommentViewUpdater *commentViewUpdater; // @synthesize commentViewUpdater=_commentViewUpdater;
@property(readonly, nonatomic) IGLiveBroadcastActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) IGLiveFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) IGLiveDebugInfoVideoProcessor *debugVideoProcessor; // @synthesize debugVideoProcessor=_debugVideoProcessor;
@property(readonly, nonatomic) IGLiveBroadcastProductionManager *productionManager; // @synthesize productionManager=_productionManager;
@property(readonly, nonatomic) IGLiveBroadcastToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(nonatomic) __weak id <IGLiveBroadcastActiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFaceEffectTrayViewController *faceEffectTrayViewController; // @synthesize faceEffectTrayViewController=_faceEffectTrayViewController;
- (void).cxx_destruct;
- (void)faceEffectTrayViewControllerDidSelectFilter:(id)arg1;
- (void)faceEffectTrayViewControllerDidHideView:(id)arg1;
- (void)faceEffectTrayViewControllerDidShowView:(id)arg1;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 feedItem:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (void)dismissResourceViewController;
- (void)rejectButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)acceptButtonTappedInPrivacyConfirmationViewController:(id)arg1;
- (void)liveWithActionSheetController:(id)arg1 didTapInviteUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapInviteLiveWithUser:(id)arg2;
- (void)actionSheetControllerDidDisplayActionSheet:(id)arg1;
- (void)actionSheetController:(id)arg1 didReportComment:(id)arg2 isSpam:(_Bool)arg3;
- (void)actionSheetController:(id)arg1 didHideFromUser:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapUnpinComment:(id)arg2;
- (void)actionSheetController:(id)arg1 didTapPinComment:(id)arg2;
- (void)actionSheetControllerDidTapEndBroadcast:(id)arg1;
- (void)requestToJoinToggleDidFailWithOldValue:(_Bool)arg1;
- (void)toggleRequestToJoinState:(_Bool)arg1 newState:(_Bool)arg2;
- (void)actionSheetControllerDidTapDisableRequestToJoin:(id)arg1;
- (void)actionSheetControllerDidTapEnableRequestToJoin:(id)arg1;
- (void)actionSheetControllerDidTapUnmuteComment:(id)arg1;
- (void)actionSheetControllerDidTapMuteComment:(id)arg1;
- (void)feedbackControllerDidFetchCommentMuteStatus:(_Bool)arg1;
- (void)feedbackController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)feedbackControllerDidFailToUnmuteComments:(id)arg1;
- (void)feedbackControllerDidFailToMuteComments:(id)arg1;
- (void)feedbackController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didHaveBroadcastUpdate:(id)arg2;
- (void)feedbackController:(id)arg1 hasLikerProfileImageReadyToDisplay:(id)arg2 likeCount:(long long)arg3 fromSelf:(_Bool)arg4 overDuration:(double)arg5;
- (void)feedbackController:(id)arg1 hasNumLikesReadyToDisplay:(long long)arg2 fromSelf:(_Bool)arg3 overDuration:(double)arg4 likeAnimationType:(unsigned long long)arg5;
- (void)feedbackController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)feedbackController:(id)arg1 didRemoveComment:(id)arg2;
- (void)feedbackController:(id)arg1 hasCommentsReadyToDisplay:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)broadcastViewDidRequestHideFaceEffectTray:(id)arg1;
- (void)broadcastViewDidTapFaceEffectButton:(id)arg1;
- (void)broadcastViewDidTapLiveResourceTooltip:(id)arg1;
- (void)broadcastViewDidTapLiveResourceButton:(id)arg1;
- (void)broadcastViewDidTapDismissGuestButton:(id)arg1;
- (void)doubleTappedInBroadcastView:(id)arg1;
- (void)broadcastViewDidTapCancelCallButton:(id)arg1;
- (void)broadcastViewDidExpandViewerList:(id)arg1;
- (void)broadcastViewDidTapLiveWithTooltip:(id)arg1;
- (void)liveWithInviteButtonTappedInBroadcastView:(id)arg1;
- (void)viewerInviteButtonTappedInBroadcastView:(id)arg1;
- (void)switchCameraButtonTappedInBroadcastView:(id)arg1;
- (void)closeButtonTappedInBroadcastView:(id)arg1;
- (void)moreButtonTappedInBroadcastView:(id)arg1;
- (void)broadcastView:(id)arg1 didChangeZoomScaleWithDelta:(double)arg2;
- (void)broadcastView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 shouldExpandViewerList:(_Bool)arg4 cell:(id)arg5;
- (void)broadcastView:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)broadcastView:(id)arg1 didEnterCommentText:(id)arg2 commentLoggingExtras:(id)arg3;
- (_Bool)broadcastViewCanShowKeyboard:(id)arg1;
- (void)broadcastViewDidUnpinCurrentComment:(id)arg1;
- (_Bool)broadcastViewCanToggleCommentsHeight:(id)arg1;
- (void)broadcastView:(id)arg1 didTapWithGestureRecognizer:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)presentInviteSheet:(id)arg1;
- (void)presentViewerList;
- (struct IGCameraPreviewInfo)getCameraInfo;
- (void)scheduleInterruptionLocalNotification;
- (void)cancelInterruptionLocalNotification;
- (void)_hideDarkOverlay;
- (void)stopPullingForRequestToJoin;
- (void)startPullingForRequestToJoin;
- (void)setDoubleTapGestureEnabled:(_Bool)arg1;
- (void)hideAREffectInstructions;
- (void)showAREffectInstructions:(id)arg1 forDuration:(double)arg2;
- (void)faceEffectTrayViewDidDisappear;
- (void)faceEffectTrayViewDidAppearWithHeight:(double)arg1;
- (void)liveBroadcastControllerDidDismissFromCall:(id)arg1 reason:(long long)arg2;
- (void)liveBroadcastController:(id)arg1 didFailInvitationForUser:(id)arg2;
- (void)liveBroadcastControllerDidGetDeclinedInvitation:(id)arg1;
- (void)cancelPendingInvitationForReason:(long long)arg1;
- (void)liveBroadcastControllerDidReceiveInvitation:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didUpdateStatusToConnectingForUserId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didRemoveVideoId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didAddVideoInView:(id)arg2 videoId:(id)arg3;
- (void)liveBroadcastController:(id)arg1 broadcastForSession:(id)arg2 didFailWithError:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didFailStartBroadcastForSession:(id)arg2 error:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didChangeBitrate:(double)arg2;
- (void)liveBroadcastControllerDidReconnect:(id)arg1;
- (void)liveBroadcastControllerDidLoseConnection:(id)arg1;
- (void)liveBroadcastControllerDidResume:(id)arg1 videoId:(id)arg2;
- (void)liveBroadcastControllerDidStall:(id)arg1 videoId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didFailCreateSessionWithError:(id)arg2 shouldUseMessageFromError:(_Bool)arg3;
- (void)liveBroadcastController:(id)arg1 didUpdateBroadcastWithStats:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didEndSession:(id)arg2 diskRecordingResults:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didStartBroadcastForSession:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didConnectToServerForSession:(id)arg2 withSpeedTestSuccess:(_Bool)arg3;
- (void)captureManagerIsReadyToProcessNewFaceEffect:(id)arg1;
- (void)captureManagerDidEndInterruption:(id)arg1;
- (void)captureManagerWasInterrupted:(id)arg1;
- (void)captureManagerDidChangeCamera:(id)arg1 toPosition:(long long)arg2;
- (void)captureManagerWillChangeCamera:(id)arg1;
- (void)captureManager:(id)arg1 didCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)requestToJoinEnabled;
- (void)hideViewerInviteController;
- (void)hideLiveWithInviteSheet;
- (void)hideFaceEffectTray;
- (void)showFaceEffectTray;
- (void)toggleFaceEffectTray;
- (void)showUnableToJoinMessageForUser:(id)arg1;
- (void)showDeclinedJoinMessageForUser:(id)arg1;
- (void)hideBroadcastFromUser:(id)arg1;
- (void)handleBroadcastEvent:(long long)arg1;
- (void)showCallStatusBarWithUser:(id)arg1;
- (void)inviteUser:(id)arg1;
- (void)showOverlayForNetworkIssue;
- (void)displayBroadcastPauseOverlayForReason:(long long)arg1;
- (void)resumeBroadcastIfPossible;
- (void)pauseBroadcastWithReason:(long long)arg1;
- (void)endBroadcastSessionWithReason:(long long)arg1 error:(id)arg2;
- (void)endFailedBroadcastSessionWithErrorMessage:(id)arg1 error:(id)arg2;
- (void)endSuccessfulBroadcastSessionWithReason:(long long)arg1 isPolicyViolation:(_Bool)arg2 policyViolationReason:(id)arg3;
- (void)displayNoViewersSystemCommentIfNeeded;
- (void)displayStartupSystemComment;
- (id)broadcastCaptureManager;
- (id)broadcastController;
- (void)adjustViewHeightsForKeyboardHeight:(double)arg1;
- (_Bool)isLiveResourceShowing;
- (void)presentLiveResourceViewController;
- (void)configureLiveResourceViewControllerWithType:(id)arg1 resourceData:(id)arg2;
- (_Bool)isLiveReshareSheetShowing;
- (_Bool)isViewerListShowing;
- (_Bool)isLiveWithInviteSheetShowing;
- (void)_handleSoftPolicyViolationReason:(id)arg1;
- (void)directVerticalShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directVerticalShareSheetControllerDidDismissReshareSheet:(id)arg1;
- (void)directVerticalShareSheetControllerDidSelect:(id)arg1 directRecipients:(id)arg2 externalServices:(id)arg3 text:(id)arg4;
- (void)directVerticalShareSheetController:(id)arg1 didTapReshareToStoryButtonWithPresentingViewController:(id)arg2;
- (void)liveInviteSheetDidDismissWithSelectedUser:(id)arg1;
- (void)presentLiveWithInviteSheetView;
- (void)onAppWillTerminate:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)onDidReceiveMemoryWarning:(id)arg1;
- (void)onWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) UIView *cameraGesturesContainerView;
- (double)safeAreaCornerRadius;
- (void)setCameraViewController:(id)arg1;
- (void)setStartingCameraPosition:(long long)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 broadcastToolbox:(id)arg3 enableLiveWith:(_Bool)arg4 liveBroadcastConfig:(id)arg5 faceEffectManager:(id)arg6 selectedFaceEffectIndex:(long long)arg7 sourceViewController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

