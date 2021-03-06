//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "WebViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView;
@protocol SplashViewControllerDelegate;

@interface SplashViewController : UIViewController <SKStoreProductViewControllerDelegate, WebViewControllerDelegate>
{
    double _showedTime;
    int _lastTimes;
    int _repeatCount;
    _Bool _needAnimation;
    NSArray *_storyboards;
    NSTimer *_timer;
    UIImageView *_bkgImageView;
    NSMutableDictionary *_layoutDict;
    _Bool _userSkipped;
    _Bool _allowSkip;
    UIButton *_skipButton;
    _Bool _isReshow;
    _Bool _waitingForRootViewController;
    id <SplashViewControllerDelegate> delegate;
    NSString *defaultTitle;
    NSString *defaultSubtitle;
    UIViewController *parent;
    long long _skipButtonLocMode;
}

+ (id)cachedConfigData;
+ (void)cacheConfig:(id)arg1;
+ (id)configMapFilePath;
+ (id)fullPathOfFile:(id)arg1;
+ (id)uniqueFilePath;
+ (_Bool)checkExpiration:(id)arg1;
+ (id)imagePathOfUrl:(id)arg1;
+ (_Bool)isCachedImage:(id)arg1;
+ (id)filePathViaURL:(id)arg1;
+ (void)initCacheDIR;
+ (id)cachedLayoutDic;
+ (_Bool)canShowSplash;
+ (_Bool)haveAdCache;
+ (void)downloadExtraData;
+ (void)requestResources;
+ (void)fetchDataBackground;
@property(nonatomic) long long skipButtonLocMode; // @synthesize skipButtonLocMode=_skipButtonLocMode;
@property(nonatomic) _Bool waitingForRootViewController; // @synthesize waitingForRootViewController=_waitingForRootViewController;
@property(nonatomic) _Bool isReshow; // @synthesize isReshow=_isReshow;
@property(nonatomic) UIViewController *parent; // @synthesize parent;
@property(copy, nonatomic) NSString *defaultSubtitle; // @synthesize defaultSubtitle;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle;
@property(nonatomic) id <SplashViewControllerDelegate> delegate; // @synthesize delegate;
- (void)webViewControllerRequestShareAction:(id)arg1;
- (void)webViewControllerRequestOpenStoreAction:(id)arg1;
- (void)webViewControllerDidFinish:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)otherSplashClicked;
- (void)viewDidLoad;
- (id)init;
- (void)onSkipButtonTouchUpInside:(id)arg1;
- (void)mainUILoaded;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)timerTicks:(id)arg1;
- (void)hideSelfWithAnimation:(_Bool)arg1;
- (void)hideSelfNow;
- (struct CGRect)rectFromStr:(id)arg1;
- (id)colorFromStr:(id)arg1;
- (id)labelFromStr:(id)arg1 forType:(int)arg2;
- (void)downloadImage:(id)arg1;
- (void)downloadDataBackground:(id)arg1;
- (void)downloadFinishedWithResult:(id)arg1;
- (void)linkButtonTouchUpInside:(id)arg1;
- (void)onCloseReshowTouchUpInside:(id)arg1;
- (void)onSwipeGesture:(id)arg1;
- (void)initUIElements;
- (void)forceStopWithAnimation:(_Bool)arg1;
- (void)beginTimer;
- (void)showInView:(id)arg1 withAnimation:(_Bool)arg2 succeed:(CDUnknownBlockType)arg3;
- (void)doGetRequestBackground:(id)arg1;
- (void)showBkgImgAnimation;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

