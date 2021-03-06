//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIButton, UILabel, UIView;
@protocol FSAlertViewProtocol;

@interface FSAlertView : UIImageView
{
    NSString *_title;
    NSString *_message;
    NSString *_okText;
    NSString *_cancelText;
    UILabel *_titleLabel;
    UILabel *_msgTextView;
    UIButton *_okBtn;
    UIButton *_cancelBtn;
    UIView *_shadowView;
    double _shadowViewTop;
    float alert_height;
    float textView_height;
    id <FSAlertViewProtocol> _delegate;
    UILabel *_msgLabel;
    struct CGSize _screenSize;
}

@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) id <FSAlertViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UILabel *msgTextView; // @synthesize msgTextView=_msgTextView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(retain, nonatomic) NSString *okText; // @synthesize okText=_okText;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)messageTextFont;
- (void)initAlertViewHeight;
- (float)heightForTextView:(id)arg1 WithText:(id)arg2;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)show;
- (void)btnAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideAlertAction;
- (void)showAlertAction;
- (_Bool)isHideCancelButton;
- (void)initCancelBtnFrame;
- (void)initOkBtnFrame;
- (void)initMsgTextViewFrame;
- (void)initTitleLabelFrame;
- (void)initSelfFrame;
- (void)initFrames;
- (void)createSeperateLine;
- (void)initCancelBtn;
- (void)initOkBtn;
- (void)initMsgTextView;
- (void)initTitleLabel;
- (void)initShadowView;
- (void)initSelf;
- (void)initAll;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 screenSize:(struct CGSize)arg6 shadowViewTop:(double)arg7;

@end

