//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ShenmaSpringDataProviderDelegate-Protocol.h"
#import "ShenmaSpringSugViewDelegate-Protocol.h"
#import "ShenmaSpringUnitedBarDelegate-Protocol.h"
#import "ShenmaWebPluginProtocol-Protocol.h"
#import "UCVoiceRecognizeObserver-Protocol.h"
#import "WebAgtPluginProtocol-Protocol.h"

@class NSString, ShenmaSpringDataProvider, ShenmaSpringSearchShortcutGuideWindow, ShenmaSpringSearchShortcutView, ShenmaSpringStatusBar, ShenmaSpringStatusBarStatus, ShenmaSpringSugView, ShenmaSpringUnitedBar, UIScrollView, UIView, WebAgent;
@protocol IBizWebView;

@interface ShenmaSpringUnitedBarPlugin : NSObject <ShenmaSpringUnitedBarDelegate, UCVoiceRecognizeObserver, ShenmaSpringDataProviderDelegate, ShenmaSpringSugViewDelegate, WebAgtPluginProtocol, ShenmaWebPluginProtocol>
{
    _Bool _currentIsShenMaSearchUrl;
    _Bool _isPresentingWindow;
    _Bool _sugViewShouldShow;
    _Bool _sugViewHasShow;
    _Bool _ignoreScrollEvent;
    _Bool _isFromBottomBar;
    _Bool _isInActiveState;
    _Bool _registeredContentSizeObserver;
    _Bool _registeredTopbarObserver;
    WebAgent<IBizWebView> *_targetWebAgent;
    ShenmaSpringUnitedBar *_unitedBar;
    ShenmaSpringStatusBar *_statusBar;
    ShenmaSpringSugView *_sugView;
    double _dragYForSug;
    double _beginDragY;
    UIScrollView *_scrollView;
    UIView *_webBrowserView;
    UIView *_bottomAnimateBGView;
    NSString *_lastURLString;
    ShenmaSpringSearchShortcutView *_searchShortcut;
    ShenmaSpringSearchShortcutGuideWindow *_searchShortcutGuideWindow;
    ShenmaSpringStatusBarStatus *_originalStatusBarStatus;
    ShenmaSpringStatusBarStatus *_modifiedStatusBarStatus;
    ShenmaSpringStatusBarStatus *_currentStatusBarStatus;
    ShenmaSpringDataProvider *_dataProvider;
}

