//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MockTrajBIInfo, MockTrajDIInfo, MockTrajEventCheckTiming, MockTrajEventTiming, MockTrajVIInfo;

@interface MockTrajEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MockTrajBIInfo *biInfo; // @dynamic biInfo;
@property(retain, nonatomic) MockTrajEventCheckTiming *checkTiming; // @dynamic checkTiming;
@property(retain, nonatomic) MockTrajDIInfo *diInfo; // @dynamic diInfo;
@property(nonatomic) int eventKind; // @dynamic eventKind;
@property(nonatomic) _Bool hasBiInfo; // @dynamic hasBiInfo;
@property(nonatomic) _Bool hasCheckTiming; // @dynamic hasCheckTiming;
@property(nonatomic) _Bool hasDiInfo; // @dynamic hasDiInfo;
@property(nonatomic) _Bool hasEventKind; // @dynamic hasEventKind;
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasTiming; // @dynamic hasTiming;
@property(nonatomic) _Bool hasViInfo; // @dynamic hasViInfo;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(retain, nonatomic) MockTrajEventTiming *timing; // @dynamic timing;
@property(retain, nonatomic) MockTrajVIInfo *viInfo; // @dynamic viInfo;

@end

