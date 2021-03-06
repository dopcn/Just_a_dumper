//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttBaseViewController.h"

#import "MttBackForwardLongPressViewControllerDelegate-Protocol.h"
#import "MttBrowserToolbarDelegate-Protocol.h"
#import "MttBrowserWindowManagerDelegate-Protocol.h"
#import "MttBrowserWindowViewControllerDelegate-Protocol.h"
#import "MttMainMenuViewControllerDelegate-Protocol.h"
#import "MttMultiWindowViewControllerV2Delegate-Protocol.h"
#import "MttNotificationPopViewDelegate-Protocol.h"
#import "MttQuickPanelViewDelegate-Protocol.h"
#import "MttSimplePanGestureBackDelegate-Protocol.h"
#import "MttTabBarDelegate-Protocol.h"
#import "MttToolbarInputMatchViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIMttFindInPageDelegate-Protocol.h"
#import "WYPopoverControllerDelegate-Protocol.h"

@class FastTranslationView, MttBrowserToolbarWrapper, MttBrowserWindowContainerViewController, MttBrowserWindowManager, MttHomeStoryContentController, MttMainView, MttMenuPendant, MttMultiWindowViewControllerV2, MttPopoverController, MttSimplePanGestureBackController, MttToolbarInputMatchView, NSString, UIButton, UIControl, UIImageView, UIMttQuickPanelMenuView, UIMttSimplePageFindToolBar, UIView, UIViewController;

@interface MttMainViewController : MttBaseViewController <MttMultiWindowViewControllerV2Delegate, MttTabBarDelegate, UIGestureRecognizerDelegate, MttBrowserToolbarDelegate, MttBrowserWindowManagerDelegate, MttMainMenuViewControllerDelegate, WYPopoverControllerDelegate, MttQuickPanelViewDelegate, MttToolbarInputMatchViewDelegate, MttBackForwardLongPressViewControllerDelegate, UIMttFindInPageDelegate, MttNotificationPopViewDelegate, MttSimplePanGestureBackDelegate, MttBrowserWindowViewControllerDelegate>
{
    _Bool _multiWindowActived;
    _Bool _multiGestureIng;
    _Bool _isPageFindToolBarAtBottom;
    NSString *_preSearchText;
    MttToolbarInputMatchView *_matchView;
    _Bool _isStatusBarHidden;
    _Bool _toolbarHidden;
    _Bool _multiWindowActivedV2;
    _Bool _isFastTranslateViewAtBottom;
    _Bool _isKeyboardShowing;
    _Bool _isARMode;
    _Bool _isResetScreenOrientationLocked;
    _Bool _isShowMainMenu;
    _Bool _isAddressBarActive;
    _Bool _isBackground;
    MttMainView *_mainView;
    MttBrowserWindowManager *_browserWindowManager;
    MttBrowserWindowContainerViewController *_browserWindowContainerViewController;
    MttBrowserToolbarWrapper *_browserToolbar;
    MttHomeStoryContentController *_homeStoryController;
    UIControl *_multiWindowMaskControl;
    UIMttQuickPanelMenuView *_quickPanelview;
    MttMultiWindowViewControllerV2 *_multiWindowControllerV2;
    long long _splitViewLayoutStyle;
    UIMttSimplePageFindToolBar *_pageFindToolBar;
    FastTranslationView *_fastTranslationView;
    UIViewController *_ARViewController;
    UIButton *_exitFullScreenButton;
    long long _lastFocusedIndexPath;
    MttPopoverController *_mttPopoverController;
    UIViewController *_customPresentViewController;
    MttSimplePanGestureBackController *_panGestureBackController;
    MttMenuPendant *_pendant;
    UIView *_pendantView;
    UIImageView *_pendantImageView;
}

