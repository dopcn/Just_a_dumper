//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SNMBCouponCenterServiceProtocol <NSObject>

@optional
- (void)doFinanceDrawWithActID:(NSString *)arg1 actkey:(NSString *)arg2 actType:(NSString *)arg3 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg4;
- (void)doInterestFreeDrawWithActID:(NSString *)arg1 actkey:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg3;
- (void)doNewCloudDrawWithVoucherId:(NSString *)arg1 voucherType:(NSString *)arg2 actType:(NSString *)arg3 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg4;
- (void)doCloudDrawWithVoucherId:(NSString *)arg1 voucherType:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg3;
- (void)doFreeDrawWithActIDAndCatgCode:(NSString *)arg1 actkey:(NSString *)arg2 actType:(NSString *)arg3 saleCatgCode:(NSString *)arg4 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg5;
- (void)doFreeDrawWithActID:(NSString *)arg1 actkey:(NSString *)arg2 actType:(NSString *)arg3 completionBlock:(void (^)(_Bool, NSString *, NSString *, NSDictionary *))arg4;
@end

