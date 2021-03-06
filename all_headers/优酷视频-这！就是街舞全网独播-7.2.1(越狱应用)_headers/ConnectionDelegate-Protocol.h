//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;
@protocol ConnectionProtocol, RequestProtocol, ResponseProtocol;

@protocol ConnectionDelegate <NSObject>
- (void)connection:(id <ConnectionProtocol>)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3;
- (void)connection:(id <ConnectionProtocol>)arg1 data:(NSData *)arg2 didReceiveData:(long long)arg3 totalBytesCount:(long long)arg4;
- (void)connection:(id <ConnectionProtocol>)arg1 didFinishedWithError:(NSError *)arg2;
- (void)connection:(id <ConnectionProtocol>)arg1 didReceiveResponse:(id <ResponseProtocol>)arg2;
- (id <RequestProtocol>)connection:(id <ConnectionProtocol>)arg1 willSendRequest:(id <RequestProtocol>)arg2 redirectResponse:(id <ResponseProtocol>)arg3;
@end

