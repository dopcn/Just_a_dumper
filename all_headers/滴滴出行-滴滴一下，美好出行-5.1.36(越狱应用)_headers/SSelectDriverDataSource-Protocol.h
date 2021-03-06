//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBizDataSource-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SBaseComponent;

@protocol SSelectDriverDataSource <SBizDataSource>
- (void)updateUserSelectDriverWithDriverID:(NSString *)arg1 carLevel:(NSNumber *)arg2;
- (_Bool)isLoadingDriverDataCom:(SBaseComponent *)arg1;
- (long long)seleceIndexForSelectDriverCom:(SBaseComponent *)arg1;
- (NSArray *)driverListForSelectDriverCom:(SBaseComponent *)arg1;
- (void)requestDriverListModelWithParam:(NSDictionary *)arg1 loginRequired:(_Bool)arg2 successBlock:(void (^)(SSelectDriverModel *))arg3 failBlock:(void (^)(void))arg4;
@end

