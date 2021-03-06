//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGCommentTopMenuDelegate-Protocol.h"
#import "KGWidgetMenuViewDelegate-Protocol.h"
#import "UserLoginViewControllerDelegate-Protocol.h"

@class KGCommentInputView, KGDefaultNetErrorView, KGTableView, KGTextRollView, KGTopMenuView, KGWidgetMenuView, NSString, RefreshControl, UIButton, UIView;

@interface KGBaseCommentReplyViewController : KGViewController <UserLoginViewControllerDelegate, KGWidgetMenuViewDelegate, KGCommentTopMenuDelegate>
{
    _Bool _isShowOtherView;
    _Bool _isUnChangeThemeColor;
    _Bool _enableShare;
    KGDefaultNetErrorView *_errorView;
    UIView *_backgroundView;
    KGTableView *_tableView;
    KGWidgetMenuView *_widgetMenuView;
    RefreshControl *_refreshController;
    KGCommentInputView *_inputView;
    KGTopMenuView *_topMenuView;
    UIButton *_topMenuButton;
    KGTextRollView *_titleView;
    struct CGRect _blackRect;
}

@property(retain, nonatomic) KGTextRollView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIButton *topMenuButton; // @synthesize topMenuButton=_topMenuButton;
@property(retain, nonatomic) KGTopMenuView *topMenuView; // @synthesize topMenuView=_topMenuView;
@property(nonatomic) _Bool enableShare; // @synthesize enableShare=_enableShare;
@property(nonatomic) _Bool isUnChangeThemeColor; // @synthesize isUnChangeThemeColor=_isUnChangeThemeColor;
@property(retain, nonatomic) KGCommentInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) struct CGRect blackRect; // @synthesize blackRect=_blackRect;
@property(retain, nonatomic) RefreshControl *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) KGWidgetMenuView *widgetMenuView; // @synthesize widgetMenuView=_widgetMenuView;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isShowOtherView; // @synthesize isShowOtherView=_isShowOtherView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
- (void).cxx_destruct;
- (void)reportCommentBtnClicked:(id)arg1;
- (void)shareCommentBtnClicked:(id)arg1;
- (void)newTopicBtnClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)topMenuClicked;
- (void)p_setUpTopMenuButton;
- (void)setTitle:(id)arg1;
- (id)getTitleViewFromLabel:(id)arg1;
- (void)dealloc;
- (void)startBIStatistics;
- (void)sendBIStatistics;
- (void)askGotoUserLoginView:(long long)arg1;
- (void)gotoLoginView;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)themeDidChange;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)gotoWebViewWithURL:(id)arg1;
- (void)loginCancel;
- (void)loginSuccess;
- (void)logoutDidFinish;
- (void)loginDidFinish;
- (long long)showPlayBarWay;
- (void)requestAgain;
- (void)hideErrorView;
- (void)showErrorView;
- (void)onTapBackgroundView;
- (void)configureBackgroundView;
- (void)registerNotifications;
- (void)menuClickWithMenu:(id)arg1 infoObject:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

