//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDPedometerQuerier, CDPedometerRecognizer, NSString, NSTimer;
@protocol CDSportStepDataSourceDelegate;

@interface CDSportStepDataSource : NSObject
{
    id <CDSportStepDataSourceDelegate> _delegate;
    long long _algorithmStep;
    long long _motionStep;
    CDPedometerQuerier *_querier;
    CDPedometerRecognizer *_recognizer;
    double _distance;
    NSTimer *_timer;
    NSString *_dateKey;
}

@property(retain, nonatomic) NSString *dateKey; // @synthesize dateKey=_dateKey;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) CDPedometerRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) CDPedometerQuerier *querier; // @synthesize querier=_querier;
@property(nonatomic) long long motionStep; // @synthesize motionStep=_motionStep;
@property(nonatomic) long long algorithmStep; // @synthesize algorithmStep=_algorithmStep;
@property(nonatomic) __weak id <CDSportStepDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)querier:(id)arg1 didRecognizeSteps:(long long)arg2;
- (void)recognizer:(id)arg1 didUpdateSteps:(long long)arg2;
- (void)flushCache;
- (void)stopUpdatingSteps;
- (void)startUpdatingSteps;
- (void)timerDidFired:(id)arg1;
- (id)init;

@end

