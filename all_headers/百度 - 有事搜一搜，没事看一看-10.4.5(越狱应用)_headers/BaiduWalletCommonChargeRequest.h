//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduWalletRequest.h"

@class NSString;

@interface BaiduWalletCommonChargeRequest : BaiduWalletRequest
{
    _Bool _is_huodong_price;
    NSString *_phone_number;
    NSString *_charge_amount;
}

@property(nonatomic) _Bool is_huodong_price; // @synthesize is_huodong_price=_is_huodong_price;
@property(retain, nonatomic) NSString *charge_amount; // @synthesize charge_amount=_charge_amount;
@property(retain, nonatomic) NSString *phone_number; // @synthesize phone_number=_phone_number;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *order_no;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) NSString *channelNum;
- (id)requestParams;
- (int)requestMethod;
- (id)requestURL;

@end