+ (id)sharedInstance;
+ (_Bool)isDevMode;
@property(retain, nonatomic) UIImageView *pendantImageView; // @synthesize pendantImageView=_pendantImageView;
@property(retain, nonatomic) UIView *pendantView; // @synthesize pendantView=_pendantView;
@property(retain, nonatomic) MttMenuPendant *pendant; // @synthesize pendant=_pendant;
@property(retain, nonatomic) MttSimplePanGestureBackController *panGestureBackController; // @synthesize panGestureBackController=_panGestureBackController;
@property(retain, nonatomic) UIViewController *customPresentViewController; // @synthesize customPresentViewController=_customPresentViewController;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isAddressBarActive; // @synthesize isAddressBarActive=_isAddressBarActive;
@property(nonatomic) _Bool isShowMainMenu; // @synthesize isShowMainMenu=_isShowMainMenu;
@property(nonatomic) _Bool isResetScreenOrientationLocked; // @synthesize isResetScreenOrientationLocked=_isResetScreenOrientationLocked;
@property(retain, nonatomic) MttPopoverController *mttPopoverController; // @synthesize mttPopoverController=_mttPopoverController;
@property(nonatomic) long long lastFocusedIndexPath; // @synthesize lastFocusedIndexPath=_lastFocusedIndexPath;
@property(retain, nonatomic) UIButton *exitFullScreenButton; // @synthesize exitFullScreenButton=_exitFullScreenButton;
@property(nonatomic) __weak UIViewController *ARViewController; // @synthesize ARViewController=_ARViewController;
@property(nonatomic) _Bool isARMode; // @synthesize isARMode=_isARMode;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) _Bool isFastTranslateViewAtBottom; // @synthesize isFastTranslateViewAtBottom=_isFastTranslateViewAtBottom;
@property(retain, nonatomic) FastTranslationView *fastTranslationView; // @synthesize fastTranslationView=_fastTranslationView;
@property(retain, nonatomic) UIMttSimplePageFindToolBar *pageFindToolBar; // @synthesize pageFindToolBar=_pageFindToolBar;
@property(nonatomic) _Bool multiGestureIng; // @synthesize multiGestureIng=_multiGestureIng;
@property(nonatomic) long long splitViewLayoutStyle; // @synthesize splitViewLayoutStyle=_splitViewLayoutStyle;
@property(nonatomic) _Bool multiWindowActivedV2; // @synthesize multiWindowActivedV2=_multiWindowActivedV2;
@property(retain, nonatomic) MttMultiWindowViewControllerV2 *multiWindowControllerV2; // @synthesize multiWindowControllerV2=_multiWindowControllerV2;
@property(retain, nonatomic) UIMttQuickPanelMenuView *quickPanelview; // @synthesize quickPanelview=_quickPanelview;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(retain, nonatomic) UIControl *multiWindowMaskControl; // @synthesize multiWindowMaskControl=_multiWindowMaskControl;
@property(retain, nonatomic) MttHomeStoryContentController *homeStoryController; // @synthesize homeStoryController=_homeStoryController;
@property(readonly, nonatomic) MttBrowserToolbarWrapper *browserToolbar; // @synthesize browserToolbar=_browserToolbar;
@property(readonly, nonatomic) MttBrowserWindowContainerViewController *browserWindowContainerViewController; // @synthesize browserWindowContainerViewController=_browserWindowContainerViewController;
@property(readonly, nonatomic) MttBrowserWindowManager *browserWindowManager; // @synthesize browserWindowManager=_browserWindowManager;
@property(nonatomic) _Bool isStatusBarHidden; // @synthesize isStatusBarHidden=_isStatusBarHidden;
@property(readonly, nonatomic) MttMainView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)removeCustomPresentViewController;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dismissViewControllerWithAlphaAnimated:(_Bool)arg1;
- (void)presentViewContoller:(id)arg1 alphaAnimated:(_Bool)arg2;
- (_Bool)panGestureBackRecognizerShouldBegin:(id)arg1;
- (void)panGestureBackSucceed;
- (struct CGRect)finalFrameOfCurrentViewForPanGestureBack;
- (struct CGRect)initialFrameOfCurrentViewForPanGestureBack;
- (id)currentViewForPanGestureBack;
- (_Bool)isChildControllerContained:(Class)arg1;
- (void)mttRemoteNotiView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isRemoteNotificationRegister;
- (_Bool)showNotificationTip:(int)arg1;
- (_Bool)showNotificationTip:(int)arg1 hintText:(id)arg2;
- (_Bool)showImageGalleySaveTip;
- (_Bool)showImageEditorTip;
- (void)userDidTakeScreenshot:(id)arg1;
- (_Bool)isCurrentBrowserWindowUsingCssMode;
- (_Bool)isCurrentBrowserWindowUsingWebContent;
- (void)changeSplitViewLayoutTo:(long long)arg1;
- (void)changeSplitViewLayoutWithNotification:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)onEnterForegeound:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)didDismissAllPopoverControllersByTransition;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)logMemoryInfoInTestMode;
- (void)releaseWindowForIos7;
- (void)didReceiveMemoryWarning;
- (void)longPressViewController:(id)arg1 didSelectRecord:(id)arg2 type:(long long)arg3;
- (void)showRevertWindow:(id)arg1;
- (void)showVideoBoxDownload;
- (void)showSettingChildViewControllerWithID:(int)arg1;
- (void)showHomeOrderSetView;
- (void)showGestureSet;
- (void)showOfflineReading;
- (void)showHistory;
- (void)showBookmark;
- (void)showFavoriteWithType:(long long)arg1;
- (void)showVideoBoxFavourite;
- (void)showVideoBoxHistory;
- (void)adjustPopoverControllerSize:(id)arg1;
- (void)showFavoritePopoverControllerWithFrame:(struct CGRect)arg1;
- (void)showFavoritePopoverController:(id)arg1;
- (void)showFavoritePopover;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)showPluginPopoverController:(id)arg1;
- (void)setToolbarOffset:(double)arg1 animated:(_Bool)arg2;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)browserWindow:(id)arg1 needsUpdateToolbarOffsetWithScrollOffset:(double)arg2 delta:(double)arg3;
- (void)browserWindow:(id)arg1 needsUpdateToolbarOffset:(double)arg2 animated:(_Bool)arg3;
- (void)browserWindow:(id)arg1 wantsToolbarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)exitWebPageTranslationView;
- (void)exitFastTranslationFirstResponder;
- (void)exitFastTranslationView;
- (void)enterReaderMode:(_Bool)arg1;
- (void)pageFindToolBarDidExit;
- (void)exitPageFind;
- (void)nextPageFind;
- (void)lastPageFind;
- (void)highlightPageFindString:(id)arg1;
- (id)getForcusWebScene;
- (void)createPageFindToolBarWithString:(id)arg1;
- (id)addSearchInPageToolbar;
- (void)updatePageFindToolBarLayout;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)scrollViewForKeyboard:(id)arg1 up:(_Bool)arg2;
- (struct CGRect)getRealFrameFromScreenFrame:(struct CGRect)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateExitFullScreenButtonByScene:(id)arg1;
- (void)hideExitFullScreenButton;
- (void)showExitFullScreenButton;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)prepareShowAdCutView;
- (void)clickAdCut;
- (void)activeARVC;
- (void)activeQRScanner;
- (void)dismissChildViewControllerAndActiveAr;
- (void)dismissChildViewControllerAndActiveQRScanner;
- (void)createAndOpenLocalFileOfQRCodeResult:(id)arg1;
- (void)handleQRCodeResult:(id)arg1;
- (void)quickPanelView:(id)arg1 didClickMenu:(long long)arg2;
- (void)updateQuickPanelViewLocation;
- (void)hideQuickPanel;
- (void)showQuickPanel;
- (_Bool)viewContained:(Class)arg1;
- (void)showAccountView;
- (void)showImageGalleyView;
- (void)showImageEditorView;
- (void)mainMenuViewController:(id)arg1 didClickButton:(id)arg2;
- (void)dismissInputMatchView;
- (void)dismissMainMenu;
- (void)dismissPendant;
- (_Bool)getMenuStatus;
- (_Bool)updatePendantImage:(id)arg1;
- (void)addPendantView;
- (void)showMainMenu;
- (void)showMainMenuWithSender:(id)arg1;
- (void)browserWindowManager:(id)arg1 didChangedFromBrowserWindow:(id)arg2 toBrowserWindow:(id)arg3;
- (void)updateMultiWindowAndToolbar:(id)arg1;
- (void)toolbarInputMatchView:(id)arg1 willDisappear:(_Bool)arg2;
- (void)toolbarInputMatchView:(id)arg1 openURL:(id)arg2;
- (void)toolbarInputMatchView:(id)arg1 openURL:(id)arg2 userInfo:(id)arg3;
- (void)toolbar:(id)arg1 didChangeStatusBarStyle:(long long)arg2;
- (void)toolbar:(id)arg1 didChangeStyle:(long long)arg2;
- (void)toolbar:(id)arg1 addressBarDidBecomeActive:(id)arg2;
- (void)toolbar:(id)arg1 didLongPressedButton:(id)arg2;
- (void)toolbar:(id)arg1 didClickButton:(id)arg2;
- (void)disActiveAddressBar:(_Bool)arg1;
- (void)activeAddressBarWithAnimationView:(id)arg1;
- (void)activeAddressBar;
- (void)handleScenesResume;
- (long long)exceptionCloseTime;
- (id)getSnapShotView:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)registNotification;
- (void)showLastFocusedWindow;
- (void)viewDidAppear:(_Bool)arg1;
- (void)testForParser;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)multiWindowViewControllerV2:(id)arg1 revertWindow:(CDUnknownBlockType)arg2;
- (void)multiWindowViewControllerV2:(id)arg1 removeAllWindowsWithComplete:(CDUnknownBlockType)arg2;
- (void)multiWindowViewControllerV2:(id)arg1 didSelectNativeItem:(id)arg2 index:(long long)arg3;
- (void)multiWindowViewControllerV2:(id)arg1 addBrowserWindowWithComplete:(CDUnknownBlockType)arg2;
- (void)multiWindowViewControllerV2:(id)arg1 needHideMulitiWindowWithCompleteBlock:(CDUnknownBlockType)arg2;
- (void)multiWindowViewControllerV2:(id)arg1 closedBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)multiWindowViewControllerV2:(id)arg1 selectedBrowserWindowChangedWithIndex:(unsigned long long)arg2;
- (void)closeForcusWindow;
- (void)hideMultiWindowViewAnimatedVersion2Withcompletion:(CDUnknownBlockType)arg1;
- (void)showMultiWindowViewAnimatedVersion2:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mttMutipleTabBar:(id)arg1 didReplaceBrowserWindowIndex:(long long)arg2 withIndex:(long long)arg3;
- (void)mttMutipleTabBarClearRevertWebBrowserWindows:(id)arg1;
- (void)mttMutipleTabBarShowRevertWebBrowserWindowList:(id)arg1;
- (void)mttMutipleTabBarAddNewWebBrowserWindow:(id)arg1;
- (void)mttMutipleTabBar:(id)arg1 revertBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 restoreBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 closeRightBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 closeleftBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 closeOtherBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 closeAllBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 closedBrowserWindowWithIndex:(unsigned long long)arg2;
- (void)mttMutipleTabBar:(id)arg1 selectedBrowserWindowChangedWithIndex:(unsigned long long)arg2;
- (void)openQBDFTestViewController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)authDeveloper;
- (void)openDevTool;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) _Bool multiFingersGestureEnabled;
- (void)setMultiFingersGestureEnabled:(_Bool)arg1;
@property(nonatomic) struct CGPoint twoFingersPanBeginPoint;
@property(nonatomic) long long twoFingersPanDirection;
- (long long)directionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)prepareToMoveToDirection:(long long)arg1;
- (_Bool)shouldEndDirection:(long long)arg1;
- (_Bool)shouldMoveToDirection:(long long)arg1;
- (void)onTwoFingersPanEnd:(id)arg1;
- (void)onTwoFingersPanMove:(id)arg1;
- (void)onTwoFingersPanBegin:(id)arg1;
- (void)handleTwoFingersPan:(id)arg1;
- (void)initGestureRecoginizers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

