//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMDateChooseDelegate-Protocol.h"

@class NSDate, NSString;
@protocol NMDateChooseDelegate;

@protocol NMDateChooseService <NMDateChooseDelegate>
- (void)selectSingleDateWithDelegate:(id <NMDateChooseDelegate>)arg1 defaultDate:(NSDate *)arg2 toast:(NSString *)arg3 range:(long long)arg4;
- (void)selectDate:(id <NMDateChooseDelegate>)arg1 checkIn:(NSString *)arg2 checkOut:(NSString *)arg3;
- (void)selectDate:(id <NMDateChooseDelegate>)arg1;
@end

