//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView;

@interface PlayerBaseViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _viewPanging;
    _Bool _shouldNotPanCancel;
    _Bool _viewMoving;
    _Bool _shouldClean;
    _Bool _canBeScroll;
    _Bool _isPlayerClosing;
    UIView *_maskView;
    UIPanGestureRecognizer *_pan;
    UIScreenEdgePanGestureRecognizer *_panGesInPlayerBaseView;
    struct CGPoint _viewCenter;
    struct CGPoint _padViewCenter;
    struct CGPoint _padParentViewCenter;
}

@property(nonatomic) struct CGPoint padParentViewCenter; // @synthesize padParentViewCenter=_padParentViewCenter;
@property(nonatomic) struct CGPoint padViewCenter; // @synthesize padViewCenter=_padViewCenter;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGesInPlayerBaseView; // @synthesize panGesInPlayerBaseView=_panGesInPlayerBaseView;
@property(nonatomic) _Bool isPlayerClosing; // @synthesize isPlayerClosing=_isPlayerClosing;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool canBeScroll; // @synthesize canBeScroll=_canBeScroll;
@property(nonatomic) _Bool shouldClean; // @synthesize shouldClean=_shouldClean;
@property(nonatomic) _Bool viewMoving; // @synthesize viewMoving=_viewMoving;
@property(nonatomic) struct CGPoint viewCenter; // @synthesize viewCenter=_viewCenter;
@property(nonatomic) _Bool shouldNotPanCancel; // @synthesize shouldNotPanCancel=_shouldNotPanCancel;
@property(nonatomic) _Bool viewPanging; // @synthesize viewPanging=_viewPanging;
- (void).cxx_destruct;
- (_Bool)isBaseViewMoving;
- (void)cleanWithManualClose:(_Bool)arg1;
- (_Bool)playerIsOpenFromModuleRouting;
- (_Bool)canPanInPlayerController;
- (void)PlayerWillDisAppearAnimationEnd;
- (void)PlayerAppearAnimationEnd;
- (int)currentScreenMode;
- (_Bool)isExistSuspension;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)createPanGes;
- (void)showInParentControllerWithPad:(id)arg1;
- (void)showInParentController:(id)arg1;
- (void)completeCloseAnimationPad:(_Bool)arg1 isManualClose:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissSelfByAnimationPad:(_Bool)arg1 isManualClose:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissSelfByAnimation:(_Bool)arg1 isManualClose:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)panInSelf:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)clean;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) _Bool canPanInView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

