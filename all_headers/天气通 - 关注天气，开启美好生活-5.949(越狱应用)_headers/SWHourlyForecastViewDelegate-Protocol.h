//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SWHourlyForecastView;

@protocol SWHourlyForecastViewDelegate <NSObject>

@optional
- (void)hourlyForecastView:(SWHourlyForecastView *)arg1 didChangedToMode:(unsigned long long)arg2 viewHeight:(double)arg3 animation:(_Bool)arg4;
- (void)hourlyForecastView:(SWHourlyForecastView *)arg1 willChangeToMode:(unsigned long long)arg2 viewHeight:(double)arg3 animation:(_Bool)arg4;
@end

