//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer, UIView, UIViewController;

@protocol M9SlideControllerDelegateAdeptor <NSObject>
@property(readonly, nonatomic) UIViewController *rightContentViewController;
@property(readonly, nonatomic) UIView *rightView;
@property(readonly, nonatomic) UIViewController *rightViewController;
@property(readonly, nonatomic) UIView *leftView;
@property(readonly, nonatomic) double leftViewWidth;
@property(readonly, nonatomic) long long slideType;
- (void)didHideLeftView;
- (void)willHideLeftView;
- (void)didShowLeftView;
- (void)willShowLeftView;
- (_Bool)shouldShowLeftViewWithPanGestureRecognizer:(UIPanGestureRecognizer *)arg1;
@end

