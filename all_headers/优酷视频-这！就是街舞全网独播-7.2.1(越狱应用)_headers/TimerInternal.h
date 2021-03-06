//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TimerInternal : NSObject
{
    double _start;
    double _duration;
    unsigned long long _state;
    double _begin;
    double _end;
}

@property(readonly, nonatomic) double end; // @synthesize end=_end;
@property(readonly, nonatomic) double begin; // @synthesize begin=_begin;
- (double)currentDuration;
- (double)duration;
- (void)resume;
- (void)pause;
- (void)start;
- (id)init;

@end

