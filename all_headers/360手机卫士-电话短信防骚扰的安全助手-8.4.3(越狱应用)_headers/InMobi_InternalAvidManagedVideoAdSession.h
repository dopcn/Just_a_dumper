//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "InMobi_InternalAvidManagedAdSession.h"

@class InMobi_AvidVideoPlaybackListenerImpl;
@protocol InMobi_AvidVideoPlaybackListener;

@interface InMobi_InternalAvidManagedVideoAdSession : InMobi_InternalAvidManagedAdSession
{
    InMobi_AvidVideoPlaybackListenerImpl *_avidVideoPlaybackListenerImpl;
}

+ (id)mediaType;
+ (id)sessionType;
@property(retain, nonatomic) InMobi_AvidVideoPlaybackListenerImpl *avidVideoPlaybackListenerImpl; // @synthesize avidVideoPlaybackListenerImpl=_avidVideoPlaybackListenerImpl;
- (void).cxx_destruct;
- (void)eventDispatcher:(id)arg1 didPushEvent:(id)arg2;
@property(readonly, nonatomic) id <InMobi_AvidVideoPlaybackListener> avidVideoPlaybackListener;
- (id)initWithId:(id)arg1 context:(id)arg2;

@end

