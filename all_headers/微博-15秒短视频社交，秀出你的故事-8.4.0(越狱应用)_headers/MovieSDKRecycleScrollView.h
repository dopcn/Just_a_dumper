//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class MovieSDKDataListInfo, NSString, NSTimer, UIPageControl, UIScrollView, UIViewController;
@protocol MovieSDKRecycleScrollViewProtocol;

@interface MovieSDKRecycleScrollView : UIView <UIScrollViewDelegate>
{
    id <MovieSDKRecycleScrollViewProtocol> _delegate;
    UIScrollView *_recycleScrollView;
    UIPageControl *_dotsPageControl;
    UIView *_visibleView;
    MovieSDKDataListInfo *_bannerData;
    NSTimer *_animationTimer;
    double _animationInterval;
    unsigned long long _currentPage;
    unsigned long long _bannerType;
    double _originScrollViewHeight;
    double _contentImageViewHeight;
    double _halfOutImagePartHeight;
    UIViewController *_contentViewController;
}

@property(nonatomic) __weak UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) double halfOutImagePartHeight; // @synthesize halfOutImagePartHeight=_halfOutImagePartHeight;
@property(nonatomic) double contentImageViewHeight; // @synthesize contentImageViewHeight=_contentImageViewHeight;
@property(nonatomic) double originScrollViewHeight; // @synthesize originScrollViewHeight=_originScrollViewHeight;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) MovieSDKDataListInfo *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) UIView *visibleView; // @synthesize visibleView=_visibleView;
@property(retain, nonatomic) UIPageControl *dotsPageControl; // @synthesize dotsPageControl=_dotsPageControl;
@property(retain, nonatomic) UIScrollView *recycleScrollView; // @synthesize recycleScrollView=_recycleScrollView;
@property(nonatomic) __weak id <MovieSDKRecycleScrollViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendExposeStatistics:(_Bool)arg1;
- (_Bool)isScheme:(id)arg1;
- (void)animationTimerDidFired:(id)arg1;
- (void)pauserTimer;
- (void)resumeTimer;
- (void)jumpLink:(id)arg1;
- (unsigned long long)validNextPageIndexWithPageIndex:(long long)arg1;
- (void)configureScrollView:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)recycleContinued:(_Bool)arg1;
- (void)positionChanging:(id)arg1;
- (void)cleanTimer;
- (void)configureControl:(id)arg1;
- (id)initWithBannerType:(unsigned long long)arg1 contentViewController:(id)arg2;
- (void)dealloc;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

