//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseRequestModel.h"

@class NSDictionary, NSString;

@interface UserBindBankcardModel : BaseRequestModel
{
}

@property(readonly, nonatomic) NSString *bindCardTip;
@property(readonly, copy, nonatomic) NSDictionary *walletNeedInfo;
@property(readonly, nonatomic) long long planReceiveQuota;
@property(readonly, nonatomic) long long realReceiveQuota;
@property(readonly, nonatomic) NSString *bindCardStatusMsg;
@property(readonly, nonatomic) long long bindCardStatus;

@end

