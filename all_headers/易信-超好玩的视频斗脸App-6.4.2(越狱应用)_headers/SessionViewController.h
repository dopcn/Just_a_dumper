//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXMessageViewController.h"

#import "DoubleAuidoTipAnimationViewDelegate-Protocol.h"
#import "DragMessageWithScrollUIProtocol-Protocol.h"
#import "GalleryViewDelegate-Protocol.h"
#import "InputActionDelegate-Protocol.h"
#import "SessionVCDeleteAllMessageProtocol-Protocol.h"
#import "SessionVCIntroductionViewProtocol-Protocol.h"
#import "SessionViewControllerForInputUIProtocol-Protocol.h"
#import "SessionViewControllerForTitleUIProtocol-Protocol.h"
#import "SessionViewControllerProtocol-Protocol.h"

@class BaseInputViewController, ChartletContentData, InputImageTipView, NSMutableDictionary, NSString, SessionAnimationOverlayViewHandler, SessionCommonNotificationHandler, SessionDoubleTapRecordAudio, SessionEmotHandler, SessionFileTransResultHandler, SessionGestureHandler, SessionImagePickViewControllerHandler, SessionLastMessageTip, SessionLayoutHandler, SessionMapLocationHandler, SessionMediaInputHandler, SessionPlayAudioHandler, SessionPlayMusicHandler, SessionReadReceiptMessageHandler, SessionReceiveMessageHandler, SessionRecordAudioHandler, SessionScrollToReadMessage, SessionSendMessageHandler, SessionSnapChatImageMessageHanlder, SessionTableView, SessionTableViewDelegate, SessionTelphoneTipViewHandler, SessionTipEventHandler, SessionTitleViewHandler, SessionTranspondMessageHandler, SessionTypingMessageHandler, SessionViewControllerCellEventHandler, SessionViewControllerProxy, TranspondMessageData, UIImageView, YXThemeImageView;
@protocol SessionMultiChatRecordViewControllerDelegate;

@interface SessionViewController : YXMessageViewController <SessionVCDeleteAllMessageProtocol, GalleryViewDelegate, InputActionDelegate, SessionViewControllerForInputUIProtocol, DragMessageWithScrollUIProtocol, SessionViewControllerProtocol, SessionViewControllerForTitleUIProtocol, SessionVCIntroductionViewProtocol, DoubleAuidoTipAnimationViewDelegate>
{
    _Bool _isFirstOpenSession;
    _Bool _isFromSearchResult;
    NSString *sessionID;
    SessionTableViewDelegate *sessionTableViewDelegate;
    long long initInputState;
    NSMutableDictionary *_externInfo;
    YXThemeImageView *_bkViewControllerImageView;
    UIImageView *_bkViewControllerAvatarImageView;
    UIImageView *_bkViewControllerMaskImageView;
    SessionTableView *_sessionTableView;
    YXThemeImageView *_gradientImageView;
    BaseInputViewController *_baseInputViewController;
    InputImageTipView *_imageTipView;
    SessionViewControllerCellEventHandler *_cellEventHandler;
    SessionTipEventHandler *_cellTipEventHandler;
    SessionViewControllerProxy *_sessionViewControllerProxy;
    SessionLastMessageTip *_sessionLastMessageTip;
    SessionSnapChatImageMessageHanlder *_snapChatMessageHanlder;
    SessionScrollToReadMessage *_scrollToReadMessageHandler;
    SessionImagePickViewControllerHandler *_imagePickerViewControllerHandler;
    SessionDoubleTapRecordAudio *_doubleTapRecordAudio;
    SessionRecordAudioHandler *_sessionRecordAudioHandler;
    SessionPlayAudioHandler *_sessionPlayAudioHandler;
    SessionPlayMusicHandler *_sessionPlayMusicHandler;
    SessionTelphoneTipViewHandler *_sessionTelphoneTipViewHandler;
    SessionAnimationOverlayViewHandler *_sessionAnimationOverlayViewHandler;
    SessionTypingMessageHandler *_sessionTypingMessageHandler;
    SessionFileTransResultHandler *_sessionFileTransResultHanlder;
    SessionReadReceiptMessageHandler *_sessionReadReceiptMessageHandler;
    SessionSendMessageHandler *_sessionSendMessageHandler;
    SessionReceiveMessageHandler *_sessionReceiveMessageHandler;
    SessionTitleViewHandler *_sessionTitleViewHandler;
    SessionMapLocationHandler *_sessionMapLocationHandler;
    SessionMediaInputHandler *_sessionMediaInputHandler;
    SessionCommonNotificationHandler *_sessionCommonNotificationHandler;
    SessionTranspondMessageHandler *_sessionTranspondMessageHandler;
    SessionGestureHandler *_sessionGestureHandler;
    SessionLayoutHandler *_sessionLayoutHandler;
    SessionEmotHandler *_sessionEmotHandler;
    NSString *_leftImageTipFileName;
    NSString *_rightImageTipFileName;
    ChartletContentData *_leftImageTipData;
    ChartletContentData *_rightImageTipData;
    id <SessionMultiChatRecordViewControllerDelegate> _smcrDelegate;
    NSString *_recentlyURLIdentifier;
    TranspondMessageData *_transpondMessageData;
    NSString *_suggestTextColorKey;
}

