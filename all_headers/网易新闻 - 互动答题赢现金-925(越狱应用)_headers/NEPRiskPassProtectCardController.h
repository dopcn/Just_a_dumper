//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NEPBaseAlertViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NEPAlertNavTitleView, NEPTFMaxLengthHelper, NSLayoutConstraint, NSString, UIButton, UILabel, UITextField;

@interface NEPRiskPassProtectCardController : NEPBaseAlertViewController <UITextFieldDelegate>
{
    NEPTFMaxLengthHelper *_captchaMaxLengthHelper;
    UITextField *_textField_passProtectCardNum;
    UIButton *_button_needInputNext;
    UILabel *_label_PPCNum1;
    UILabel *_label_PPCNum2;
    UILabel *_label_PPCNum3;
    UIButton *_closeButton;
    NSLayoutConstraint *_lcAlertViewHeightConstraint;
    UIButton *_doneButton;
    NEPAlertNavTitleView *_navTitleView;
}

@property(nonatomic) __weak NEPAlertNavTitleView *navTitleView; // @synthesize navTitleView=_navTitleView;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak NSLayoutConstraint *lcAlertViewHeightConstraint; // @synthesize lcAlertViewHeightConstraint=_lcAlertViewHeightConstraint;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *label_PPCNum3; // @synthesize label_PPCNum3=_label_PPCNum3;
@property(nonatomic) __weak UILabel *label_PPCNum2; // @synthesize label_PPCNum2=_label_PPCNum2;
@property(nonatomic) __weak UILabel *label_PPCNum1; // @synthesize label_PPCNum1=_label_PPCNum1;
@property(nonatomic) __weak UIButton *button_needInputNext; // @synthesize button_needInputNext=_button_needInputNext;
@property(nonatomic) __weak UITextField *textField_passProtectCardNum; // @synthesize textField_passProtectCardNum=_textField_passProtectCardNum;
- (void).cxx_destruct;
- (void)clearInput;
- (void)close:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)selectedAction:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)setupDisableView;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)updatePositionLabel:(id)arg1 content:(id)arg2 delay:(float)arg3;
- (void)updatePositionLabel;
- (void)setupNavTitleView;
- (void)setupView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

