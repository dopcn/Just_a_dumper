//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NEPScrollViewController.h"

#import "NEPPickerViewDelegate-Protocol.h"

@class NEPBottomLogoHandle, NEPTFMaxLengthHelper, NEPTablePickerView, NEPWalletInfo, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface NEPWIndexSuperController : NEPScrollViewController <NEPPickerViewDelegate>
{
    NEPTFMaxLengthHelper *_moneyAmountMaxLengthHelper;
    NEPWalletInfo *_walletInfo;
    long long _selectedCardIndex;
    UILabel *_lblCardType;
    UIButton *_btnBankNum;
    UIButton *_btnTailNum;
    UILabel *_lblBankWarning;
    UILabel *_lblAmountName;
    UITextField *_txfAmount;
    UILabel *_lblPlatformWarning;
    UIView *_addNewCardView;
    UIView *_existedCardView;
    UIButton *_depositWithAdditionalCardBtn;
    NSLayoutConstraint *_contentTopConstraint;
    NEPTablePickerView *_pickerView;
    UIImageView *_imgVNext;
    NSLayoutConstraint *_cstCardNumRowHeight;
    NSString *_addedQuickPayId;
    NEPBottomLogoHandle *_bottomLogoHandle;
}

@property(retain, nonatomic) NEPBottomLogoHandle *bottomLogoHandle; // @synthesize bottomLogoHandle=_bottomLogoHandle;
@property(copy, nonatomic) NSString *addedQuickPayId; // @synthesize addedQuickPayId=_addedQuickPayId;
@property(nonatomic) __weak NSLayoutConstraint *cstCardNumRowHeight; // @synthesize cstCardNumRowHeight=_cstCardNumRowHeight;
@property(nonatomic) __weak UIImageView *imgVNext; // @synthesize imgVNext=_imgVNext;
@property(retain, nonatomic) NEPTablePickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property(nonatomic) __weak UIButton *depositWithAdditionalCardBtn; // @synthesize depositWithAdditionalCardBtn=_depositWithAdditionalCardBtn;
@property(nonatomic) __weak UIView *existedCardView; // @synthesize existedCardView=_existedCardView;
@property(nonatomic) __weak UIView *addNewCardView; // @synthesize addNewCardView=_addNewCardView;
@property(nonatomic) __weak UILabel *lblPlatformWarning; // @synthesize lblPlatformWarning=_lblPlatformWarning;
@property(nonatomic) __weak UITextField *txfAmount; // @synthesize txfAmount=_txfAmount;
@property(nonatomic) __weak UILabel *lblAmountName; // @synthesize lblAmountName=_lblAmountName;
@property(nonatomic) __weak UILabel *lblBankWarning; // @synthesize lblBankWarning=_lblBankWarning;
@property(nonatomic) __weak UIButton *btnTailNum; // @synthesize btnTailNum=_btnTailNum;
@property(nonatomic) __weak UIButton *btnBankNum; // @synthesize btnBankNum=_btnBankNum;
@property(nonatomic) __weak UILabel *lblCardType; // @synthesize lblCardType=_lblCardType;
@property(nonatomic) long long selectedCardIndex; // @synthesize selectedCardIndex=_selectedCardIndex;
@property(retain, nonatomic) NEPWalletInfo *walletInfo; // @synthesize walletInfo=_walletInfo;
- (void).cxx_destruct;
- (id)bankWarningDesc:(id)arg1;
- (void)refreshWalletInfo;
- (void)pressedBtnNextWithAmount:(id)arg1 cardInfo:(id)arg2;
- (void)valueDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)NEPPickerView:(id)arg1 finishedWithSelectedItems:(id)arg2;
- (_Bool)isValidInput;
- (void)p_startWaddCardBusiness;
- (long long)p_validatedRowInCard:(id)arg1;
- (void)hideKeyboard;
- (void)didBackItemClicked;
- (void)launchTransaction:(id)arg1;
- (void)changeTransactionMethod:(id)arg1;
- (void)selectMethodRowClicked:(id)arg1;
- (void)depositWithAdditionalCard:(id)arg1;
- (void)configureUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)configureBottomLogoView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

