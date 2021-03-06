//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, VideoSnifferEngine;

@interface MttVideoSnifferQueue : NSObject
{
    NSObject *_lock;
    NSMutableOrderedSet *_preFetchQueue;
    long long _loadingCount;
    VideoSnifferEngine *_currentEngine;
}

@property(retain) VideoSnifferEngine *currentEngine; // @synthesize currentEngine=_currentEngine;
@property long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain) NSMutableOrderedSet *preFetchQueue; // @synthesize preFetchQueue=_preFetchQueue;
- (void).cxx_destruct;
- (void)startNextPreload;
- (void)preSnifferWithRecord:(id)arg1;
- (void)dealloc;
- (id)init;

@end

