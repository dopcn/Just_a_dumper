//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, QYIphoneFullScreenController, UIView, UIViewController, UIWindow;
@protocol QYPlayerRotationManagerDelegate;

@interface QYPlayerRotationManager : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _rotationStyle;
    UIViewController *_playerVC;
    struct CGRect _miniFrame;
    struct CGRect _convertRect;
    UIView *_playerSuperView;
    _Bool _isRotating;
    int _currentScreenMode;
    long long _curStatusBarOrien;
    UIWindow *_fullWindow;
    QYIphoneFullScreenController *_fullScreenVC;
    long long _toOrien;
    float _rotationDuration;
    _Bool _firstActived;
    _Bool _isCloseAnimation;
    _Bool _sendAutoRotatePingback;
    id <QYPlayerRotationManagerDelegate> _delegate;
}

@property(readonly, nonatomic) UIViewController *fullScreenVC; // @synthesize fullScreenVC=_fullScreenVC;
@property(nonatomic) __weak id <QYPlayerRotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateMiniScreenCacheFrame;
- (_Bool)isBanRotation;
- (_Bool)isOffline;
- (id)_topViewController:(id)arg1;
- (id)topViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)rotationToMiniWithTransitionStyle:(int)arg1 toOrien:(long long)arg2 disableTransition:(_Bool)arg3 withFinishBlock:(CDUnknownBlockType)arg4;
- (void)rotationToFullWithTransitionStyle:(int)arg1 toOrien:(long long)arg2 disableTransition:(_Bool)arg3 withFinishBlock:(CDUnknownBlockType)arg4;
- (void)rotationToMiniWithWindowStyle:(int)arg1 toOrien:(long long)arg2 disableTransition:(_Bool)arg3 withFinishBlock:(CDUnknownBlockType)arg4;
- (void)rotationToFullWithWindowStyle:(int)arg1 toOrien:(long long)arg2 disableTransition:(_Bool)arg3 withFinishBlock:(CDUnknownBlockType)arg4;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)deviceOrientationAutoChangePingBack;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)protectedFullScreenClose;
- (void)changePlayScreenMode:(int)arg1 withAnimation:(_Bool)arg2 withFinishBlock:(CDUnknownBlockType)arg3;
- (void)changePlayScreenMode:(int)arg1 withAnimation:(_Bool)arg2;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithPlayerVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

