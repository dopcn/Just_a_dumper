//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADFreqCapState : NSObject
{
    int _adId;
    int _slidingWindow;
    int _impressions;
    long long _firstView;
}

@property(nonatomic) long long firstView; // @synthesize firstView=_firstView;
@property(nonatomic) int impressions; // @synthesize impressions=_impressions;
@property(nonatomic) int slidingWindow; // @synthesize slidingWindow=_slidingWindow;
@property(readonly, nonatomic) int adId; // @synthesize adId=_adId;
- (id)initWithAdid:(int)arg1 slidingWindow:(int)arg2 firstView:(long long)arg3 impressions:(int)arg4;

@end

