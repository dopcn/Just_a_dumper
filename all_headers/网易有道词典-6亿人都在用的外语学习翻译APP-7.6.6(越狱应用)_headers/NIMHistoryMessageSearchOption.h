//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NIMMessage;

@interface NIMHistoryMessageSearchOption : NSObject
{
    _Bool _sync;
    double _startTime;
    unsigned long long _limit;
    double _endTime;
    NIMMessage *_currentMessage;
    long long _order;
}

@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(retain, nonatomic) NIMMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)description;

@end