+ (long long)statusBarStyle;
+ (id)getUnitedBarPluginWithWebAgent:(id)arg1;
+ (id)plugin;
@property(retain, nonatomic) ShenmaSpringDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) ShenmaSpringStatusBarStatus *currentStatusBarStatus; // @synthesize currentStatusBarStatus=_currentStatusBarStatus;
@property(retain, nonatomic) ShenmaSpringStatusBarStatus *modifiedStatusBarStatus; // @synthesize modifiedStatusBarStatus=_modifiedStatusBarStatus;
@property(retain, nonatomic) ShenmaSpringStatusBarStatus *originalStatusBarStatus; // @synthesize originalStatusBarStatus=_originalStatusBarStatus;
@property(retain, nonatomic) ShenmaSpringSearchShortcutGuideWindow *searchShortcutGuideWindow; // @synthesize searchShortcutGuideWindow=_searchShortcutGuideWindow;
@property(retain, nonatomic) ShenmaSpringSearchShortcutView *searchShortcut; // @synthesize searchShortcut=_searchShortcut;
@property(nonatomic) _Bool registeredTopbarObserver; // @synthesize registeredTopbarObserver=_registeredTopbarObserver;
@property(nonatomic) _Bool registeredContentSizeObserver; // @synthesize registeredContentSizeObserver=_registeredContentSizeObserver;
@property(nonatomic) _Bool isInActiveState; // @synthesize isInActiveState=_isInActiveState;
@property(nonatomic) _Bool isFromBottomBar; // @synthesize isFromBottomBar=_isFromBottomBar;
@property(nonatomic) _Bool ignoreScrollEvent; // @synthesize ignoreScrollEvent=_ignoreScrollEvent;
@property(copy, nonatomic) NSString *lastURLString; // @synthesize lastURLString=_lastURLString;
@property(retain, nonatomic) UIView *bottomAnimateBGView; // @synthesize bottomAnimateBGView=_bottomAnimateBGView;
@property(retain, nonatomic) UIView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double beginDragY; // @synthesize beginDragY=_beginDragY;
@property(nonatomic) double dragYForSug; // @synthesize dragYForSug=_dragYForSug;
@property(nonatomic) _Bool sugViewHasShow; // @synthesize sugViewHasShow=_sugViewHasShow;
@property(nonatomic) _Bool sugViewShouldShow; // @synthesize sugViewShouldShow=_sugViewShouldShow;
@property(retain, nonatomic) ShenmaSpringSugView *sugView; // @synthesize sugView=_sugView;
@property(retain, nonatomic) ShenmaSpringStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(nonatomic) _Bool isPresentingWindow; // @synthesize isPresentingWindow=_isPresentingWindow;
@property(nonatomic) _Bool currentIsShenMaSearchUrl; // @synthesize currentIsShenMaSearchUrl=_currentIsShenMaSearchUrl;
@property(retain, nonatomic) ShenmaSpringUnitedBar *unitedBar; // @synthesize unitedBar=_unitedBar;
@property(nonatomic) WebAgent<IBizWebView> *targetWebAgent; // @synthesize targetWebAgent=_targetWebAgent;
- (void)hideGuide;
- (void)showGuide;
- (void)showAndHideGuide;
- (void)showGuideIfNeeded;
- (_Bool)isShortcutEnabled;
- (void)willLoadRequest:(id)arg1 navigationType:(long long)arg2;
- (long long)statusBarStyle;
- (_Bool)couldCustomMadeStatusBar;
- (_Bool)isStatusBarStyleCustom;
- (double)bluePageHeight;
- (void)tryToGetBluePageHeightWithDelay:(double)arg1;
- (void)injectGetBlueHeightJS;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)interactiveEvent:(id)arg1 andCallback:(CDUnknownBlockType)arg2;
- (_Bool)updateBlueAreaHeight:(id)arg1;
- (_Bool)doPresentBlueMaxWindowWithDict:(id)arg1;
- (_Bool)doPresentWindow:(id)arg1;
- (_Bool)doBottomAnimation:(id)arg1;
- (double)fixedTopBarTop:(double)arg1;
- (void)cleanButtonDidClicked:(id)arg1;
- (void)voiceButtonDidClicked:(id)arg1;
- (void)cancelButtonDidClicked;
- (void)refreshButtonDidClicked;
- (void)fakeInputFieldButtonDidClicked:(id)arg1;
- (void)recommendDataLoadFaildWithErrorCode:(long long)arg1;
- (void)recommendDataLoadSuccessWithDataArray:(id)arg1;
- (void)didFinishRecognize:(id)arg1;
- (void)didCancelRecognize;
- (void)setCurrentBarColor:(id)arg1 style:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setCurrentBarColor:(id)arg1 style:(unsigned long long)arg2;
- (void)updateWithColorDict:(id)arg1;
- (void)setCurrentToolBarColor:(id)arg1 andRefresh:(_Bool)arg2;
- (void)setCurrentToolBarColor:(id)arg1;
- (void)setCurrentStatusBarColor:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentStatusBarColor:(id)arg1;
- (void)handleWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleWebPageForwardGestureDidEnd:(id)arg1;
- (void)handleWebPageForwardGestureDidBegin:(id)arg1;
- (void)handleDidEnterHomePage;
- (void)handlePageHorizontalScrollEndedEvent:(unsigned long long)arg1;
- (void)handlePageHorizontalScrollBeganEvent;
- (void)handleGoBackEvent;
- (void)handleGoBackAndForwardEvent;
- (void)goHomeFromSearchPage;
- (void)didCancelLoading;
- (void)updateTitleText:(id)arg1 isForce:(_Bool)arg2;
- (void)updateTitleText:(id)arg1;
- (void)didClickSugViewButton:(id)arg1 withUrl:(id)arg2;
- (void)shouldAddSugView;
- (void)updateSugViewWithScrollView:(id)arg1 animated:(_Bool)arg2 from:(double)arg3;
- (void)updateSugViewWithScrollView:(id)arg1 animated:(_Bool)arg2;
- (void)resetSugViewAndVariable;
- (void)cleanInputField;
- (void)goToVoiceRecognizer;
- (void)handleCancelButtonEvent;
- (void)handleRefreshButtonEvent;
- (void)goToActiveState:(_Bool)arg1;
- (void)delayHideUnitedBar;
- (void)handleMultiWinWillAppearNotificaiton:(id)arg1;
- (void)handleUIApplicationDidBecomeActiveNotification;
- (void)handleUIApplicationWillResignActiveNotification;
- (void)handleInputSuggestionViewWillDisapearNotification;
- (double)getStatusBarTop;
- (void)analyseColorFromJS:(_Bool)arg1;
- (void)refreshStatusBar:(id)arg1 animated:(_Bool)arg2;
- (void)refreshStatusBar;
- (void)refreshSearchShortcutFrame;
- (void)refreshUnitedBarFrame;
- (void)webAgentPageDidEndDecelerating:(id)arg1;
- (void)webAgentPageDraggingEnded:(_Bool)arg1;
- (void)wegAgentPageDraggingBegin;
- (void)webAgentScrollViewDidScroll:(id)arg1;
- (void)checkInitStateWith:(id)arg1 withOffsetY:(double)arg2;
- (void)setBlueMaxStatusBarInitStatus;
- (void)checkInitStateWithWebAgent:(id)arg1;
- (void)changedUnitedBarAlpha;
- (_Bool)shouldContinueAfterHandleState:(int)arg1 forWebAgent:(id)arg2;
- (void)updateUnitedBarWhenUrlChangeWithAgent:(id)arg1;
- (void)updateMemberVariableWithAgent:(id)arg1;
- (void)refreshColors;
- (void)saveBlueMaxWindowColorIfNeeded;
- (void)showUnitedBar:(_Bool)arg1;
- (void)checkPresentingWindowAndHandleUnitedBar;
- (void)asyncCheckBarLayoutCondition:(id)arg1 fromThirdPage:(_Bool)arg2;
- (void)checkNewBlueMaxWithWebAgent:(id)arg1;
- (void)prepareForPluginUninstall:(id)arg1;
- (void)prepareForPluginInstalled:(id)arg1;
- (void)bindWebNavigationIfNeed;
- (void)registerWebBrowserView;
- (id)getToolBarViewWithCreate:(_Bool)arg1;
- (id)getToolBarView;
- (id)getUnitedBar;
- (void)resetCurrentStatusBarStatus;
- (void)resetOriginalStatusBarStatus;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

