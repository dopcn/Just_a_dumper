//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBMyEBuyBaseRequest.h"

@interface SNMBCouponCenterSMSRequest : SNMBMyEBuyBaseRequest
{
    CDUnknownBlockType _doCouponCenterSMSCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doCouponCenterSMSCompleteBlock; // @synthesize doCouponCenterSMSCompleteBlock=_doCouponCenterSMSCompleteBlock;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (id)requestArgument;
- (long long)requestMethod;
- (id)requestUrl;

@end

