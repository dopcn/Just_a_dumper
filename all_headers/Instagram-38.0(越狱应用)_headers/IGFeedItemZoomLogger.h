//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGZoomLoggerProtocol-Protocol.h"

@class IGFeedItemZoomHandler, NSString;
@protocol IGFeedItemDirectResponseLoggingProviderDelegate;

@interface IGFeedItemZoomLogger : NSObject <IGZoomLoggerProtocol>
{
    IGFeedItemZoomHandler *_zoomHandler;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
}

@property(nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
@property(nonatomic) __weak IGFeedItemZoomHandler *zoomHandler; // @synthesize zoomHandler=_zoomHandler;
- (void).cxx_destruct;
- (id)buildDirectResponseInfoForCell:(id)arg1;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (id)initWithZoomHandler:(id)arg1 loggingProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

