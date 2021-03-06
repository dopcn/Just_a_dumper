//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewController.h"

#import "JumeiBaseActionDelegate-Protocol.h"
#import "JumeiJoinLotteryActionDelegate-Protocol.h"
#import "JumeiLotteryStatusActionDelegate-Protocol.h"
#import "JumeiSendLotteryVerifyCodeActionDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JM_AddressItemData, JM_CommonResultData, JM_LotteryStatusData, JumeiJoinLotteryAction, JumeiLotteryStatusAction, JumeiSendLotteryVerifyCodeAction, NSString, UITableView, UITextField;

@interface JuMeiLotteryPayCenterViewController : JMBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, JumeiLotteryStatusActionDelegate, JumeiSendLotteryVerifyCodeActionDelegate, JumeiJoinLotteryActionDelegate, JumeiBaseActionDelegate, UIAlertViewDelegate>
{
    UITableView *m_table_LotteryPayCenter;
    UITextField *m_textfield_Num;
    NSString *m_str_hashID;
    NSString *m_str_temp_phoneNum;
    NSString *m_str_verifyCode;
    NSString *m_str_mobile;
    _Bool m_isRequestSuccess;
    JM_AddressItemData *m_data_address;
    JM_LotteryStatusData *m_data_lotteryStatus;
    JM_CommonResultData *m_data_lotteryResult;
    JumeiLotteryStatusAction *m_action_lotteryStatus;
    JumeiSendLotteryVerifyCodeAction *m_action_VerifyCode;
    JumeiJoinLotteryAction *m_action_joinLottery;
}

@property(retain, nonatomic) JumeiJoinLotteryAction *m_action_joinLottery; // @synthesize m_action_joinLottery;
@property(retain, nonatomic) JumeiSendLotteryVerifyCodeAction *m_action_VerifyCode; // @synthesize m_action_VerifyCode;
@property(retain, nonatomic) JumeiLotteryStatusAction *m_action_lotteryStatus; // @synthesize m_action_lotteryStatus;
@property(retain, nonatomic) JM_CommonResultData *m_data_lotteryResult; // @synthesize m_data_lotteryResult;
@property(retain, nonatomic) JM_LotteryStatusData *m_data_lotteryStatus; // @synthesize m_data_lotteryStatus;
@property(retain, nonatomic) JM_AddressItemData *m_data_address; // @synthesize m_data_address;
@property(retain, nonatomic) UITextField *m_textfield_Num; // @synthesize m_textfield_Num;
@property(copy, nonatomic) NSString *m_str_mobile; // @synthesize m_str_mobile;
@property(retain, nonatomic) NSString *m_str_verifyCode; // @synthesize m_str_verifyCode;
@property(retain, nonatomic) NSString *m_str_temp_phoneNum; // @synthesize m_str_temp_phoneNum;
@property(retain, nonatomic) NSString *m_str_hashID; // @synthesize m_str_hashID;
@property(retain, nonatomic) UITableView *m_table_LotteryPayCenter; // @synthesize m_table_LotteryPayCenter;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)changePhoneNumber;
- (void)goTogetLottery;
- (void)JuMeiGetverifyCode;
- (void)go2addAddressManagement;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)addressSelectDelegate:(id)arg1;
- (void)onJoinLotteryActionSuccessWithData:(id)arg1;
- (void)onRequestError:(id)arg1;
- (void)onSendLotteryVerifyCodeActionSuccessWithData:(id)arg1;
- (void)onLotteryStatusActionSuccessWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 hash_id:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

