//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAd, NSDictionary;

@protocol ALAdRewardDelegate <NSObject>
- (void)rewardValidationRequestForAd:(ALAd *)arg1 didFailWithError:(long long)arg2;
- (void)rewardValidationRequestForAd:(ALAd *)arg1 wasRejectedWithResponse:(NSDictionary *)arg2;
- (void)rewardValidationRequestForAd:(ALAd *)arg1 didExceedQuotaWithResponse:(NSDictionary *)arg2;
- (void)rewardValidationRequestForAd:(ALAd *)arg1 didSucceedWithResponse:(NSDictionary *)arg2;

@optional
- (void)userDeclinedToViewAd:(ALAd *)arg1;
@end

