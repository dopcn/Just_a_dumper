//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFCommentServiceItem, NSDictionary, NSString;

@protocol USCommentServiceDelegate <NSObject>
- (void)requestFailed:(long long)arg1 item:(NFCommentServiceItem *)arg2;
- (void)requestSucceed:(NSDictionary *)arg1 item:(NFCommentServiceItem *)arg2 statusMessage:(NSString *)arg3 statusCode:(NSString *)arg4;
@end

