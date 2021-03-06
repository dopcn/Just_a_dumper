//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YFBBaseUIView.h"

@class SNFCLPasscodeField, UIButton, UILabel, UIView;
@protocol SNFCLPasscodeDelegate;

@interface YFBPasscodeView : YFBBaseUIView
{
    UIView *_bgView;
    UIView *_contentView;
    UIView *_titleView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_findPwdButton;
    int _type;
    SNFCLPasscodeField *_pcodeFeild;
    UILabel *_attentionLabel;
    _Bool _isAnimatiing;
    id <SNFCLPasscodeDelegate> _passcodeDelegate;
    UIButton *_commitBtn;
}

+ (id)complexPasscodeView;
+ (id)simplePasscodeView;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(nonatomic) __weak id <SNFCLPasscodeDelegate> passcodeDelegate; // @synthesize passcodeDelegate=_passcodeDelegate;
- (void).cxx_destruct;
- (void)setAttentionTitle:(id)arg1;
- (void)commitBtnClick:(id)arg1;
- (void)clearPasscodeTextFeild;
- (void)dismissAnimated:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)passcodeFieldTextDidEndOnExit:(id)arg1;
- (void)passcodeFieldTextDidChanged:(id)arg1;
- (void)onFindPwdBtnClicked:(id)arg1;
- (void)onBackBtnClicked:(id)arg1;
- (void)setupsubViews;
- (id)initWithPasscodeType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

