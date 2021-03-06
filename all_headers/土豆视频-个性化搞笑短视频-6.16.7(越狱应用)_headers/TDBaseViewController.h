//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface TDBaseViewController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _statusBarWindowHidden;
    _Bool _viewIsDidAppear;
    _Bool _popGestureEnabled;
    _Bool _resetStatusBar;
    CDUnknownBlockType _viewWillAppear;
    CDUnknownBlockType _viewDidAppear;
    CDUnknownBlockType _viewWillDisappear;
    CDUnknownBlockType _viewDidDisappear;
    long long _viewStatus;
}

+ (void)setStatusBarHidden:(_Bool)arg1;
+ (_Bool)statusBarHidden;
@property(nonatomic) _Bool resetStatusBar; // @synthesize resetStatusBar=_resetStatusBar;
@property(nonatomic) long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(copy, nonatomic) CDUnknownBlockType viewDidDisappear; // @synthesize viewDidDisappear=_viewDidDisappear;
@property(copy, nonatomic) CDUnknownBlockType viewWillDisappear; // @synthesize viewWillDisappear=_viewWillDisappear;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(nonatomic) _Bool popGestureEnabled; // @synthesize popGestureEnabled=_popGestureEnabled;
@property(nonatomic) _Bool viewIsDidAppear; // @synthesize viewIsDidAppear=_viewIsDidAppear;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
@property _Bool statusBarWindowHidden;
@property _Bool statusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setTabbarId:(id)arg1;
- (id)tabbarId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

