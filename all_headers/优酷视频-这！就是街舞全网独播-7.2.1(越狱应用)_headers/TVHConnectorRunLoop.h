//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSThread;

@interface TVHConnectorRunLoop : NSObject
{
    _Bool _isWorkThreadRunning;
    _Bool _isCanRun;
    NSThread *_workThread;
}

+ (id)sharedInstance;
@property _Bool isCanRun; // @synthesize isCanRun=_isCanRun;
@property _Bool isWorkThreadRunning; // @synthesize isWorkThreadRunning=_isWorkThreadRunning;
@property(retain) NSThread *workThread; // @synthesize workThread=_workThread;
- (void).cxx_destruct;
- (void)workMain:(id)arg1;
- (void)performSelectorToTarget:(id)arg1 select:(SEL)arg2 withObject:(id)arg3 waitUntilDone:(_Bool)arg4;
- (_Bool)isRunning;
- (void)innerActivateRunLoop;
- (void)innerStop;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

