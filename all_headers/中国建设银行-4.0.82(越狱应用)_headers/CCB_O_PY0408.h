//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseModel.h"

@class NSArray, NSString;

@interface CCB_O_PY0408 : CCBBaseModel
{
    NSString *_TXTMPNAME;
    NSString *_branchNo;
    NSString *_netName;
    NSString *_userId;
    NSString *_mobileNo;
    NSString *_channel;
    NSString *_idNumber;
    NSString *_account;
    NSString *_netId;
    NSString *_bizType;
    NSString *_bizName;
    NSString *_userType;
    NSArray *_todayLst;
    NSString *_accBranchCode;
    NSString *_temp;
    NSString *_maxLine;
    NSArray *_bizList;
    NSString *_ecifLevel;
    NSString *_ecifSpecialFlag;
    NSString *_cqsmVipFlag;
    NSString *_cqsmVipLevel;
    NSString *_customerAum;
    NSString *_ecif_cust_no;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSString *ecif_cust_no; // @synthesize ecif_cust_no=_ecif_cust_no;
@property(copy, nonatomic) NSString *customerAum; // @synthesize customerAum=_customerAum;
@property(copy, nonatomic) NSString *cqsmVipLevel; // @synthesize cqsmVipLevel=_cqsmVipLevel;
@property(copy, nonatomic) NSString *cqsmVipFlag; // @synthesize cqsmVipFlag=_cqsmVipFlag;
@property(copy, nonatomic) NSString *ecifSpecialFlag; // @synthesize ecifSpecialFlag=_ecifSpecialFlag;
@property(copy, nonatomic) NSString *ecifLevel; // @synthesize ecifLevel=_ecifLevel;
@property(retain, nonatomic) NSArray *bizList; // @synthesize bizList=_bizList;
@property(copy, nonatomic) NSString *maxLine; // @synthesize maxLine=_maxLine;
@property(copy, nonatomic) NSString *temp; // @synthesize temp=_temp;
@property(copy, nonatomic) NSString *accBranchCode; // @synthesize accBranchCode=_accBranchCode;
@property(retain, nonatomic) NSArray *todayLst; // @synthesize todayLst=_todayLst;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *netId; // @synthesize netId=_netId;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *mobileNo; // @synthesize mobileNo=_mobileNo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *netName; // @synthesize netName=_netName;
@property(copy, nonatomic) NSString *branchNo; // @synthesize branchNo=_branchNo;
@property(retain, nonatomic) NSString *TXTMPNAME; // @synthesize TXTMPNAME=_TXTMPNAME;
- (void).cxx_destruct;

@end

