//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMBMyEBuyBaseRequest.h"

@class MYEbuyCoumonDTO;
@protocol SNMBMyCouponDetailRequestDelegate;

@interface SNMBMyCouponDetailRequest : SNMBMyEBuyBaseRequest
{
    MYEbuyCoumonDTO *_dto;
    id <SNMBMyCouponDetailRequestDelegate> _detaildelegate;
    MYEbuyCoumonDTO *_myCouponDTO;
}

@property(retain, nonatomic) MYEbuyCoumonDTO *myCouponDTO; // @synthesize myCouponDTO=_myCouponDTO;
@property(nonatomic) __weak id <SNMBMyCouponDetailRequestDelegate> detaildelegate; // @synthesize detaildelegate=_detaildelegate;
- (void).cxx_destruct;
- (void)getMyGiftTicketDetailFinish:(_Bool)arg1;
- (void)parseTicketDetailData:(id)arg1;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (id)requestArgument;
- (long long)requestMethod;
- (id)requestUrl;
- (void)sendMyCouponDetailRequest:(id)arg1;
- (id)init;

@end

