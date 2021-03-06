//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, UIView, YKPIndicatorView;
@protocol YKPSliderViewDelegate;

@interface YKPSliderView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_itemViews[3];
    NSTimer *_sliderTimer;
    _Bool _showIndicator;
    _Bool _autoPlay;
    id <YKPSliderViewDelegate> _mDelegate;
    YKPIndicatorView *_indicatorView;
}

@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(retain, nonatomic) YKPIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak id <YKPSliderViewDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTouchUpInside;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)slideToNext;
- (void)slideToIndex:(long long)arg1;
- (void)caculateSlide;
- (id)sliderItemViewOfCurrentPage;
- (id)sliderItemViewForPlayAtIndex:(long long)arg1 isNext:(_Bool)arg2;
- (id)sliderItemViewAtIndex:(long long)arg1 isNext:(_Bool)arg2;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pageViewClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

