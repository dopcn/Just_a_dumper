//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BDRecognizerDialog-Protocol.h"

@class BDRecognizerViewParamsObject, BDTheme, BDVoiceVisualizerController, BDVolumeVisualizerDataProvider, NSMutableArray, NSString, NSTimer, TTTAttributedLabel, UIButton, UIImageView, UILabel, UITableView, UIView;
@protocol BDRecognizerDialogDelegate;

@interface BDRecognizerFullScreenController : UIViewController <BDRecognizerDialog>
{
    id <BDRecognizerDialogDelegate> _delegate;
    NSTimer *_timer;
    NSTimer *_switchRecommendTimer;
    UILabel *_helpTitleLabel;
    UILabel *_helpTitleLabel2;
    TTTAttributedLabel *_statusMessageLabel;
    UILabel *_titleMessageLabel;
    double _lineHeight;
    unsigned long long _currentLine;
    struct _NSRange _changeTextRange;
    long long _currentStep;
    _Bool _isAnimating;
    _Bool _isIphone6Or6Plus;
    _Bool _isIphone6;
    _Bool _isIphone6Plus;
    UIImageView *_maskView;
    BDVoiceVisualizerController *_visualizerController;
    BDVolumeVisualizerDataProvider *_visualizerProvider;
    UILabel *_errorTitleLabel;
    UILabel *_errorDetailLabel;
    UILabel *_errorDetailLabel2;
    UILabel *_errorCodeLabel;
    struct CGRect viewFrame;
    UIButton *_helpImageButton;
    NSMutableArray *_recommendTextList;
    NSMutableArray *_recommendTextList2;
    NSMutableArray *_recommendTextSource1;
    NSMutableArray *_recommendTextSource2;
    NSMutableArray *_recommendTextCurrentSource;
    UITableView *_recommendList;
    UITableView *_recommendList2;
    struct CGRect _recommendRect;
    UILabel *_noSpeechNotice;
    UIButton *_startSpeakButton;
    UIButton *_initializationButton;
    UIButton *_speekFinishButton;
    UIButton *_retrySpeekButton;
    UIView *_centerLine;
    UIButton *_retryButton;
    UIButton *_recognitioningButton;
    UIImageView *_tipImageView;
    UIImageView *_helpContenDividingLine;
    UITableView *_helpContentView;
    NSMutableArray *_helpContentList;
    BDTheme *_recognizerViewTheme;
    BDRecognizerViewParamsObject *_params;
}

@property(nonatomic) id <BDRecognizerDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)changeDialogStatus:(int)arg1;
- (void)retryAction:(id)arg1;
- (void)speakFinishAction:(id)arg1;
- (void)closedAction:(id)arg1;
- (void)helpAction:(id)arg1;
- (struct _NSRange)rangeOfChangedText:(id)arg1;
- (void)freeSwitchRecommendTListimer;
- (void)freeUpdateStatusMessageLabelTimer;
- (void)updateText;
- (void)showStatusMessageWithMsg:(id)arg1 isCompleted:(_Bool)arg2;
- (void)hideHintWhenSpeechStart;
- (void)switchRecommendList;
- (void)showNoSpeechPage:(_Bool)arg1;
- (void)prepareRecommendList:(id)arg1;
- (void)showHintWhenNoSpeech;
- (void)setError:(int)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)showTitle:(id)arg1;
- (void)setRecognizedProgress:(long long)arg1;
- (void)setHelpTitle:(id)arg1;
- (long long)currentDecibel;
- (double)getLineHeight;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 param:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

