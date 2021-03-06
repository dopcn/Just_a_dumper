//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SPWatchSheModel : NSObject
{
    NSArray *_persons;
    NSArray *_sections;
    long long _modelType;
    double _totalTime;
    NSString *_totalTimeString;
    NSString *_personNameString;
}

+ (id)dateFormatM4Second:(long long)arg1;
+ (double)caculateTotalTime:(id)arg1;
+ (id)catchPersonNameString:(id)arg1;
+ (id)parseItem:(id)arg1;
@property(copy, nonatomic) NSString *personNameString; // @synthesize personNameString=_personNameString;
@property(copy, nonatomic) NSString *totalTimeString; // @synthesize totalTimeString=_totalTimeString;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *persons; // @synthesize persons=_persons;
- (void).cxx_destruct;
- (_Bool)isEqualToModel:(id)arg1;

@end

