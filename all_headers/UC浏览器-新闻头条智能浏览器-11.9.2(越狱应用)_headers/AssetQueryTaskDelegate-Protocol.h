//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AssetQueryTask, NSError, NSString;

@protocol AssetQueryTaskDelegate <NSObject>
- (void)queryTask:(AssetQueryTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)queryTask:(AssetQueryTask *)arg1 didGetBalance:(unsigned long long)arg2 coupon:(unsigned long long)arg3 couponCount:(unsigned long long)arg4 hasGoods:(_Bool)arg5 userId:(NSString *)arg6;
@end

