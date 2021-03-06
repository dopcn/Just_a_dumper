//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIScrollView;
@protocol DDPageScrollViewDataSource, DDPageScrollViewDelegate;

@interface DDPageScrollView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    double _scrollTime;
    UIScrollView *_scrollView;
    NSMutableDictionary *_reusableCellDict;
    NSMutableArray *_visibleCells;
    long long _totalCount;
    _Bool _cycleScrollEnabled;
    _Bool _timerShouldInvoke;
    id <DDPageScrollViewDataSource> _dataSource;
    id <DDPageScrollViewDelegate> _delegate;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool timerShouldInvoke; // @synthesize timerShouldInvoke=_timerShouldInvoke;
@property(nonatomic) _Bool cycleScrollEnabled; // @synthesize cycleScrollEnabled=_cycleScrollEnabled;
@property(nonatomic) __weak id <DDPageScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DDPageScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)timerInvoke;
- (void)fireTimer:(_Bool)arg1;
- (long long)getDataIndex;
- (void)addCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cellForIndex:(unsigned long long)arg1;
- (void)reusableCell:(id)arg1;
- (void)visibleCell:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollToNextIndex;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

