//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol WBBuiltResDownloadProtocol <NSObject>
- (void)setData:(NSData *)arg1 forRequest:(NSDictionary *)arg2;
- (void)requestFailed:(id)arg1 userInfo:(NSDictionary *)arg2;
- (void)requestFinished:(id)arg1 userInfo:(NSDictionary *)arg2;
@end

