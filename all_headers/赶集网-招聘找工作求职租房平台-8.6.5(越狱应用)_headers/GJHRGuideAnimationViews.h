//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIImageView;

@interface GJHRGuideAnimationViews : UIView <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _animationLoadStartedBlock;
    CDUnknownBlockType _animationLoadFinshedBlock;
    _Bool _isMoving;
    CDUnknownBlockType _closeGuideViewBlock;
    NSArray *_Arrayviews;
    long long _visibleIndex;
    UIView *_mainBackView;
    UIImageView *_imageArrow;
    struct CGPoint _startPoint;
}

@property(retain, nonatomic) UIImageView *imageArrow; // @synthesize imageArrow=_imageArrow;
@property(retain, nonatomic) UIView *mainBackView; // @synthesize mainBackView=_mainBackView;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) long long visibleIndex; // @synthesize visibleIndex=_visibleIndex;
@property(retain, nonatomic) NSArray *Arrayviews; // @synthesize Arrayviews=_Arrayviews;
@property(copy, nonatomic) CDUnknownBlockType closeGuideViewBlock; // @synthesize closeGuideViewBlock=_closeGuideViewBlock;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)twinkle:(id)arg1 Duration:(double)arg2;
- (void)arrowDidSelect;
- (void)twinkleArrowAnimation:(id)arg1;
- (void)animationMove:(double)arg1;
- (void)visibleIndex:(long long)arg1 AndHiddenIndex:(long long)arg2;
- (void)indexDes;
- (void)indexPlus;
- (void)panGesture:(id)arg1;
- (void)addMainView;
- (id)initWithViews:(id)arg1 guideViewAnimationStarted:(CDUnknownBlockType)arg2 guideViewAnimationLoadFinished:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

