//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDViewModelInputs-Protocol.h"

@class NSString;

@protocol SDShopViewModelInputs <SDViewModelInputs>
- (void)fetchShopListWithShopId:(NSString *)arg1 Callback:(void (^)(_Bool, unsigned long long, NSString *, NSString *))arg2;
@end

