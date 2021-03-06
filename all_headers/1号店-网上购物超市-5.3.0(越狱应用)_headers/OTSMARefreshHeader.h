//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSMAAbstractRefreshView.h"

@class UIImageView, UILabel, UIView;

@interface OTSMARefreshHeader : OTSMAAbstractRefreshView
{
    long long _headerState;
    UIView *_containerView;
    UILabel *_titleLb;
    UIImageView *_logoImageView;
}

@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long headerState; // @synthesize headerState=_headerState;
- (void).cxx_destruct;
- (void)setPercent:(double)arg1;
- (void)scrollViewContentOffsetDidChange;
- (void)scrollViewContentSizeDidChange;
- (void)otsma_endHeaderRefresh;
- (void)config;

@end

