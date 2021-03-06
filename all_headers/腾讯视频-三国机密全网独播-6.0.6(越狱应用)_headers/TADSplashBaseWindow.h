//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSTimer, TADSplashBaseViewController, TADSplashItem;
@protocol TADSplashWindowDelegate;

@interface TADSplashBaseWindow : UIWindow
{
    _Bool _shouldFadeOutWhenTimeOut;
    TADSplashItem *_currentSplashItem;
    id <TADSplashWindowDelegate> _splashDelegate;
    TADSplashBaseViewController *_splashViewController;
    NSTimer *_timer;
    CDUnknownBlockType _finishBlock;
    double _timeCost_begin;
}

+ (void)updateUserInfo:(id)arg1;
+ (_Bool)isSplashing;
+ (void)PurgeSplashWindow;
+ (void)HideSplashWindow;
+ (void)PreloadSplash;
+ (_Bool)ShowSplashWindow:(id)arg1 userInfo:(id)arg2;
+ (_Bool)ShowSplashWindow:(id)arg1;
+ (_Bool)ShowSplashWindow:(id)arg1 LaunchImage:(id)arg2 LogoView:(id)arg3 adSkipButton:(id)arg4 withFinishBlock:(CDUnknownBlockType)arg5;
@property(nonatomic) double timeCost_begin; // @synthesize timeCost_begin=_timeCost_begin;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TADSplashBaseViewController *splashViewController; // @synthesize splashViewController=_splashViewController;
@property(nonatomic) __weak id <TADSplashWindowDelegate> splashDelegate; // @synthesize splashDelegate=_splashDelegate;
@property(nonatomic) _Bool shouldFadeOutWhenTimeOut; // @synthesize shouldFadeOutWhenTimeOut=_shouldFadeOutWhenTimeOut;
@property(retain, nonatomic) TADSplashItem *currentSplashItem; // @synthesize currentSplashItem=_currentSplashItem;
- (void).cxx_destruct;
- (void)splashViewControllerUserDidSkipedAd;
- (void)splashViewControllerWillCancelAdCountdown;
- (void)splashViewControllerLandingPageDidAppear;
- (void)splashViewControllerWillOpenLandingPage;
- (void)splashViewControllerWillDisappear;
- (void)splashViewControllerDidAppear;
- (void)splashViewControllerWillAppear;
- (void)delayHideSplash;
- (void)endSplashWindow;
- (void)hideSplash;
- (void)splashWithoutOrder;
- (void)showSplash;
- (void)createRootViewController;
- (_Bool)isRetina5P5Inch;
- (_Bool)isRetina4P7Inch;
- (_Bool)isRetina4Inch;
- (void)timeoutHandle:(id)arg1;
- (void)createPlaceholderViewController;
- (Class)preferredRootViewControllerClass;
- (void)dealloc;
- (id)initWithSplashItem:(id)arg1 splashDelegate:(id)arg2;

@end

