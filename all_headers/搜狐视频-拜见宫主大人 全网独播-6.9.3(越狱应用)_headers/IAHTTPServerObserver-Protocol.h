//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IAHTTPServer, NSDictionary, NSString;

@protocol IAHTTPServerObserver <NSObject>

@optional
- (void)httpServer:(IAHTTPServer *)arg1 ipChanged:(NSString *)arg2;
- (void)httpServer:(IAHTTPServer *)arg1 receivedRequestWithMethod:(NSString *)arg2 path:(NSString *)arg3 parameters:(NSDictionary *)arg4;
@end

