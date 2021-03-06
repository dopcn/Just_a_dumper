//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "iCarouselDataSource-Protocol.h"
#import "iCarouselDelegate-Protocol.h"

@class JDPageControl, NSArray, NSString, NSTimer, SHAppCenterBannerModel, iCarousel;
@protocol AppCenterAdDelegate;

@interface AppCenterAdView : JDView <iCarouselDataSource, iCarouselDelegate>
{
    NSTimer *_swapTimer;
    NSArray *_data;
    SHAppCenterBannerModel *_model;
    long long _currentPageIndex;
    iCarousel *_scrollView;
    JDPageControl *_pageControl;
    id <AppCenterAdDelegate> _adDelegate;
}

@property(nonatomic) id <AppCenterAdDelegate> adDelegate; // @synthesize adDelegate=_adDelegate;
@property(retain, nonatomic) JDPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) iCarousel *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) SHAppCenterBannerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)carouselCurrentItemIndexUpdated:(id)arg1;
- (_Bool)carouselShouldWrap:(id)arg1;
- (double)carousel:(id)arg1 itemAlphaForOffset:(double)arg2;
- (double)carouselItemWidth:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfVisibleItemsInCarousel:(id)arg1;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (void)updatePage:(id)arg1;
- (void)swapTimerFired:(id)arg1;
- (void)postStartAnimation:(float)arg1;
- (void)resetStartAnimation;
- (void)resetStartAdview;
- (void)startAnimation:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

