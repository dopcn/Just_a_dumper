//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGLiveIntervalPuller.h"

@protocol IGLiveLoggingContext, IGLiveViewerCountIntervalPullerDelegate;

@interface IGLiveViewerCountIntervalPuller : IGLiveIntervalPuller
{
    id <IGLiveViewerCountIntervalPullerDelegate> _delegate;
    id <IGLiveLoggingContext> _loggingContext;
    long long _lastBroadcastStatus;
}

+ (CDUnknownBlockType)parsingHandler;
+ (CDUnknownBlockType)requestFactoryForMediaId:(id)arg1 mode:(long long)arg2 infoProvider:(id)arg3;
@property long long lastBroadcastStatus; // @synthesize lastBroadcastStatus=_lastBroadcastStatus;
@property(readonly, nonatomic) id <IGLiveLoggingContext> loggingContext; // @synthesize loggingContext=_loggingContext;
@property(nonatomic) __weak id <IGLiveViewerCountIntervalPullerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDUnknownBlockType)successHandler;
- (id)initWithMediaId:(id)arg1 pullInterval:(double)arg2 networker:(id)arg3 loggingContext:(id)arg4 mode:(long long)arg5 infoProvider:(id)arg6;

@end

