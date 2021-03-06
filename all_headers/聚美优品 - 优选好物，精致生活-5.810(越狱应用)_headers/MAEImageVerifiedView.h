//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImage, UIImageView, UITextField;
@protocol MAEImageVerifiedViewDelegate;

@interface MAEImageVerifiedView : UIView
{
    double _mainViewFrameY;
    unsigned long long _requestTimes;
    _Bool _isShow;
    UIView *_mainView;
    UIView *_textFieldVerificationBG;
    UITextField *_textFieldVerification;
    UIImageView *_imageVerification;
    UIButton *_btnClose;
    UIButton *_btnChange;
    UIButton *_btnGetVerification;
    NSLayoutConstraint *_sep0Height;
    NSLayoutConstraint *_sep1Height;
    NSLayoutConstraint *_mainViewTopPadding;
    CDUnknownBlockType _GetVerifiedCodeBlock;
    id <MAEImageVerifiedViewDelegate> _delegate;
    UIImage *_codeImage;
}

@property(retain, nonatomic) UIImage *codeImage; // @synthesize codeImage=_codeImage;
@property(nonatomic) __weak id <MAEImageVerifiedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType GetVerifiedCodeBlock; // @synthesize GetVerifiedCodeBlock=_GetVerifiedCodeBlock;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak NSLayoutConstraint *mainViewTopPadding; // @synthesize mainViewTopPadding=_mainViewTopPadding;
@property(nonatomic) __weak NSLayoutConstraint *sep1Height; // @synthesize sep1Height=_sep1Height;
@property(nonatomic) __weak NSLayoutConstraint *sep0Height; // @synthesize sep0Height=_sep0Height;
@property(nonatomic) __weak UIButton *btnGetVerification; // @synthesize btnGetVerification=_btnGetVerification;
@property(nonatomic) __weak UIButton *btnChange; // @synthesize btnChange=_btnChange;
@property(nonatomic) __weak UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(nonatomic) __weak UIImageView *imageVerification; // @synthesize imageVerification=_imageVerification;
@property(nonatomic) __weak UITextField *textFieldVerification; // @synthesize textFieldVerification=_textFieldVerification;
@property(nonatomic) __weak UIView *textFieldVerificationBG; // @synthesize textFieldVerificationBG=_textFieldVerificationBG;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)resetStatus;
- (void)removeViewWithAnimation;
- (void)showViewWithAnimation;
- (void)getSMSVerifiedButtonEvent:(id)arg1;
- (void)changeVerifiedButtonEvent:(id)arg1;
- (void)closeButtonEvent:(id)arg1;
- (void)sendVerificationCodeRequest;
- (void)updateImageVerificationGestrue:(id)arg1;
- (void)tapBackgroundView:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

