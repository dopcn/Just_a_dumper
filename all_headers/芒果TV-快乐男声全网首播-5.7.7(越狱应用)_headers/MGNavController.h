//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIPercentDrivenInteractiveTransition, UIView, UIViewController;

@interface MGNavController : UINavigationController <UIGestureRecognizerDelegate>
{
    struct CGPoint startTouch;
    UIImageView *lastScreenShotView;
    UIView *blackMask;
    double startBackViewX;
    _Bool _canDragBack;
    _Bool _isMoving;
    UIViewController *_rootViewController;
    NSString *_tag;
    UIView *_backgroundView;
    NSMutableArray *_screenShotsList;
    UIPercentDrivenInteractiveTransition *_interactionController;
    double _touchValue;
}

@property(nonatomic) double touchValue; // @synthesize touchValue=_touchValue;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSMutableArray *screenShotsList; // @synthesize screenShotsList=_screenShotsList;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)moveViewWithX:(float)arg1;
- (id)capture;
- (void)pop;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)paningGestureReceive:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

