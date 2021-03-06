//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AidProtocolDelegate-Protocol.h"
#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface UTMCSession : NSObject <UTMCLifeCycleProtocol, AidProtocolDelegate>
{
    long long mLastBackGroundOccuredTime;
    NSMutableArray *observers;
    NSString *mSeesionId;
    long long mSessionStartTimeStamp;
    NSString *mAid;
    unsigned long long mTimeOut;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property unsigned long long mTimeOut; // @synthesize mTimeOut;
@property(retain) NSString *mAid; // @synthesize mAid;
@property(readonly) long long mSessionStartTimeStamp; // @synthesize mSessionStartTimeStamp;
@property(retain) NSString *mSeesionId; // @synthesize mSeesionId;
- (void).cxx_destruct;
- (void)onAidEventChanged:(long long)arg1 aid:(id)arg2;
- (void)refreshAid;
- (id)generateSessionId;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)switchForeGround;
- (void)switchBackGround;
- (void)start;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

