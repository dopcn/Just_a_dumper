//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SofaOrderTripInfoModel;

@protocol SofaOrderServiceDelegate <NSObject>

@optional
- (void)orderMatchingTooLong;
- (void)tripInfoModel:(SofaOrderTripInfoModel *)arg1;
- (void)shouldShowPhoneNumber:(_Bool)arg1;
- (void)passagersDidChange;
- (void)tripInfoHasExceptionWithErrorCode:(long long)arg1;
- (void)tripInfoOrderStatusChanged:(long long)arg1;
@end

