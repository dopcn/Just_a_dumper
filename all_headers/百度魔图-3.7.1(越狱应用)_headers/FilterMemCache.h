//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FIFOQueueDelegate-Protocol.h"

@class FIFOQueue, NSMutableDictionary, NSString;

@interface FilterMemCache : NSObject <FIFOQueueDelegate>
{
    FIFOQueue *_filterQueue;
    NSMutableDictionary *_map;
}

- (void).cxx_destruct;
- (void)removeElemFromMap:(id)arg1;
- (void)dealloc;
- (void)setImageForFilter:(id)arg1 filter:(id)arg2;
- (id)imageForFilter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

