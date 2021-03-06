//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BDWalletCommonPopDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BDWalletSecurityKeboardTextField, NSString, UIButton, UILabel, UIViewController;

@interface BDWalletVerifyCardElementsHalfScreenView : UIView <UITextFieldDelegate, BDWalletCommonPopDelegate>
{
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _inputConfirmBlock;
    UIButton *_backButton;
    UILabel *_verifyTitleLabel;
    UILabel *_hintLabel;
    UIButton *_infoButton;
    UIView *_inputBgView;
    BDWalletSecurityKeboardTextField *_textFiled;
    UIButton *_clearButton;
    UILabel *_errorMessageLabel;
    unsigned long long _type;
    NSString *_verifyTitle;
    NSString *_hintText;
    UIViewController *_weakParentVC;
}

@property(nonatomic) __weak UIViewController *weakParentVC; // @synthesize weakParentVC=_weakParentVC;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(retain, nonatomic) NSString *verifyTitle; // @synthesize verifyTitle=_verifyTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) BDWalletSecurityKeboardTextField *textFiled; // @synthesize textFiled=_textFiled;
@property(retain, nonatomic) UIView *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *verifyTitleLabel; // @synthesize verifyTitleLabel=_verifyTitleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) CDUnknownBlockType inputConfirmBlock; // @synthesize inputConfirmBlock=_inputConfirmBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (unsigned long long)inputMaxLength;
- (unsigned long long)inputMinLength;
- (id)inputErrorMessage;
- (_Bool)islegalText:(id)arg1;
- (id)textFieldPlaceHolder;
- (_Bool)shouldShowHintLabel;
- (double)verifyTitleLabelTopMargin;
- (double)inputViewWidth;
- (id)viewTitle;
- (void)hideKeyBoard:(id)arg1;
- (void)showKeyBoard:(id)arg1;
- (void)showPopVCwithPopMode:(int)arg1;
- (void)dismissBDWalletCommonPopViewController:(id)arg1;
- (void)clickConfirmButton:(id)arg1;
- (void)clickClearButton:(id)arg1;
- (void)clickInfoButton:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)clearLocalCheckFailedPrompt;
- (void)showLocalCheckFailedPrompt;
- (void)inCompleteInput;
- (void)completeInput;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 verifyType:(unsigned long long)arg2 verifyMsg:(id)arg3 hintText:(id)arg4 parentVC:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

