//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseOverseasSubwayLine : NVBaseModel
{
    NSArray *_stations;
    long long _lineId;
    NSString *_name;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long lineId; // @synthesize lineId=_lineId;
@property(retain, nonatomic) NSArray *stations; // @synthesize stations=_stations;
- (void).cxx_destruct;

@end

