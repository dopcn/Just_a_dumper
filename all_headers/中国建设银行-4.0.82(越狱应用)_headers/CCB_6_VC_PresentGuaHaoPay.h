//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

@class CCBTouchID, CCB_6_VM_PresentGuaHaoPay, NSMutableDictionary, NSString;

@interface CCB_6_VC_PresentGuaHaoPay : CCBFormViewController
{
    _Bool _isSigle;
    CDUnknownBlockType _onSendMessageCode;
    CDUnknownBlockType _onJumpSuccessVC;
    NSString *_isMessageCode;
    NSMutableDictionary *_paymentInfo;
    CCB_6_VM_PresentGuaHaoPay *_viewModel;
    CCBTouchID *_touchID;
}

@property(nonatomic) _Bool isSigle; // @synthesize isSigle=_isSigle;
@property(retain, nonatomic) CCBTouchID *touchID; // @synthesize touchID=_touchID;
@property(retain, nonatomic) CCB_6_VM_PresentGuaHaoPay *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableDictionary *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) NSString *isMessageCode; // @synthesize isMessageCode=_isMessageCode;
@property(copy, nonatomic) CDUnknownBlockType onJumpSuccessVC; // @synthesize onJumpSuccessVC=_onJumpSuccessVC;
@property(copy, nonatomic) CDUnknownBlockType onSendMessageCode; // @synthesize onSendMessageCode=_onSendMessageCode;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)checkTouchID:(id)arg1;
- (void)phonePay;
- (void)accountPay;
- (void)clickConfirm;
- (id)getPhoneShowNumber;
- (void)sendPhonePayCode;
- (void)sendAccountCode;
- (void)repetSendCodeMessage;
- (void)cell1EventTotal:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableViewMessage:(_Bool)arg1;
- (void)clickChange:(id)arg1;
- (void)viewDidLoad;

@end

