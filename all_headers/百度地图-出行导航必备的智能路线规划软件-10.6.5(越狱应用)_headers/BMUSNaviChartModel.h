//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSArray;
@protocol BMUSNaviDetailChartModel><ConvertOnDemand;

@interface BMUSNaviChartModel : JSONModel
{
    double _totalDist;
    NSArray<BMUSNaviDetailChartModel><ConvertOnDemand> *_detail;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<BMUSNaviDetailChartModel><ConvertOnDemand> *detail; // @synthesize detail=_detail;
@property(nonatomic) double totalDist; // @synthesize totalDist=_totalDist;
- (void).cxx_destruct;
- (_Bool)isValidData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

