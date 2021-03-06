//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSVSViewController.h"

#import "MISVoiceRecognitionModelDelegate-Protocol.h"
#import "MISVoiceSearchHalfScreenViewDelegate-Protocol.h"
#import "MMSVoiceSearchKeyboardEntryViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MISVoiceRecognitionModel, MISVoiceSearchHalfScreenView, MMSError, MMSVoiceResourceRequestModel, MMSVoiceSearchNewMicroPhoneView, NSDate, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel, UIView;
@protocol MISVoiceSearchHalfScreenViewControllerDelegate;

@interface MISVoiceSearchHalfScreenViewController : MMSVSViewController <MISVoiceSearchHalfScreenViewDelegate, MISVoiceRecognitionModelDelegate, UIGestureRecognizerDelegate, MMSVoiceSearchKeyboardEntryViewControllerDelegate>
{
    _Bool _isFirstDidAppear;
    _Bool _isShowGuideAfterCancelVoice;
    _Bool _isInvalidClickButton;
    long long _startVoiceNumber;
    _Bool _shouldCloseHalfScreen;
    _Bool _touchIsUp;
    _Bool _canCancelPartialPreSearch;
    _Bool _isFromWakeUp;
    _Bool _recognitionValidCharacter;
    _Bool _isVolumeListening;
    _Bool _isRecoverGuideTips;
    _Bool _isRecoverGuideTipsWithError;
    _Bool _canCancelTimeOutSelector;
    _Bool _shouldDoEntryAnimation;
    _Bool _isTouchDownFromInnerButton;
    _Bool _isResignActive;
    _Bool _isStartAfterResignActive;
    _Bool _isThisTimeEnableAutoRecord;
    _Bool _needCancelPreSearch;
    _Bool _isRecorderOn;
    _Bool _isThisTimeEnablePreSearch;
    id <MISVoiceSearchHalfScreenViewControllerDelegate> _delegate;
    unsigned long long _voiceRecognitionRecordType;
    NSDictionary *_parameters;
    unsigned long long _status;
    NSDate *_buttonTouchDownDate;
    long long _callType;
    MISVoiceSearchHalfScreenView *_voiceSearchView;
    UIImageView *_shadowView;
    UILabel *_backgroundView;
    UIView *_navigationBarMaskView;
    MMSVoiceSearchNewMicroPhoneView *_microPhoneView;
    NSLayoutConstraint *_voiceSearchViewTopConstraint;
    MISVoiceRecognitionModel *_voiceRecognitionModel;
    NSString *_recognitionWord;
    double _timeForOneGroupTips;
    NSMutableArray *_showTipsList;
    MMSError *_mmsError;
    MMSVoiceResourceRequestModel *_voiceResRequestModel;
    NSString *_lastPartialPreSearchQuery;
    NSString *_certainRecogString;
}

