//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseRequestModel.h"

@class NSString;

@interface PurchaseProductNoWithVipRequestModel : BaseRequestModel
{
    long long _purchaseErrorCode;
}

@property(nonatomic) long long purchaseErrorCode; // @synthesize purchaseErrorCode=_purchaseErrorCode;
@property(readonly, nonatomic) unsigned long long requestId;
@property(readonly, nonatomic) NSString *orderNo;

@end

