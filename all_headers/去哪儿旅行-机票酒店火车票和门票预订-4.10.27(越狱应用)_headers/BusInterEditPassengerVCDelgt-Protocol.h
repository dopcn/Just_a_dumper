//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BusMobilePassenger;

@protocol BusInterEditPassengerVCDelgt <NSObject>

@optional
- (_Bool)passengerValidation:(BusMobilePassenger *)arg1;
- (void)editInterPassengerBack:(BusMobilePassenger *)arg1 originalPassenger:(BusMobilePassenger *)arg2;
- (void)addInterPassengerBack:(BusMobilePassenger *)arg1;
@end

