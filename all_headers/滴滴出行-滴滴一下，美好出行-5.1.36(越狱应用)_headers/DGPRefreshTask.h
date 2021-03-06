//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DGPRefreshTask : NSObject
{
    double _refreshTimeInterval;
    double _elapsedTimeInterval;
}

@property(nonatomic) double elapsedTimeInterval; // @synthesize elapsedTimeInterval=_elapsedTimeInterval;
@property(nonatomic) double refreshTimeInterval; // @synthesize refreshTimeInterval=_refreshTimeInterval;
- (void)doNetworkOperation;
- (_Bool)shouldRefresh;
- (void)resetElapsedTimeInterval;
- (void)accumulateElapsedTimeInterval:(double)arg1;
- (id)initWithRefreshTimeInterval:(double)arg1;

@end

