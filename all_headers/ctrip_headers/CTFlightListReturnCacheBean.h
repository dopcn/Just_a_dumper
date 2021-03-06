//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTFlightListBaseCacheBean.h"

@class CTFlightDetailViewModel, CTFlightFilterModel, CTFlightOrderSegmentDataModel, NSMutableDictionary;

@interface CTFlightListReturnCacheBean : CTFlightListBaseCacheBean
{
    CTFlightDetailViewModel *_flightDetailGoViewModel;
    CTFlightOrderSegmentDataModel *_flightSegmentModel;
    NSMutableDictionary *_returnClickTraceDict;
    CTFlightFilterModel *_goListFlightFilterModel;
}

@property(retain, nonatomic) CTFlightFilterModel *goListFlightFilterModel; // @synthesize goListFlightFilterModel=_goListFlightFilterModel;
@property(retain, nonatomic) NSMutableDictionary *returnClickTraceDict; // @synthesize returnClickTraceDict=_returnClickTraceDict;
@property(retain, nonatomic) CTFlightOrderSegmentDataModel *flightSegmentModel; // @synthesize flightSegmentModel=_flightSegmentModel;
@property(retain, nonatomic) CTFlightDetailViewModel *flightDetailGoViewModel; // @synthesize flightDetailGoViewModel=_flightDetailGoViewModel;
- (void).cxx_destruct;
- (id)getTraceParam;
- (id)flightReturnRecommendProduct;
- (id)addTraceParam;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;

@end

