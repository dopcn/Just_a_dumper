//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FspP2PServiceTrackInfEntity : NSObject
{
    unsigned long long _retry;
    unsigned long long _nextTime;
    NSString *_tracker;
    NSString *_status;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *tracker; // @synthesize tracker=_tracker;
@property(nonatomic) unsigned long long nextTime; // @synthesize nextTime=_nextTime;
@property(nonatomic) unsigned long long retry; // @synthesize retry=_retry;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end

