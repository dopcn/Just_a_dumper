//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface BDPanTransitionView : NSObject
{
    double _transitionProgress;
    UIView *_currentView;
    UIView *_nextView;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak UIView *nextView; // @synthesize nextView=_nextView;
@property(nonatomic) __weak UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)startInteractiveTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCurrentView:(id)arg1 nextView:(id)arg2;

@end

