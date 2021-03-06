//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALAdVideoPlaybackDelegate-Protocol.h"

@class NSString;
@protocol ALAdVideoPlaybackDelegate;

@interface ALAdVideoPlaybackProxy : NSObject <ALAdVideoPlaybackDelegate>
{
    id <ALAdVideoPlaybackDelegate> delegate;
}

@property(retain, nonatomic) id <ALAdVideoPlaybackDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(_Bool)arg3;
- (void)videoPlaybackBeganInAd:(id)arg1;
- (id)initWithVideoPlaybackDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

