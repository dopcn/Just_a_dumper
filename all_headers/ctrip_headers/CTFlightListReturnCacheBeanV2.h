//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTFlightListReturnCacheBean.h"

@class CTFlightFilterModel, CTFlightInlandListItemViewModel;

@interface CTFlightListReturnCacheBeanV2 : CTFlightListReturnCacheBean
{
    CTFlightInlandListItemViewModel *_selectGoListItemModel;
    CTFlightFilterModel *_flightGoFilterModel;
}

@property(retain, nonatomic) CTFlightFilterModel *flightGoFilterModel; // @synthesize flightGoFilterModel=_flightGoFilterModel;
@property(retain, nonatomic) CTFlightInlandListItemViewModel *selectGoListItemModel; // @synthesize selectGoListItemModel=_selectGoListItemModel;
- (void).cxx_destruct;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;

@end

