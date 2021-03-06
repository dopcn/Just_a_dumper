//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGVerticalSplitInteractiveViewScrollingDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;
@protocol IGVerticalSplitInteractiveViewDelegate;

@interface IGVerticalSplitInteractiveView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, IGVerticalSplitInteractiveViewScrollingDelegate>
{
    UIView *_topView;
    UIView *_bottomView;
    UIView *_topOverlayView;
    double _bottomViewStartY;
    double _currentTopViewVisibleHeight;
    UIPanGestureRecognizer *_splitViewPanGestureRecognizer;
    struct CGPoint _touchBeganPoint;
    id <IGVerticalSplitInteractiveViewDelegate> _delegate;
}

@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak id <IGVerticalSplitInteractiveViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateOverlayViewAlpha;
- (_Bool)isBottomViewExpandedFullScreen;
- (_Bool)isBottomViewAtDockedPosition;
- (_Bool)allowSwipeDownToDismissWithGestureRecognizer:(id)arg1;
- (_Bool)isPanningDownWithGestureRecognizer:(id)arg1;
- (_Bool)shouldPlayMedia;
- (_Bool)shouldEnableInteractionForTopViewWithPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)verticalSplitInteractiveViewScrollingController:(id)arg1 updateVisibleTopViewFrame:(struct CGRect)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didPan:(id)arg1;
- (void)layoutSubviews;
- (void)setUpViews;
- (id)initWithTopView:(id)arg1 bottomView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

