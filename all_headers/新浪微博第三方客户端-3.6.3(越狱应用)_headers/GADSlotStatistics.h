//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADStatistics.h"

@class NSString;

@interface GADSlotStatistics : GADStatistics
{
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)adapterDurationsParameter;
- (id)adapterExitCodesParameter;
- (void)resetTimingAdapters;
- (void)endTimingAdapterWithExitCode:(long long)arg1;
- (void)startTimingAdapter;
- (id)init;

@end

