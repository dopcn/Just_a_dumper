//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNScrollViewDelegateHandler.h"

@interface QNRoseLiveChildScrollViewDelegateHandler : QNScrollViewDelegateHandler
{
    _Bool _trackingStarts;
    double _beginContentOffsetY;
    double _lastContentOffsetY;
    long long _scrollDirection;
}

@property(nonatomic) _Bool trackingStarts; // @synthesize trackingStarts=_trackingStarts;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(nonatomic) double beginContentOffsetY; // @synthesize beginContentOffsetY=_beginContentOffsetY;
- (void)resetWithBeginContentOffsetY:(double)arg1;
- (id)initWithBeginContentOffsetY:(double)arg1;

@end

