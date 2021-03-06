//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol BDDetailPlayerViewDelegate;

@interface BDDetailPlayerView : UIView
{
    _Bool _isForPortrait;
    id <BDDetailPlayerViewDelegate> _delegate;
    UIView *_backReturnView;
    unsigned long long _detailType;
    UIImageView *_backgroundImageView;
    UIButton *_searchButton;
    UILabel *_searchLabel;
    UIButton *_playButton;
    UILabel *_playLabel;
    UIImageView *_backReturnImageView;
    UIActivityIndicatorView *_activityView;
    UIView *_errorView;
    UILabel *_hintLabel;
    UIButton *_reloadButton;
    UILabel *_liveLabel;
}

@property(nonatomic) _Bool isForPortrait; // @synthesize isForPortrait=_isForPortrait;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *backReturnImageView; // @synthesize backReturnImageView=_backReturnImageView;
@property(retain, nonatomic) UILabel *playLabel; // @synthesize playLabel=_playLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *searchLabel; // @synthesize searchLabel=_searchLabel;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) unsigned long long detailType; // @synthesize detailType=_detailType;
@property(readonly, nonatomic) UIView *backReturnView; // @synthesize backReturnView=_backReturnView;
@property(nonatomic) __weak id <BDDetailPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadCurrentViewWithType:(unsigned long long)arg1;
- (void)reloadInteractiveView;
- (void)reloadErrorViewButtonAndLabel;
- (void)reloadSearchView;
- (void)reloadPlayLoadingView;
- (void)reloadPlayErrorView;
- (void)reloadPlayFinishView;
- (void)reloadPlayView;
- (void)reloadNormalView;
- (void)backButtonAction:(id)arg1;
- (void)playButtonAction:(id)arg1;
- (void)searchButtonAction:(id)arg1;
- (void)reloadButtonAction:(id)arg1;
- (void)initUI;
- (id)portraitErrorView;
- (id)normalErrorView;
- (id)getErrorView;
- (void)setSubviewsLayout;
- (id)initWithFrame:(struct CGRect)arg1 ForPortrait:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

