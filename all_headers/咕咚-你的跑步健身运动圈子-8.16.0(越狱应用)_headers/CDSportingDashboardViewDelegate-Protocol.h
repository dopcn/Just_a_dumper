//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CDSportingDashboardCellView, CDSportingDashboardView, NSString;

@protocol CDSportingDashboardViewDelegate <NSObject>
- (NSString *)dashboardView:(CDSportingDashboardView *)arg1 preferredSubtitleForCellView:(CDSportingDashboardCellView *)arg2 atIndex:(long long)arg3;
- (NSString *)dashboardView:(CDSportingDashboardView *)arg1 preferredTitleForCellView:(CDSportingDashboardCellView *)arg2 atIndex:(long long)arg3;
- (void)dashboardView:(CDSportingDashboardView *)arg1 didSelectCellView:(CDSportingDashboardCellView *)arg2 atIndex:(long long)arg3;
- (_Bool)dashboardView:(CDSportingDashboardView *)arg1 shouldUpdateCellView:(CDSportingDashboardCellView *)arg2 atIndex:(long long)arg3;
@end

