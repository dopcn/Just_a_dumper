//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QHSLive.h"

@class NSDate, NSString;

@interface QHSPlayEvent : QHSLive
{
    _Bool _isFollowerOnBegin;
    _Bool _isFollowerOnEnd;
    _Bool _replay;
    _Bool _completion;
    _Bool _isFollower;
    NSDate *_startTime;
    NSDate *_endTime;
    unsigned long long _dur;
    NSString *_vid;
    NSString *_ownerId;
}

@property(nonatomic) _Bool isFollower; // @synthesize isFollower=_isFollower;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) _Bool completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long dur; // @synthesize dur=_dur;
@property(nonatomic) _Bool replay; // @synthesize replay=_replay;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (long long)judgeToFocuse;
- (id)toDictionary;

@end

