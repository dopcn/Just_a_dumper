//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, HPDragToDimissView, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HPScreenShotObserver : NSObject
{
    _Bool _isAnimated;
    HPDragToDimissView *_shareHintView;
    NSMutableSet *_observerArray;
    ALAssetsLibrary *_assetsLibrary;
    double _viewAnimationTime;
    struct CGPoint _reservePoint;
}

+ (id)shareScreenShotObserver;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) double viewAnimationTime; // @synthesize viewAnimationTime=_viewAnimationTime;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(nonatomic) struct CGPoint reservePoint; // @synthesize reservePoint=_reservePoint;
@property(retain, nonatomic) NSMutableSet *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) HPDragToDimissView *shareHintView; // @synthesize shareHintView=_shareHintView;
- (void).cxx_destruct;
- (void)shareButtonAction:(id)arg1;
- (void)stopObserveScreenShot;
- (void)stopObserveScreenShotWithObserver:(id)arg1;
- (void)statusBarOrient;
- (void)screenshotEvent:(id)arg1;
- (void)startObserveScreenShotWithObserver:(id)arg1;
- (void)performDismissAfterRuleTime;
- (void)showShareHintView;
- (void)dismissShareHintView;
- (void)dismissShareHintViewWithAnimation:(id)arg1;
- (void)tapToDismiss:(id)arg1;
- (void)swipToDismiss:(id)arg1;
- (id)initWithShareHintView;
- (id)init;
- (void)dealloc;

@end

