//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol FspWeakTimerProtocol;

@interface FspWeakTimer : NSObject
{
    id <FspWeakTimerProtocol> _target;
    NSTimer *_timer;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 userInfo:(id)arg3 repeats:(_Bool)arg4;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) __weak id <FspWeakTimerProtocol> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)fire;

@end

