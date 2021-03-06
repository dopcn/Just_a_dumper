//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class BDWPullToRefreshView;
@protocol BDWScrollViewRefreshDelegate;

@interface UIScrollView (BDWPullToRefresh)
- (_Bool)bdwt_isPullToRefreshInLoadingState;
- (void)bdwt_modifyPullRefreshOriginalTopInset:(double)arg1;
- (void)bdwt_setPullRefreshTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)bdwt_setPullRefreshTitleForAllState:(id)arg1;
- (void)bdwt_stopPullRefresh;
@property(nonatomic) _Bool bdwt_showsPullToRefresh;
@property(nonatomic) id <BDWScrollViewRefreshDelegate> bdwt_refreshDelegate;
@property(readonly, nonatomic) BDWPullToRefreshView *bdwt_pullToRefreshView;
- (void)setBdwt_pullToRefreshView:(id)arg1;
- (void)bdwt_triggerPullToRefresh;
- (void)bdwt_addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;
@end

