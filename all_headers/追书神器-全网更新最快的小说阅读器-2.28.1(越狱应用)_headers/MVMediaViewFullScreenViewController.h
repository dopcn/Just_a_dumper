//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MVPlayView, MVVideoPlayer, NSString, UIButton, UILabel, UIProgressView, UIView;
@protocol MVMediaViewFullScreenDelegate;

@interface MVMediaViewFullScreenViewController : UIViewController
{
    _Bool statusBar;
    long long orientation;
    UIButton *_closeButton;
    UIView *closeButtonView;
    UIView *_markView;
    UILabel *_currentTimeLabel;
    UIButton *_soundButton;
    UILabel *_totalTimeLabel;
    UIProgressView *_progressView;
    UIView *_playButtonView;
    UIButton *_playButton;
    int _markViewClickedTimes;
    UIButton *_installButton;
    _Bool _playFinished;
    MVPlayView *_playView;
    id <MVMediaViewFullScreenDelegate> _delegate;
    MVVideoPlayer *_player;
    NSString *_adCall;
}

@property(copy, nonatomic) NSString *adCall; // @synthesize adCall=_adCall;
@property(retain, nonatomic) MVVideoPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <MVMediaViewFullScreenDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MVPlayView *playView; // @synthesize playView=_playView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)installButtonAction:(id)arg1;
- (void)addInstallButton;
- (void)setMarkContentViewWithAlpha:(int)arg1;
- (void)markContentViewWithTimes:(id)arg1;
- (void)clickMarkViewAction:(id)arg1;
- (void)playButtonAction;
- (void)soundAction:(id)arg1;
- (void)updateMakeConstraintsAllUI;
- (void)addMaskView;
- (void)observeValueForKeyPath_v272:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutPlayView;
- (void)closeAction:(id)arg1;
- (void)addCloseButton;
- (void)updateMarkViewContentUI;
- (void)initUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithPlayer:(id)arg1 adCall:(id)arg2 delegate:(id)arg3;

@end

