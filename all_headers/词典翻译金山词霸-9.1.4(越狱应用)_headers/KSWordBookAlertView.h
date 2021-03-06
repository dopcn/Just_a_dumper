//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSXibView.h"

@class UIButton, UIControl, UILabel;
@protocol KSAlertViewDelegate;

@interface KSWordBookAlertView : KSXibView
{
    id <KSAlertViewDelegate> _delegate;
    UILabel *_msgLabel;
    UIButton *_button;
    CDUnknownBlockType _onCancelBlock;
    CDUnknownBlockType _onConfirmBlock;
    UIControl *_bgControl;
}

+ (void)alertWithTitle:(id)arg1 message:(id)arg2 inView:(id)arg3 onCancel:(CDUnknownBlockType)arg4 onConfirm:(CDUnknownBlockType)arg5;
+ (void)alertWithMessage:(id)arg1 inView:(id)arg2 onCancel:(CDUnknownBlockType)arg3 onConfirm:(CDUnknownBlockType)arg4;
+ (void)alertWithTitle:(id)arg1 message:(id)arg2 inView:(id)arg3 withDelegate:(id)arg4;
+ (void)alertWithMessage:(id)arg1 inView:(id)arg2 withDelegate:(id)arg3;
@property(retain, nonatomic) UIControl *bgControl; // @synthesize bgControl=_bgControl;
@property(copy, nonatomic) CDUnknownBlockType onConfirmBlock; // @synthesize onConfirmBlock=_onConfirmBlock;
@property(copy, nonatomic) CDUnknownBlockType onCancelBlock; // @synthesize onCancelBlock=_onCancelBlock;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(nonatomic) __weak id <KSAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showInView:(id)arg1 message:(id)arg2 withDelegate:(id)arg3;
- (void)showInView:(id)arg1 withDelegate:(id)arg2;
- (id)viewForView:(id)arg1;
- (id)keyboardView;
- (void)onConfirmBtnClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (id)scaleAnimation:(_Bool)arg1;
- (void)hide;
- (void)showInView:(id)arg1 onCancel:(CDUnknownBlockType)arg2 onConfirm:(CDUnknownBlockType)arg3;
- (void)makeCenter;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

