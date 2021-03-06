//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDynamicLayoutBaseView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class CIPTimer, NSString, UIPageControl, UIScrollView;

@interface SAKDynamicLayoutScrollView : SAKDynamicLayoutBaseView <UIScrollViewDelegate>
{
    _Bool _pageControlAllowd;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    double _autoScrollTimeInterval;
    CIPTimer *_scrollTimer;
}

@property(retain, nonatomic) CIPTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(nonatomic) _Bool pageControlAllowd; // @synthesize pageControlAllowd=_pageControlAllowd;
@property(nonatomic) double autoScrollTimeInterval; // @synthesize autoScrollTimeInterval=_autoScrollTimeInterval;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)racScrollViewDidScroll:(id)arg1;
- (void)autoScrollTimerCallback;
- (void)scrollToPageIndex:(long long)arg1;
- (long long)calculatePageIndex;
- (long long)calculateNumberOfPages;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareAutoScrollTimer;
- (void)setPagingEnabled:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

