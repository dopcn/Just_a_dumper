//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTElapseTime : NSObject
{
    double _startTime;
    long long _count;
    double _totalTime;
}

+ (id)start;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (double)elapsedTime:(id)arg1;

@end

