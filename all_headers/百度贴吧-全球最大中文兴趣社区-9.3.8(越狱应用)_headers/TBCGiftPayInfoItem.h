//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSString, TBCIAPTransaction;

@interface TBCGiftPayInfoItem : TBCBaseItem
{
    int _payInfoState;
    NSString *_appId;
    NSString *_pid;
    NSString *_transId;
    NSString *_receipt;
    NSString *_bduss;
    NSString *_retry_times;
    NSString *_first_cm_time;
    NSString *_gid;
    NSString *_toUserID;
    NSString *_quantity;
    NSString *_fromChannel;
    NSString *_toUserName;
    NSString *_giftImage;
    NSString *_iosProductPreCount;
    TBCIAPTransaction *_transaction;
}

@property(nonatomic) int payInfoState; // @synthesize payInfoState=_payInfoState;
@property(retain, nonatomic) TBCIAPTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) NSString *iosProductPreCount; // @synthesize iosProductPreCount=_iosProductPreCount;
@property(copy, nonatomic) NSString *giftImage; // @synthesize giftImage=_giftImage;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(copy, nonatomic) NSString *fromChannel; // @synthesize fromChannel=_fromChannel;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *toUserID; // @synthesize toUserID=_toUserID;
@property(copy, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(copy, nonatomic) NSString *first_cm_time; // @synthesize first_cm_time=_first_cm_time;
@property(copy, nonatomic) NSString *retry_times; // @synthesize retry_times=_retry_times;
@property(copy, nonatomic) NSString *bduss; // @synthesize bduss=_bduss;
@property(copy, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
@property(copy, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init;
- (void)dealloc;

@end

