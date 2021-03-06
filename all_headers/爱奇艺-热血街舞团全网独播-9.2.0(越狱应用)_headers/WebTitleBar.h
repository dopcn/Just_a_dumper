//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UILabel;

@interface WebTitleBar : UIView
{
    unsigned long long _style;
    _Bool _initHidenBack;
    UIButton *_closeButton;
    UIButton *_backLabel;
    UIButton *_backButton;
    UIButton *_rightSideCloseButton;
    UIButton *_infoButton;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UIActivityIndicatorView *_activeView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activeView; // @synthesize activeView=_activeView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIButton *rightSideCloseButton; // @synthesize rightSideCloseButton=_rightSideCloseButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *backLabel; // @synthesize backLabel=_backLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createBackGroundView;
- (void)addInfoButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)removeInfoButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)stopActiveView;
- (void)startActiveView;
- (void)setInfoButwithText:(id)arg1 forState:(unsigned long long)arg2;
- (void)setInfoButWithImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
- (void)showBackButton:(_Bool)arg1;
- (void)showCloseButton:(_Bool)arg1;
- (void)stylePopOver;
- (void)styleImmerseBar;
- (void)styleDefaultBar;
- (void)layoutSubviewWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 BarStyle:(unsigned long long)arg2 initHidenBackTitle:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 BarStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

