//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface JMRCTAsyncOperation : NSOperation
{
    _Bool finished;
    _Bool executing;
}

- (_Bool)isAsynchronous;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)_changeState:(_Bool)arg1;
- (void)start;
- (void)finishedAsync;

@end

