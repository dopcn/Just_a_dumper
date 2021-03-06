//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface QNPPayCountdownTimer : NSObject
{
    NSObject<OS_dispatch_source> *m_timer;
    _Bool _onFire;
    CDUnknownBlockType _countdownBlock;
    NSDate *_endTime;
    long long _timeout;
}

@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) CDUnknownBlockType countdownBlock; // @synthesize countdownBlock=_countdownBlock;
@property(readonly, nonatomic) _Bool onFire; // @synthesize onFire=_onFire;
- (void).cxx_destruct;
- (void)becomeActive:(id)arg1;
- (void)invalidate;
- (void)attatchActionBlock:(CDUnknownBlockType)arg1;
- (void)sheduleWithTotalSeconds:(long long)arg1 timeInterval:(long long)arg2;
- (void)sheduleDefaultWithTotalSeconds:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

