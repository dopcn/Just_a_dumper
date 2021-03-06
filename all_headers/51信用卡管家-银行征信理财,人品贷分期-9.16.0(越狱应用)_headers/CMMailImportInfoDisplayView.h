//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CMMailImportInfoDisplayView : UIView <CAAnimationDelegate>
{
    _Bool _hasNewViewAdded;
    _Bool _isAnimating;
    NSMutableDictionary *_animationClasses;
    NSMutableArray *_animationViews;
    long long _viewIndex;
}

@property(nonatomic) long long viewIndex; // @synthesize viewIndex=_viewIndex;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool hasNewViewAdded; // @synthesize hasNewViewAdded=_hasNewViewAdded;
@property(retain, nonatomic) NSMutableArray *animationViews; // @synthesize animationViews=_animationViews;
@property(retain, nonatomic) NSMutableDictionary *animationClasses; // @synthesize animationClasses=_animationClasses;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_opacityAnimationWithView:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4;
- (void)_positionAnimationWithView:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 key:(id)arg5;
- (void)_dismissUpWithView:(id)arg1;
- (void)_dismissUpWithView:(id)arg1 animation:(_Bool)arg2;
- (void)_showUpWithView:(id)arg1;
- (void)_showUpWithView:(id)arg1 animation:(_Bool)arg2;
- (void)_movingUpWithView:(id)arg1;
- (void)_movingUpWithView:(id)arg1 animation:(_Bool)arg2;
- (void)_showWithAnimation:(_Bool)arg1;
- (void)_endAnimation;
- (void)_startAnimation;
- (double)_movingToPositionWithView:(id)arg1;
- (double)_lastBottomPosition;
- (double)_showUpViewToHeight;
- (double)_totalAnimationViewsHeight;
- (_Bool)_outOfDisplayCount;
- (_Bool)_isRegisteredClass:(Class)arg1;
- (void)en_startAnimating:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)cm_addSubview:(id)arg1;
- (void)unregisterAnimationClass:(Class)arg1;
- (void)registerAnimationClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