@property(retain, nonatomic) NSString *suggestTextColorKey; // @synthesize suggestTextColorKey=_suggestTextColorKey;
@property(retain, nonatomic) TranspondMessageData *transpondMessageData; // @synthesize transpondMessageData=_transpondMessageData;
@property(nonatomic) _Bool isFromSearchResult; // @synthesize isFromSearchResult=_isFromSearchResult;
@property(copy, nonatomic) NSString *recentlyURLIdentifier; // @synthesize recentlyURLIdentifier=_recentlyURLIdentifier;
@property(nonatomic) __weak id <SessionMultiChatRecordViewControllerDelegate> smcrDelegate; // @synthesize smcrDelegate=_smcrDelegate;
@property(retain, nonatomic) ChartletContentData *rightImageTipData; // @synthesize rightImageTipData=_rightImageTipData;
@property(retain, nonatomic) ChartletContentData *leftImageTipData; // @synthesize leftImageTipData=_leftImageTipData;
@property(retain, nonatomic) NSString *rightImageTipFileName; // @synthesize rightImageTipFileName=_rightImageTipFileName;
@property(retain, nonatomic) NSString *leftImageTipFileName; // @synthesize leftImageTipFileName=_leftImageTipFileName;
@property(retain, nonatomic) SessionEmotHandler *sessionEmotHandler; // @synthesize sessionEmotHandler=_sessionEmotHandler;
@property(retain, nonatomic) SessionLayoutHandler *sessionLayoutHandler; // @synthesize sessionLayoutHandler=_sessionLayoutHandler;
@property(retain, nonatomic) SessionGestureHandler *sessionGestureHandler; // @synthesize sessionGestureHandler=_sessionGestureHandler;
@property(retain, nonatomic) SessionTranspondMessageHandler *sessionTranspondMessageHandler; // @synthesize sessionTranspondMessageHandler=_sessionTranspondMessageHandler;
@property(retain, nonatomic) SessionCommonNotificationHandler *sessionCommonNotificationHandler; // @synthesize sessionCommonNotificationHandler=_sessionCommonNotificationHandler;
@property(retain, nonatomic) SessionMediaInputHandler *sessionMediaInputHandler; // @synthesize sessionMediaInputHandler=_sessionMediaInputHandler;
@property(retain, nonatomic) SessionMapLocationHandler *sessionMapLocationHandler; // @synthesize sessionMapLocationHandler=_sessionMapLocationHandler;
@property(retain, nonatomic) SessionTitleViewHandler *sessionTitleViewHandler; // @synthesize sessionTitleViewHandler=_sessionTitleViewHandler;
@property(retain, nonatomic) SessionReceiveMessageHandler *sessionReceiveMessageHandler; // @synthesize sessionReceiveMessageHandler=_sessionReceiveMessageHandler;
@property(retain, nonatomic) SessionSendMessageHandler *sessionSendMessageHandler; // @synthesize sessionSendMessageHandler=_sessionSendMessageHandler;
@property(retain, nonatomic) SessionReadReceiptMessageHandler *sessionReadReceiptMessageHandler; // @synthesize sessionReadReceiptMessageHandler=_sessionReadReceiptMessageHandler;
@property(retain, nonatomic) SessionFileTransResultHandler *sessionFileTransResultHanlder; // @synthesize sessionFileTransResultHanlder=_sessionFileTransResultHanlder;
@property(retain, nonatomic) SessionTypingMessageHandler *sessionTypingMessageHandler; // @synthesize sessionTypingMessageHandler=_sessionTypingMessageHandler;
@property(retain, nonatomic) SessionAnimationOverlayViewHandler *sessionAnimationOverlayViewHandler; // @synthesize sessionAnimationOverlayViewHandler=_sessionAnimationOverlayViewHandler;
@property(retain, nonatomic) SessionTelphoneTipViewHandler *sessionTelphoneTipViewHandler; // @synthesize sessionTelphoneTipViewHandler=_sessionTelphoneTipViewHandler;
@property(retain, nonatomic) SessionPlayMusicHandler *sessionPlayMusicHandler; // @synthesize sessionPlayMusicHandler=_sessionPlayMusicHandler;
@property(retain, nonatomic) SessionPlayAudioHandler *sessionPlayAudioHandler; // @synthesize sessionPlayAudioHandler=_sessionPlayAudioHandler;
@property(retain, nonatomic) SessionRecordAudioHandler *sessionRecordAudioHandler; // @synthesize sessionRecordAudioHandler=_sessionRecordAudioHandler;
@property(retain, nonatomic) SessionDoubleTapRecordAudio *doubleTapRecordAudio; // @synthesize doubleTapRecordAudio=_doubleTapRecordAudio;
@property(retain, nonatomic) SessionImagePickViewControllerHandler *imagePickerViewControllerHandler; // @synthesize imagePickerViewControllerHandler=_imagePickerViewControllerHandler;
@property(retain, nonatomic) SessionScrollToReadMessage *scrollToReadMessageHandler; // @synthesize scrollToReadMessageHandler=_scrollToReadMessageHandler;
@property(retain, nonatomic) SessionSnapChatImageMessageHanlder *snapChatMessageHanlder; // @synthesize snapChatMessageHanlder=_snapChatMessageHanlder;
@property(retain, nonatomic) SessionLastMessageTip *sessionLastMessageTip; // @synthesize sessionLastMessageTip=_sessionLastMessageTip;
@property(retain, nonatomic) SessionViewControllerProxy *sessionViewControllerProxy; // @synthesize sessionViewControllerProxy=_sessionViewControllerProxy;
@property(retain, nonatomic) SessionTipEventHandler *cellTipEventHandler; // @synthesize cellTipEventHandler=_cellTipEventHandler;
@property(retain, nonatomic) SessionViewControllerCellEventHandler *cellEventHandler; // @synthesize cellEventHandler=_cellEventHandler;
@property(retain, nonatomic) InputImageTipView *imageTipView; // @synthesize imageTipView=_imageTipView;
@property(retain, nonatomic) BaseInputViewController *baseInputViewController; // @synthesize baseInputViewController=_baseInputViewController;
@property(retain, nonatomic) YXThemeImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) SessionTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(retain, nonatomic) UIImageView *bkViewControllerMaskImageView; // @synthesize bkViewControllerMaskImageView=_bkViewControllerMaskImageView;
@property(retain, nonatomic) UIImageView *bkViewControllerAvatarImageView; // @synthesize bkViewControllerAvatarImageView=_bkViewControllerAvatarImageView;
@property(retain, nonatomic) YXThemeImageView *bkViewControllerImageView; // @synthesize bkViewControllerImageView=_bkViewControllerImageView;
@property(retain, nonatomic) NSMutableDictionary *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) long long initInputState; // @synthesize initInputState;
@property(retain, nonatomic) SessionTableViewDelegate *sessionTableViewDelegate; // @synthesize sessionTableViewDelegate;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID;
- (void).cxx_destruct;
- (void)doubleAudioTipAnimationViewCloseAction:(id)arg1;
- (void)doubleAudioTipAnimationViewDidDoubleTapped:(id)arg1;
- (void)doubleAudioTipAnimationViewAdditionDismissAnimation:(id)arg1;
- (void)doubleAudioTipAnimationViewAdditionShowAnimation:(id)arg1;
- (id)doubleAudioTipAnimationViewSessionTableView:(id)arg1;
- (void)showDoubleTipWithAnimation;
- (_Bool)shouldShowDoubleAudioTipAnimation:(id)arg1;
- (void)deleteMessage:(long long)arg1;
- (_Bool)isLastMessage:(long long)arg1;
- (_Bool)isCurrentInputFreeMessage;
- (_Bool)isRecordingAudio;
- (void)telphoneMessageButtonPressed;
- (void)freeMessageButtonPressed;
- (void)hideInputViewController;
- (void)showInputViewController;
- (_Bool)addSessionMessageDataToStatusManagerBySerialID:(long long)arg1;
- (int)beginTimetag;
- (unsigned long long)getUnreadMessageCount;
- (void)updateSessionID:(id)arg1 transpondMessageData:(id)arg2 initInputState:(long long)arg3 externInfo:(id)arg4;
- (void)initListenEvents;
- (void)layoutSessionViewController;
- (void)hideInputElementByTap;
- (void)openSessionView;
- (void)actionForExistSessionVCWhenOpen;
- (void)initBackgroundImageView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)scrollToFTSMessage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)initUIComponents;
- (void)initImageTipView;
- (void)initGradientView;
- (void)initSessionTableViewDelegate;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)deleteAllMessageByRightBarButton;
- (id)viewForGalleryItem:(id)arg1;
- (void)initInputViewController;
- (void)openURLByString:(id)arg1;
- (void)closeFreeMessageButtonPressed;
- (void)delegateShowVoiceRecordInFreeMessage;
- (void)selectedChartlet:(id)arg1;
- (void)imageTipItemClicked:(id)arg1;
- (void)hideImageTipView;
- (void)delegateTextChanged:(id)arg1;
- (void)delegateEndTypeingText;
- (void)delegateBeginTypeingText;
- (_Bool)delegateValidateTextLength:(id)arg1;
- (_Bool)delegateValidateSendTextMessage:(id)arg1;
- (_Bool)delegateSessionMsgShouldSend:(id)arg1;
- (void)inputTextViewSizeChanged;
- (void)hideInputView;
- (void)showInputView;
- (void)executeActionWhenScrollToButtom;
- (void)sessionTableViewDidScroll;
- (void)viewContactCard:(id)arg1 userType:(long long)arg2;
- (void)viewDidApprearAfterFirstOpen;
- (void)cleanCacheText;
- (void)initCacheText;
- (void)updateLastMessageForMessageList;
- (void)saveCacheText;
- (_Bool)isInSearchMode;
- (void)viewDidAppearWhenFirstOpen;
- (long long)sessionType;
- (void)viewWillAppearWhenFirstOpen;
- (_Bool)isUserInfoViewHide;
- (struct CGRect)getUserInfoViewFrame;
- (void)initRightBarButtonItem;
- (void)initTitleText;
- (void)onTelphoneIntroductionAlertView;
- (void)onFreeMessageIntroductionAlertView;
- (_Bool)openFreeMessageSessionIntroductionViewController;
- (void)showTelphoneIntroductionAlterView;
- (void)showFreeMessageIntroductionAlterView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

