//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol FMDatabaseProtocol <NSObject>
- (void)executeQuery:(NSString *)arg1 values:(NSArray *)arg2 error:(id *)arg3 onSucceed:(void (^)(id <FMDatabaseResultProtol>))arg4 onError:(void (^)(NSError *))arg5;
- (void)executeUpdate:(NSString *)arg1 values:(NSArray *)arg2 error:(id *)arg3;
@end

