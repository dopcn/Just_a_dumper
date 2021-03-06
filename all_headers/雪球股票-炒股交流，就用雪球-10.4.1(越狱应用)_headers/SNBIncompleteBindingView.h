//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SNBIncompleteBindingViewModel, UIButton, UILabel;

@interface SNBIncompleteBindingView : UIView
{
    SNBIncompleteBindingViewModel *_viewModel;
    CDUnknownBlockType _didClickMainButton;
    CDUnknownBlockType _didClickTipsButton;
    CDUnknownBlockType _didClickOpenButton;
    UILabel *_titleLabel;
    UIButton *_mainButton;
    UIButton *_tipsButton;
    UIButton *_openButton;
}

@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickOpenButton; // @synthesize didClickOpenButton=_didClickOpenButton;
@property(copy, nonatomic) CDUnknownBlockType didClickTipsButton; // @synthesize didClickTipsButton=_didClickTipsButton;
@property(copy, nonatomic) CDUnknownBlockType didClickMainButton; // @synthesize didClickMainButton=_didClickMainButton;
@property(retain, nonatomic) SNBIncompleteBindingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_snb_didClickButton:(id)arg1;
- (void)_snb_updateButton:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (id)_snb_configuredButton;
- (void)_snb_configureSubviews;
- (void)updateTheme:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

