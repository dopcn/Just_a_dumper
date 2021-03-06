//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCB_12_BlueDevice, CCB_12_HMApduHandler, DPayAccountViewController, FMNfcosClientManager, NSData, NSMutableArray, NSString;

@interface CCB_12_VM_GJKHomePage : CCBBaseFormViewModel
{
    _Bool _DPayEnable;
    CDUnknownBlockType _onErrorClick;
    DPayAccountViewController *_dpay;
    NSMutableArray *_DPShowingAccount;
    NSMutableArray *_DPAccounts;
    NSMutableArray *_OnlyHasDPAccounts;
    double _amount;
    CCBBaseError *_error;
    CCB_12_HMApduHandler *_hmApduHandler;
    CCB_12_BlueDevice *_blueDevice;
    FMNfcosClientManager *_nfcos;
    NSData *_AppNoData;
    NSString *_AppNo;
    long long _balance;
    NSString *_FaceID;
    NSString *_balanceStrValue;
}

@property(retain, nonatomic) NSString *balanceStrValue; // @synthesize balanceStrValue=_balanceStrValue;
@property(retain, nonatomic) NSString *FaceID; // @synthesize FaceID=_FaceID;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *AppNo; // @synthesize AppNo=_AppNo;
@property(retain, nonatomic) NSData *AppNoData; // @synthesize AppNoData=_AppNoData;
@property(retain, nonatomic) FMNfcosClientManager *nfcos; // @synthesize nfcos=_nfcos;
@property(retain, nonatomic) CCB_12_BlueDevice *blueDevice; // @synthesize blueDevice=_blueDevice;
@property(retain, nonatomic) CCB_12_HMApduHandler *hmApduHandler; // @synthesize hmApduHandler=_hmApduHandler;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSMutableArray *OnlyHasDPAccounts; // @synthesize OnlyHasDPAccounts=_OnlyHasDPAccounts;
@property(retain, nonatomic) NSMutableArray *DPAccounts; // @synthesize DPAccounts=_DPAccounts;
@property(retain, nonatomic) NSMutableArray *DPShowingAccount; // @synthesize DPShowingAccount=_DPShowingAccount;
@property(nonatomic) _Bool DPayEnable; // @synthesize DPayEnable=_DPayEnable;
@property(retain, nonatomic) DPayAccountViewController *dpay; // @synthesize dpay=_dpay;
@property(copy, nonatomic) CDUnknownBlockType onErrorClick; // @synthesize onErrorClick=_onErrorClick;
- (void).cxx_destruct;
- (id)getRequest_sn;
- (id)getNowTimeTimestamp3;
- (void)PareseIP1001:(id)arg1;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestIP1001:(id)arg1;
- (void)loadProfile:(CDUnknownBlockType)arg1;
- (void)margeDragonPayAccount:(id)arg1;
- (void)requesAccount;
- (id)initWithDelegate:(id)arg1;

@end

