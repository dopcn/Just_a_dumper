//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSdkBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface DTSdkOrderStatusModel : DTSdkBaseModel
{
    NSString<Optional> *_orderId;
    NSString<Optional> *_theNewOrderId;
    NSString<Optional> *_lineMd5;
    NSNumber<Optional> *_intervalTime;
    NSNumber<Optional> *_status;
    NSNumber<Optional> *_subStatus;
    NSNumber<Optional> *_waitTime;
    NSNumber<Optional> *_isTimeout;
    NSString<Optional> *_timeoutMsg;
    NSNumber<Optional> *_freeze_status;
    NSString<Optional> *_freeze_alert;
}

+ (id)statusModelWithCommonMsgReq:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *freeze_alert; // @synthesize freeze_alert=_freeze_alert;
@property(retain, nonatomic) NSNumber<Optional> *freeze_status; // @synthesize freeze_status=_freeze_status;
@property(copy, nonatomic) NSString<Optional> *timeoutMsg; // @synthesize timeoutMsg=_timeoutMsg;
@property(retain, nonatomic) NSNumber<Optional> *isTimeout; // @synthesize isTimeout=_isTimeout;
@property(retain, nonatomic) NSNumber<Optional> *waitTime; // @synthesize waitTime=_waitTime;
@property(retain, nonatomic) NSNumber<Optional> *subStatus; // @synthesize subStatus=_subStatus;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber<Optional> *intervalTime; // @synthesize intervalTime=_intervalTime;
@property(copy, nonatomic) NSString<Optional> *lineMd5; // @synthesize lineMd5=_lineMd5;
@property(copy, nonatomic) NSString<Optional> *theNewOrderId; // @synthesize theNewOrderId=_theNewOrderId;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (long long)flowStatus;

@end

