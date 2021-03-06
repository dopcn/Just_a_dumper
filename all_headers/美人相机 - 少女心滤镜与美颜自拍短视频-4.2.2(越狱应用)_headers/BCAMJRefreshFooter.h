//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBackFooter.h"

@class UILabel, UIView;

@interface BCAMJRefreshFooter : MJRefreshBackFooter
{
    UIView *_refreshingView;
    UILabel *_pullingLabel;
    UILabel *_noMoreDataLabel;
}

@property(retain, nonatomic) UILabel *noMoreDataLabel; // @synthesize noMoreDataLabel=_noMoreDataLabel;
@property(retain, nonatomic) UILabel *pullingLabel; // @synthesize pullingLabel=_pullingLabel;
@property(retain, nonatomic) UIView *refreshingView; // @synthesize refreshingView=_refreshingView;
- (void).cxx_destruct;
- (id)removeSubviews;
- (id)rotation:(float)arg1 degree:(float)arg2 direction:(int)arg3 repeatCount:(int)arg4;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

