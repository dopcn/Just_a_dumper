//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CDSpordRecordChartSpeedData : NSObject
{
    NSString *_maxSpeed;
    NSString *_avgSpeed;
    NSArray *_values;
    double _totalTime;
    NSString *_unit;
}

@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(copy, nonatomic) NSString *maxSpeed; // @synthesize maxSpeed=_maxSpeed;
- (void).cxx_destruct;
- (id)initWithSportRecord:(id)arg1;

@end

