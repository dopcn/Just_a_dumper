//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol ZMQDelegate <NSObject>

@optional
- (void)didRecvMsg:(NSDictionary *)arg1 sendDict:(NSDictionary *)arg2 chatid:(long long)arg3;
- (void)didSendMsgFailed;
- (void)didSendMsgSuccessed;
- (void)recvMsgErrorWithResults:(NSDictionary *)arg1;
- (void)timeoutOrFailed:(NSDictionary *)arg1 chatid:(long long)arg2;
- (void)didRecvOneMsg:(NSDictionary *)arg1;
- (void)didRecvGroupMsg:(NSDictionary *)arg1 loadMore:(_Bool)arg2;
@end

