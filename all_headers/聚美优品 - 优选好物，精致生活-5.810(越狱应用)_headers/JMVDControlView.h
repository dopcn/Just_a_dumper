//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, JMVDDurationLabel, JMVDFullScreenButton, JMVDGoodsListButton, JMVDLoadingView, JMVDPlayButton, JMVDSeekBar, JMVDTitleView, JMVDTouchView, MASConstraint;

@interface JMVDControlView : UIView
{
    _Bool _isFullScreen;
    CAGradientLayer *_gradientLayer;
    MASConstraint *_goodsBtnWidthContraint;
    MASConstraint *_goodsBtnLeadingContraint;
    UIView *_topContainer;
    UIView *_bottomContainer;
    JMVDTitleView *_titleView;
    JMVDLoadingView *_loadingView;
    JMVDTouchView *_touchView;
    JMVDPlayButton *_playBtn;
    JMVDSeekBar *_seekBar;
    JMVDFullScreenButton *_fullScreenBtn;
    JMVDDurationLabel *_durationLabel;
    JMVDDurationLabel *_progressLabel;
    JMVDGoodsListButton *_goodsListBtn;
}

@property(retain, nonatomic) JMVDGoodsListButton *goodsListBtn; // @synthesize goodsListBtn=_goodsListBtn;
@property(retain, nonatomic) JMVDDurationLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) JMVDDurationLabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) JMVDFullScreenButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
@property(retain, nonatomic) JMVDSeekBar *seekBar; // @synthesize seekBar=_seekBar;
@property(retain, nonatomic) JMVDPlayButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) JMVDTouchView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) JMVDLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) JMVDTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
@property(readonly, nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)hideAll;
- (void)resetAll;
- (void)updateGoodsListByShowState:(_Bool)arg1 enable:(_Bool)arg2;
- (void)configConstraintForSubViews;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isFullScreen:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

