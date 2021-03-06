//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TrackingSessionObserver-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, TrackingSessionID;

@interface CECreativeTrackingSessionObserver : NSObject <TrackingSessionObserver>
{
    _Bool _vcsEnabled;
    _Bool _isClickced;
    _Bool _isDragged;
    TrackingSessionID *_sessionID;
    NSMutableDictionary *_impressionCounts;
    NSDate *_startTime;
}

+ (_Bool)shouldObserveWithSessionType:(unsigned long long)arg1 sessionCount:(int)arg2;
+ (id)createWithView:(id)arg1 type:(unsigned long long)arg2;
+ (void)load;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(nonatomic) _Bool isClickced; // @synthesize isClickced=_isClickced;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *impressionCounts; // @synthesize impressionCounts=_impressionCounts;
@property(retain, nonatomic) TrackingSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool vcsEnabled; // @synthesize vcsEnabled=_vcsEnabled;
- (void).cxx_destruct;
- (void)trackCreativeImpression;
- (void)onClickWithSource:(id)arg1 creativeName:(id)arg2 dismissAfterEngage:(id)arg3;
- (void)onCreativeImpressionWithName:(id)arg1;
- (void)onDragged;
- (void)onComplete;
- (void)onStartWithID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

