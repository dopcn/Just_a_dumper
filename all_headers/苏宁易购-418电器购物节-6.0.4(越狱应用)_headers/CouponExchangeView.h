//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SNFCLWTReTextField, UIButton, UILabel;
@protocol exchangeConfirmDelegate;

@interface CouponExchangeView : UIView <UITextFieldDelegate>
{
    UIView *_contentView;
    UIButton *_redeemBtn;
    UIButton *_closeBtn;
    UILabel *_topLabel;
    UILabel *_introLabel;
    SNFCLWTReTextField *_textView;
    UIView *_successView;
    UILabel *_errorInfoLabel;
    id <exchangeConfirmDelegate> _delegate;
    NSString *_exchangeCode;
}

@property(nonatomic) NSString *exchangeCode; // @synthesize exchangeCode=_exchangeCode;
@property(nonatomic) __weak id <exchangeConfirmDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *errorInfoLabel; // @synthesize errorInfoLabel=_errorInfoLabel;
@property(retain, nonatomic) UIView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) SNFCLWTReTextField *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *redeemBtn; // @synthesize redeemBtn=_redeemBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (void)closeBtnClicked;
- (void)exchangeBtnClicked;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

