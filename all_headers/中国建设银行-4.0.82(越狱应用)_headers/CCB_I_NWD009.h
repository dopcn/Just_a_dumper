//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseRequestModel.h"

@class NSString;

@interface CCB_I_NWD009 : CCBBaseRequestModel
{
    NSString *_branchNo;
    NSString *_netName;
    NSString *_bizType;
    NSString *_bizName;
    NSString *_idNumber;
    NSString *_account;
    NSString *_netId;
    NSString *_queueBeginTime;
    NSString *_queueEndTime;
    NSString *_queueDate;
    NSString *_flag;
    NSString *_accBranchCode;
    NSString *_userType;
    NSString *_ecifLevel;
    NSString *_ecifSpecialFlag;
    NSString *_cqsmVipFlag;
    NSString *_cqsmVipLevel;
    NSString *_customerAum;
}

@property(retain, nonatomic) NSString *customerAum; // @synthesize customerAum=_customerAum;
@property(retain, nonatomic) NSString *cqsmVipLevel; // @synthesize cqsmVipLevel=_cqsmVipLevel;
@property(retain, nonatomic) NSString *cqsmVipFlag; // @synthesize cqsmVipFlag=_cqsmVipFlag;
@property(retain, nonatomic) NSString *ecifSpecialFlag; // @synthesize ecifSpecialFlag=_ecifSpecialFlag;
@property(retain, nonatomic) NSString *ecifLevel; // @synthesize ecifLevel=_ecifLevel;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *accBranchCode; // @synthesize accBranchCode=_accBranchCode;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *queueDate; // @synthesize queueDate=_queueDate;
@property(retain, nonatomic) NSString *queueEndTime; // @synthesize queueEndTime=_queueEndTime;
@property(retain, nonatomic) NSString *queueBeginTime; // @synthesize queueBeginTime=_queueBeginTime;
@property(retain, nonatomic) NSString *netId; // @synthesize netId=_netId;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *netName; // @synthesize netName=_netName;
@property(retain, nonatomic) NSString *branchNo; // @synthesize branchNo=_branchNo;
- (void).cxx_destruct;

@end

