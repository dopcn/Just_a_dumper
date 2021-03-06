//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBLiveBarrageDataManager : NSObject
{
    _Bool _paused;
    long long _maxBufferSize;
    NSMutableArray *_barrageModelBuffers;
}

@property(retain, nonatomic) NSMutableArray *barrageModelBuffers; // @synthesize barrageModelBuffers=_barrageModelBuffers;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
- (void).cxx_destruct;
- (void)removeAllObject;
- (id)fetchFirstModel;
- (void)addBarrage:(id)arg1;
- (_Bool)canInsertObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

