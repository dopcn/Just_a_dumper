//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RecorderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "UMFeedbackDataDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, NSTimer, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel, UINavigationBar, UITableView, UIView, UIWebView, UMChatToolBar, UMFeedback, UMFullScreenPhotoView, UMRadialView, UMRecorder;
@protocol ChatViewDelegate;

@interface UMFeedbackViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UMFeedbackDataDelegate, UINavigationBarDelegate, UIAlertViewDelegate, RecorderDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIWebViewDelegate>
{
    _Bool needNavButton;
    _Bool _modalStyle;
    _Bool _isObserving;
    _Bool _isKeyboardShow;
    NSMutableArray *_topicAndReplies;
    id <ChatViewDelegate> _delegate;
    UIView *_feedbackView;
    UIWebView *_faqView;
    UIActivityIndicatorView *_faqViewIndicator;
    UIButton *_faqButton;
    UIButton *_feedbackButton;
    UIView *_lineView;
    long long _topOffset;
    double _topViewOffset;
    UINavigationBar *_navBar;
    UITableView *_mTableView;
    UIImageView *_outgoingBubbleImageView;
    UIImageView *_incomingBubbleImageView;
    UMChatToolBar *_inputToolBar;
    UIView *_infoView;
    UIButton *_infoButton;
    UILabel *_infoLabel;
    NSIndexPath *_currentIndexPath;
    UMFeedback *_feedback;
    long long _previousBarStyle;
    UIColor *_titleColor;
    UMRecorder *_recorder;
    unsigned long long _playRecordButtonAnimationIndex;
    NSTimer *_playRecordButtonAnimationTimer;
    UMRadialView *_radialView;
    UMFullScreenPhotoView *_fullScreenView;
    long long _currentOrientation;
}

@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) UMFullScreenPhotoView *fullScreenView; // @synthesize fullScreenView=_fullScreenView;
@property(retain, nonatomic) UMRadialView *radialView; // @synthesize radialView=_radialView;
@property(retain, nonatomic) NSTimer *playRecordButtonAnimationTimer; // @synthesize playRecordButtonAnimationTimer=_playRecordButtonAnimationTimer;
@property(nonatomic) unsigned long long playRecordButtonAnimationIndex; // @synthesize playRecordButtonAnimationIndex=_playRecordButtonAnimationIndex;
@property(retain, nonatomic) UMRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) long long previousBarStyle; // @synthesize previousBarStyle=_previousBarStyle;
@property(retain, nonatomic) UMFeedback *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UMChatToolBar *inputToolBar; // @synthesize inputToolBar=_inputToolBar;
@property(retain, nonatomic) UIImageView *incomingBubbleImageView; // @synthesize incomingBubbleImageView=_incomingBubbleImageView;
@property(retain, nonatomic) UIImageView *outgoingBubbleImageView; // @synthesize outgoingBubbleImageView=_outgoingBubbleImageView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) double topViewOffset; // @synthesize topViewOffset=_topViewOffset;
@property(nonatomic) long long topOffset; // @synthesize topOffset=_topOffset;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIButton *faqButton; // @synthesize faqButton=_faqButton;
@property(retain, nonatomic) UIActivityIndicatorView *faqViewIndicator; // @synthesize faqViewIndicator=_faqViewIndicator;
@property(retain, nonatomic) UIWebView *faqView; // @synthesize faqView=_faqView;
@property(retain, nonatomic) UIView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic) __weak id <ChatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool modalStyle; // @synthesize modalStyle=_modalStyle;
@property(retain, nonatomic) NSMutableArray *topicAndReplies; // @synthesize topicAndReplies=_topicAndReplies;
- (void).cxx_destruct;
- (void)stopRecordAndPlayback;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)sendButtonLongPressed:(id)arg1;
- (void)startRecordWithSender:(id)arg1;
- (void)recordButtonTouchDownAction:(id)arg1;
- (void)hideRecordView;
- (void)recordButtonDragEnterAction:(id)arg1;
- (void)audioPlayerDidFinishPlaying;
- (void)updateDuration:(double)arg1;
- (void)recordButtonTouchUpInside:(id)arg1;
- (void)recordButtonTouchUpOutside:(id)arg1;
- (void)showRecordView;
- (void)showCountInfo:(long long)arg1;
- (void)showWarningView;
- (void)showCancelView;
- (void)recordButtonDragExitAction:(id)arg1;
- (id)audioPath;
- (void)refreshData;
- (void)playRecordButtonAnimationAction:(id)arg1;
- (void)startPlaybackWithSender:(id)arg1;
- (void)stopPlayback;
- (void)playRecordButtonPressed:(id)arg1;
- (void)thumbButtonPressed:(id)arg1;
- (void)touchFeedbackView;
- (void)touchFaqView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)sectionTapped:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollComposerTextViewToBottomAnimated:(_Bool)arg1;
- (void)adjustInputToolbarHeightByDelta:(double)arg1;
- (void)adjustInputToolbarForComposerTextViewContentSizeChange:(double)arg1;
- (_Bool)inputToolbarHasReachedMaximumHeight;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)jsq_removeObservers;
- (void)jsq_addObservers;
- (void)close:(id)arg1;
- (struct CGSize)getViewSize:(long long)arg1;
- (void)keyboardAction:(id)arg1 isShow:(_Bool)arg2;
- (void)keyboardDidShow;
- (void)keyboardWillHideAction:(id)arg1;
- (void)keyboardWillShowAction:(id)arg1;
- (void)keyboardWillChangeFrameAction:(id)arg1;
- (void)postFinishedWithError:(id)arg1;
- (void)updateTextField:(id)arg1;
- (void)getFinishedWithError:(id)arg1;
- (void)updateTableView:(id)arg1;
- (void)updateData:(_Bool)arg1;
- (void)sendData:(id)arg1;
- (void)sendButtonPressed:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentPhotoLibrary:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)setIsEditMode:(_Bool)arg1;
- (void)handleLongPress:(id)arg1;
- (void)tapViewAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateLayoutWithOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)positionForBar:(id)arg1;
- (void)backToPrevious;
- (void)setBackButton:(id)arg1;
- (void)setModalStyle;
- (id)mutableDeepCopy:(id)arg1;
- (void)loadView;
- (void)loadViewFrame;
- (void)reloadViewFrame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

