//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBMyEBuyBaseRequest.h"

@class NSString;

@interface SNMBCouponCenterCouponSearchListRequest : SNMBMyEBuyBaseRequest
{
    CDUnknownBlockType _getCouponCenterCouponSearchListCompleteBlock;
    NSString *_cityId;
    NSString *_Keyword;
}

@property(copy, nonatomic) NSString *Keyword; // @synthesize Keyword=_Keyword;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) CDUnknownBlockType getCouponCenterCouponSearchListCompleteBlock; // @synthesize getCouponCenterCouponSearchListCompleteBlock=_getCouponCenterCouponSearchListCompleteBlock;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (void)start;
- (long long)requestMethod;
- (id)requestUrl;

@end

