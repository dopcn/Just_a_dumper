//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class CAGradientLayer, NSString;

@interface WBLoginTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>
{
    long long _operation;
    CAGradientLayer *_shadowLayer;
}

@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

