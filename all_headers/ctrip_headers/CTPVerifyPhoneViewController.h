//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CTPTitleEditCell, CTPaySendVerifyCodeViewModel, CTPayWarningCellManager, NSArray, NSString, NSTimer, PriceType, UIButton, UITableView, UIView;

@interface CTPVerifyPhoneViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UITextFieldDelegate>
{
    int _type;
    NSString *_phoneNumberToShow;
    PriceType *_amount;
    CTPaySendVerifyCodeViewModel *_sendVerifyCodeViewModel;
    CDUnknownBlockType _onDoneBlock;
    CDUnknownBlockType _onCancelBlock;
    UITableView *_tableView;
    UIView *_viewTips;
    CTPTitleEditCell *_cellPhone;
    CTPTitleEditCell *_cellVerifyCode;
    UIButton *_buttonSendVerifyCode;
    UIView *_viewPayment;
    NSArray *_arrayRows;
    CTPayWarningCellManager *_warningManager;
    NSTimer *_timerSendCode;
    double _leftSeconds;
}

@property(nonatomic) double leftSeconds; // @synthesize leftSeconds=_leftSeconds;
@property(retain, nonatomic) NSTimer *timerSendCode; // @synthesize timerSendCode=_timerSendCode;
@property(retain, nonatomic) CTPayWarningCellManager *warningManager; // @synthesize warningManager=_warningManager;
@property(retain, nonatomic) NSArray *arrayRows; // @synthesize arrayRows=_arrayRows;
@property(retain, nonatomic) UIView *viewPayment; // @synthesize viewPayment=_viewPayment;
@property(retain, nonatomic) UIButton *buttonSendVerifyCode; // @synthesize buttonSendVerifyCode=_buttonSendVerifyCode;
@property(retain, nonatomic) CTPTitleEditCell *cellVerifyCode; // @synthesize cellVerifyCode=_cellVerifyCode;
@property(retain, nonatomic) CTPTitleEditCell *cellPhone; // @synthesize cellPhone=_cellPhone;
@property(retain, nonatomic) UIView *viewTips; // @synthesize viewTips=_viewTips;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType onCancelBlock; // @synthesize onCancelBlock=_onCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType onDoneBlock; // @synthesize onDoneBlock=_onDoneBlock;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) CTPaySendVerifyCodeViewModel *sendVerifyCodeViewModel; // @synthesize sendVerifyCodeViewModel=_sendVerifyCodeViewModel;
@property(copy, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *phoneNumberToShow; // @synthesize phoneNumberToShow=_phoneNumberToShow;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hiddenKeyboard;
- (id)emptyInputAlertText;
- (_Bool)checkEmptyInput;
- (void)appActiveStatusChanged:(id)arg1;
- (void)changeTimerStatus:(_Bool)arg1;
- (void)updateSendButtonTitleWithSeconds:(int)arg1;
- (void)enabelSendCodeButton:(_Bool)arg1;
- (void)updateSendCodeButton;
- (void)sendVerifyCode;
- (void)paymentButtonAction:(id)arg1;
- (void)buttonSendVerifyCodeAction:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

