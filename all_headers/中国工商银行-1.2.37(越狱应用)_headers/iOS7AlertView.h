//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UITextField, UIViewController;

@interface iOS7AlertView : UIView
{
    UITextField *_txtField;
    UILabel *_title;
    UILabel *_errMsg;
    UILabel *_horiLine;
    UILabel *_vertLine;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIViewController *_parentViewController;
    id _deleg;
    UIView *_alertView;
}

@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id deleg; // @synthesize deleg=_deleg;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *vertLine; // @synthesize vertLine=_vertLine;
@property(retain, nonatomic) UILabel *horiLine; // @synthesize horiLine=_horiLine;
@property(retain, nonatomic) UILabel *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UITextField *txtField; // @synthesize txtField=_txtField;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (id)initWithTitle:(id)arg1 errorMsg:(id)arg2 delegate:(id)arg3 okAction:(SEL)arg4 cancelAction:(SEL)arg5 textField:(id)arg6 keyboardHeight:(double)arg7;
- (id)initWithMessage:(id)arg1;

@end

