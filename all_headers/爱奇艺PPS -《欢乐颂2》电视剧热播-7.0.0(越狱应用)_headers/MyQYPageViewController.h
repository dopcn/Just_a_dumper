//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPadCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYBottomTipViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class IQYPPQToQIYIPresentVipManager, NSMutableArray, NSString, QYBottomTipView, QYMyGroupsMenuViewController, QYVodCouponGuideView, UIViewController;

@interface MyQYPageViewController : QYUPadCommonViewController <UIAlertViewDelegate, IQYDataLoadManagerDelegate, QYBottomTipViewDelegate>
{
    NSString *_preCookie;
    _Bool _shouldJudgeRePresendVip;
    _Bool _shouldGetPresendVip;
    int _currentSelectMenuType;
    int _initMenu;
    UIViewController *_currentVC;
    QYMyGroupsMenuViewController *_myRootView;
    QYBottomTipView *_bottomTipView;
    NSMutableArray *_arrMenuGroupDatas;
    IQYPPQToQIYIPresentVipManager *_presentVipManager;
    QYVodCouponGuideView *_vodCouponGuideView;
}

+ (struct CGRect)mainContentFrame;
@property(retain, nonatomic) QYVodCouponGuideView *vodCouponGuideView; // @synthesize vodCouponGuideView=_vodCouponGuideView;
@property(nonatomic) _Bool shouldGetPresendVip; // @synthesize shouldGetPresendVip=_shouldGetPresendVip;
@property(nonatomic) _Bool shouldJudgeRePresendVip; // @synthesize shouldJudgeRePresendVip=_shouldJudgeRePresendVip;
@property(retain, nonatomic) IQYPPQToQIYIPresentVipManager *presentVipManager; // @synthesize presentVipManager=_presentVipManager;
@property(retain, nonatomic) NSMutableArray *arrMenuGroupDatas; // @synthesize arrMenuGroupDatas=_arrMenuGroupDatas;
@property(nonatomic) int initMenu; // @synthesize initMenu=_initMenu;
@property(retain, nonatomic) QYBottomTipView *bottomTipView; // @synthesize bottomTipView=_bottomTipView;
@property(retain, nonatomic) QYMyGroupsMenuViewController *myRootView; // @synthesize myRootView=_myRootView;
@property(nonatomic) int currentSelectMenuType; // @synthesize currentSelectMenuType=_currentSelectMenuType;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)popPresentVipSuccessAlertWithMessage:(id)arg1;
- (void)presentVipFinished;
- (void)requestGetAward;
- (void)ppsAwardBtPressed:(id)arg1;
- (void)loginFinished;
- (void)showVodCouponGuideView;
- (void)clickViewDetails;
- (void)clickMaintainRights;
- (void)clearClickCloseTipViewTime;
- (void)markClickCloseTipViewTime;
- (void)clickButtonWithTitle:(id)arg1;
- (void)closeButtonClicked;
- (void)layoutTipView;
- (void)removeTipView;
- (void)addTipView;
- (_Bool)needShowTipView;
- (void)showSubVcWithType:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshBindingVipMenuState;
- (void)areaChanged:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)loginSuccess:(id)arg1;
- (void)logOutSuccess:(id)arg1;
- (void)enterOnlineHelpPage:(id)arg1;
- (void)refreshMenuView;
- (void)addObservers;
- (void)enternewFunctionAction:(id)arg1;
- (id)getzoneChangePage;
- (id)getAppSettingPage;
- (id)getHelpFeedBackPage;
- (id)getUserMessagePage;
- (id)getMyVodCouponViewController;
- (id)getMyDLNADevice;
- (id)getVirtualCoinList;
- (id)getCollectPage;
- (id)getPlayHistoryPage;
- (id)getOffLineDownLoadPage;
- (id)getOpenVIPPage;
- (id)getBindingVIPViewController;
- (void)gotoPersonView:(id)arg1;
- (id)getPersonPage:(_Bool)arg1 fromDeviceBindLogin:(_Bool)arg2 isGotoBindView:(_Bool)arg3;
- (void)enterMyAccountLoginPageNoTouchID:(_Bool)arg1;
- (void)enterPersonalInfoPage:(id)arg1;
- (void)menuView:(id)arg1 didSelectMenu:(id)arg2 atIndexPath:(id)arg3 isManual:(_Bool)arg4;
- (void)sendMenuSeletPingback:(int)arg1;
- (void)loadMenuDataWith:(int)arg1;
- (void)drawLeftMenuView;
- (_Bool)isNeedShowSubAccount;
- (void)refreshMenuViewForceDetail:(_Bool)arg1;
- (int)protectFor3G;
- (void)changeToSelectVC:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithChannel:(int)arg1 userInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

