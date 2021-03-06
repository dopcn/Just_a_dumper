//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NFVPSFetchObserver-Protocol.h"

@class NFVPSFetchQueue, NFVideoPlayerPreloader, NSString;

@interface NFVideoPreloadManager : NSObject <NFVPSFetchObserver>
{
    NFVPSFetchQueue *_vpsFetchQueue;
    NFVideoPlayerPreloader *_videoPreloader;
    unsigned long long _preloadPriorityToken;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long preloadPriorityToken; // @synthesize preloadPriorityToken=_preloadPriorityToken;
@property(retain, nonatomic) NFVideoPlayerPreloader *videoPreloader; // @synthesize videoPreloader=_videoPreloader;
@property(retain, nonatomic) NFVPSFetchQueue *vpsFetchQueue; // @synthesize vpsFetchQueue=_vpsFetchQueue;
- (void)vpsFetchQueue:(id)arg1 didSuccessWithVPSResponse:(id)arg2;
- (void)preloadVideoURLImmediately:(id)arg1;
- (void)tryPreloadUrls:(id)arg1;
- (void)tryPreloadVideoItems:(id)arg1 pageType:(long long)arg2;
- (void)tryPreloadNFItems:(id)arg1 pageType:(long long)arg2;
- (long long)maxBackwardCount;
- (long long)maxForwardCount;
- (_Bool)isPreloadEnabled;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