@property(retain, nonatomic) NSString *certainRecogString; // @synthesize certainRecogString=_certainRecogString;
@property(retain, nonatomic) NSString *lastPartialPreSearchQuery; // @synthesize lastPartialPreSearchQuery=_lastPartialPreSearchQuery;
@property(nonatomic) _Bool isThisTimeEnablePreSearch; // @synthesize isThisTimeEnablePreSearch=_isThisTimeEnablePreSearch;
@property(nonatomic) _Bool isRecorderOn; // @synthesize isRecorderOn=_isRecorderOn;
@property(nonatomic) _Bool needCancelPreSearch; // @synthesize needCancelPreSearch=_needCancelPreSearch;
@property(nonatomic) _Bool isThisTimeEnableAutoRecord; // @synthesize isThisTimeEnableAutoRecord=_isThisTimeEnableAutoRecord;
@property(nonatomic) _Bool isStartAfterResignActive; // @synthesize isStartAfterResignActive=_isStartAfterResignActive;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isTouchDownFromInnerButton; // @synthesize isTouchDownFromInnerButton=_isTouchDownFromInnerButton;
@property(nonatomic) _Bool shouldDoEntryAnimation; // @synthesize shouldDoEntryAnimation=_shouldDoEntryAnimation;
@property(retain, nonatomic) MMSVoiceResourceRequestModel *voiceResRequestModel; // @synthesize voiceResRequestModel=_voiceResRequestModel;
@property(retain, nonatomic) MMSError *mmsError; // @synthesize mmsError=_mmsError;
@property(nonatomic) _Bool canCancelTimeOutSelector; // @synthesize canCancelTimeOutSelector=_canCancelTimeOutSelector;
@property(nonatomic) _Bool isRecoverGuideTipsWithError; // @synthesize isRecoverGuideTipsWithError=_isRecoverGuideTipsWithError;
@property(nonatomic) _Bool isRecoverGuideTips; // @synthesize isRecoverGuideTips=_isRecoverGuideTips;
@property(retain, nonatomic) NSMutableArray *showTipsList; // @synthesize showTipsList=_showTipsList;
@property(nonatomic) double timeForOneGroupTips; // @synthesize timeForOneGroupTips=_timeForOneGroupTips;
@property(nonatomic) _Bool isVolumeListening; // @synthesize isVolumeListening=_isVolumeListening;
@property(retain, nonatomic) NSString *recognitionWord; // @synthesize recognitionWord=_recognitionWord;
@property(nonatomic) _Bool recognitionValidCharacter; // @synthesize recognitionValidCharacter=_recognitionValidCharacter;
@property(retain, nonatomic) MISVoiceRecognitionModel *voiceRecognitionModel; // @synthesize voiceRecognitionModel=_voiceRecognitionModel;
@property(retain, nonatomic) NSLayoutConstraint *voiceSearchViewTopConstraint; // @synthesize voiceSearchViewTopConstraint=_voiceSearchViewTopConstraint;
@property(retain, nonatomic) MMSVoiceSearchNewMicroPhoneView *microPhoneView; // @synthesize microPhoneView=_microPhoneView;
@property(retain, nonatomic) UIView *navigationBarMaskView; // @synthesize navigationBarMaskView=_navigationBarMaskView;
@property(retain, nonatomic) UILabel *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) MISVoiceSearchHalfScreenView *voiceSearchView; // @synthesize voiceSearchView=_voiceSearchView;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
@property(retain, nonatomic) NSDate *buttonTouchDownDate; // @synthesize buttonTouchDownDate=_buttonTouchDownDate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool isFromWakeUp; // @synthesize isFromWakeUp=_isFromWakeUp;
@property(nonatomic) unsigned long long voiceRecognitionRecordType; // @synthesize voiceRecognitionRecordType=_voiceRecognitionRecordType;
@property(nonatomic) __weak id <MISVoiceSearchHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)registerNetworkDetection;
- (void)alertViewWillShow;
- (void)bluetoothConnectHandle:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)registerNotifications;
- (_Bool)isEnableAutoRecord;
- (unsigned long long)selectedLanguageType;
- (void)addErrorActionLogWithError:(id)arg1 errorType:(long long)arg2 errorJumpType:(long long)arg3 actualErrorJumpType:(long long)arg4 retryCount:(long long)arg5;
- (void)addErrorShowLogWithError:(id)arg1 errorType:(long long)arg2 errorJumpType:(long long)arg3;
- (void)uploadRecordPermission;
- (void)receiveApplicationWillEnterForegroundNotificaton:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)playSoundWithToneKey:(id)arg1;
- (id)statisticsManager;
- (void)jumpMicPrhoneGrantGuide;
- (void)networkTimeOutRetryAction;
- (void)errorJumpAction;
- (long long)getErrorJumpType;
- (_Bool)errorCodeIsInErrorJumpList:(id)arg1;
- (void)showErrorWithError:(id)arg1 title:(id)arg2 details:(id)arg3 isShowSetting:(_Bool)arg4;
- (void)showErrorWithRemoteResourceWithError:(id)arg1 title:(id)arg2 details:(id)arg3 isShowSetting:(_Bool)arg4;
- (void)showErrorPrompt:(id)arg1 isShowSetting:(_Bool)arg2;
- (void)dealWithVoiceError:(id)arg1 status:(unsigned long long)arg2 errorString:(id)arg3;
- (void)voiceDidCloseRecorder;
- (void)voiceDidFailRecogniseWithError:(id)arg1 status:(unsigned long long)arg2 errorString:(id)arg3;
- (void)voiceDidCancelRecognise:(id)arg1;
- (void)voiceRecogFinishUIConfig;
- (void)voice:(id)arg1 didRecogniseWordsWithoutNLU:(id)arg2;
- (void)voice:(id)arg1 didRecogniseChunkAEResult:(id)arg2 setCookies:(id)arg3 baseUrl:(id)arg4 htmlData:(id)arg5;
- (void)voice:(id)arg1 didRecogniseWords:(id)arg2;
- (void)voiceDidStopRecord:(id)arg1;
- (void)preSearchAfterDelayTime;
- (void)dealWithIntermediateResult:(id)arg1;
- (void)voiceRecogniseWordInFlushCertainString:(id)arg1 unCertainString:(id)arg2;
- (void)voiceRecogniseWordInFlushData:(id)arg1;
- (void)voiceDidStartRecord:(id)arg1;
- (void)voiceNetworkLogFeedBack:(id)arg1;
- (void)cancelRecognitionTimeOut;
- (void)voiceRecognitionTimeOut;
- (double)loadingTimeForTimeout;
- (void)setMicroPhoneButtonStatus:(long long)arg1;
- (void)checkIfShowGuideView;
- (_Bool)isWakeUpOn;
- (id)getSpeechGuideTitle:(_Bool)arg1;
- (void)showGuideViewisCarousel:(_Bool)arg1 isError:(_Bool)arg2;
- (void)showingGuides:(id)arg1 lastIndex:(long long)arg2;
- (void)settingButtonDidClicked;
- (void)showClickTooShortErrorPrompt;
- (_Bool)checkTouchDownTimeIsTooShort;
- (void)microPhoneTouchCancel;
- (void)microPhoneTouchDragExit;
- (void)microPhoneTouchDragEnter;
- (void)microPhoneTouchUpOutside;
- (void)microPhoneTouchUpInside;
- (void)microPhoneTouchDown;
- (void)addLogForTouchUpInside:(_Bool)arg1;
- (void)begingNewVoiceSearch;
- (void)finishPressSpeaking;
- (void)closeExternAction;
- (void)closeButtonDidClicked;
- (void)addModeStatisticsInfo;
- (void)addUserStatisticsInfo;
- (void)doJSCallBackWithWord:(id)arg1;
- (_Bool)isEnablePreSearch;
- (void)cancelPreSearch;
- (id)preSearchPartialUrlWithQuery:(id)arg1;
- (void)partialPreSearchWithQueryOnMain;
- (void)partialPreSearchWithQuery:(id)arg1;
- (id)csrcStringForPreSearch;
- (id)preSearchFinalUrlWithOriginUrl:(id)arg1;
- (_Bool)checkQueryIsNoSense:(id)arg1;
- (void)executeVoiceSearchWithSearchCommand:(id)arg1 allWords:(id)arg2;
- (void)doBoxSearchWithJsonResponse:(id)arg1 nBest:(id)arg2;
- (void)doBoxSearchWithHtmlData:(id)arg1 baseUrl:(id)arg2 nBest:(id)arg3;
- (void)doSearchRequest:(id)arg1;
- (void)doDefaultSearchCommandWithNbest:(id)arg1 byParsingError:(_Bool)arg2;
- (void)promptNoVoiceWhenServerError;
- (void)listenTimerFire;
- (void)stopVolumeListen;
- (void)fireVolumeListen;
- (void)cancelVoiceRecog:(_Bool)arg1;
- (void)setStatisticsManagerVoiceMode;
- (void)shortClickToStartAutoRecord;
- (void)asyncStartRecognition;
- (void)asyncStartRecognitionAfterPlayWakeUpSound:(_Bool)arg1;
- (void)configRecogModelParamForMMSServer;
- (void)configRecogModelSDKParam;
- (id)tipsItmes;
- (void)syncGuideTipsFromServer;
- (void)syncResourceFromServer;
- (void)syncGuideTips;
- (void)syncResource;
- (void)closeAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doStrongExitAnimation:(CDUnknownBlockType)arg1;
- (void)doStrongEntryAnimation:(_Bool)arg1;
- (void)setupEntranceButtons;
- (void)setupShadowView;
- (void)setupMainView;
- (void)setupMicroPhoneView;
- (void)backgroundViewClicked:(id)arg1;
- (void)setupBackGroundView;
- (void)showNetworkErrorViewWhenStrongEntryInit;
- (void)setupSubViews;
- (void)updateSmallRedDot;
- (long long)callTypeCategory;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showFunctionGuideView;
- (_Bool)isWakeupStatusDifferent;
- (_Bool)checkIfShowFunctiongGuideView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)isEnableAutoRecordWhenFirstShow;
- (void)startWakeUp;
- (void)asyncStartWakeUpRecognition;
- (void)loadView;
- (id)initWithParameters:(id)arg1 withCallType:(long long)arg2 isFromWakeUp:(_Bool)arg3;
- (void)addLogForDTime;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

