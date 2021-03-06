//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CDAllSports : NSObject <NSCoding, NSCopying>
{
    double _compare;
    double _speedAvgPerkmDiff;
    double _allMeter;
    long long _type;
    double _allMeterDiff;
    double _speedAvgPerkm;
    NSString *_contents;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(nonatomic) double speedAvgPerkm; // @synthesize speedAvgPerkm=_speedAvgPerkm;
@property(nonatomic) double allMeterDiff; // @synthesize allMeterDiff=_allMeterDiff;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double allMeter; // @synthesize allMeter=_allMeter;
@property(nonatomic) double speedAvgPerkmDiff; // @synthesize speedAvgPerkmDiff=_speedAvgPerkmDiff;
@property(nonatomic) double compare; // @synthesize compare=_compare;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)caloriesContent:(double)arg1 increaseDiff:(double)arg2;
- (id)levelStrWithLevelNumber:(double)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)levelString;
- (id)initWithDictionary:(id)arg1;

@end

