//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HSWebCoreEngine.h"

@interface HSURLProtocolEngine : HSWebCoreEngine
{
}

+ (void)enableRegisterFlag;
+ (_Bool)registerURLProtocol;
- (void)addURLProtocolRequest:(id)arg1;
- (_Bool)needHandleByURLProtocol:(id)arg1;
- (void)reportHSURLProtocolRequestFailedNotification:(id)arg1;
- (void)reportHSURLProtocolRequestFinishedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

