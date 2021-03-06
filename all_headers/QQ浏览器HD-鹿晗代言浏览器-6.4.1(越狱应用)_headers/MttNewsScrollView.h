//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIView;
@protocol MttNewsScrollViewDataSource, MttNewsScrollViewLayoutManager;

@interface MttNewsScrollView : UIScrollView <UIScrollViewDelegate>
{
    long long _firstPositionLoaded;
    long long _lastPositionLoaded;
    id <MttNewsScrollViewDataSource> _newsDataSource;
    id <MttNewsScrollViewLayoutManager> _layoutManager;
    UIView *_headerView;
    NSMutableDictionary *_cachedCellsDic;
    long long _orientation;
    double _containerWidth;
}

@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableDictionary *cachedCellsDic; // @synthesize cachedCellsDic=_cachedCellsDic;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MttNewsScrollViewLayoutManager> layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) __weak id <MttNewsScrollViewDataSource> newsDataSource; // @synthesize newsDataSource=_newsDataSource;
- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)dequeueReusableCell:(id)arg1;
- (void)cleanupUnseenItems;
- (void)loadHeaderViewIfNeeded;
- (void)loadRequireItems;
- (void)layoutSubviews;
- (void)layout;
- (void)clear;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

