//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseNativeDetailViewController.h"

#import "WBBottomBarProtocol-Protocol.h"
#import "WBDetail400PhoneVerifyPicCodeDelegate-Protocol.h"
#import "WBDetailScrollNaviSectionHeaderViewDelegate-Protocol.h"
#import "WBFlexibleBottomBarDelegate-Protocol.h"
#import "WBRouteProtocol-Protocol.h"
#import "WBSlideGestureProtocol-Protocol.h"
#import "WBYPServiceGoodsViewControllerDelegate-Protocol.h"
#import "WBYPTelCommentDelegate-Protocol.h"
#import "wbypTelDialogCustomViewProtocol-Protocol.h"

@class CTCallCenter, NSDate, NSDictionary, NSString, WBBottomBar, WBCallLoginManager, WBDetailScrollNaviSectionHeaderView, WBGDTAdModel, WBYPDetailModel, WBYPTelCommentViewController;

@interface WBYPDetailViewController : WBBaseNativeDetailViewController <WBBottomBarProtocol, WBSlideGestureProtocol, WBRouteProtocol, WBDetail400PhoneVerifyPicCodeDelegate, WBYPServiceGoodsViewControllerDelegate, WBFlexibleBottomBarDelegate, wbypTelDialogCustomViewProtocol, WBDetailScrollNaviSectionHeaderViewDelegate, WBYPTelCommentDelegate>
{
    _Bool _needHideHeader;
    _Bool _isRequestingServiceTel;
    _Bool _useFlexBottomBar;
    _Bool _calledPhone;
    NSDictionary *_hy_params;
    WBYPDetailModel *_ypDetailModel;
    WBBottomBar *_bottomBar;
    WBGDTAdModel *_gdtModel;
    NSString *_requestTelItemIden;
    WBCallLoginManager *_callLoginManager;
    WBDetailScrollNaviSectionHeaderView *_scrollNaviTopView;
    WBDetailScrollNaviSectionHeaderView *_scrollNaviSectionHeaderView;
    long long _selectedItemInscrollNavi;
    NSString *_serverNeedsSid;
    WBYPTelCommentViewController *_telCommentViewController;
    NSDate *_calledPhoneTime;
    NSString *_infoId;
    NSString *_bindId;
    CTCallCenter *_callCenter;
}

+ (id)routeWithParamters:(id)arg1 extensionParamters:(id)arg2;
@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(copy, nonatomic) NSString *bindId; // @synthesize bindId=_bindId;
@property(copy, nonatomic) NSString *infoId; // @synthesize infoId=_infoId;
@property(retain, nonatomic) NSDate *calledPhoneTime; // @synthesize calledPhoneTime=_calledPhoneTime;
@property(retain, nonatomic) WBYPTelCommentViewController *telCommentViewController; // @synthesize telCommentViewController=_telCommentViewController;
@property(nonatomic, getter=isCalledPhone) _Bool calledPhone; // @synthesize calledPhone=_calledPhone;
@property(copy, nonatomic) NSString *serverNeedsSid; // @synthesize serverNeedsSid=_serverNeedsSid;
@property(nonatomic) long long selectedItemInscrollNavi; // @synthesize selectedItemInscrollNavi=_selectedItemInscrollNavi;
@property(retain, nonatomic) WBDetailScrollNaviSectionHeaderView *scrollNaviSectionHeaderView; // @synthesize scrollNaviSectionHeaderView=_scrollNaviSectionHeaderView;
@property(retain, nonatomic) WBDetailScrollNaviSectionHeaderView *scrollNaviTopView; // @synthesize scrollNaviTopView=_scrollNaviTopView;
@property(retain, nonatomic) WBCallLoginManager *callLoginManager; // @synthesize callLoginManager=_callLoginManager;
@property(nonatomic) _Bool useFlexBottomBar; // @synthesize useFlexBottomBar=_useFlexBottomBar;
@property(retain, nonatomic) NSString *requestTelItemIden; // @synthesize requestTelItemIden=_requestTelItemIden;
@property(nonatomic) _Bool isRequestingServiceTel; // @synthesize isRequestingServiceTel=_isRequestingServiceTel;
@property(retain, nonatomic) WBGDTAdModel *gdtModel; // @synthesize gdtModel=_gdtModel;
@property(nonatomic) __weak WBBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) _Bool needHideHeader; // @synthesize needHideHeader=_needHideHeader;
@property(retain, nonatomic) WBYPDetailModel *ypDetailModel; // @synthesize ypDetailModel=_ypDetailModel;
@property(retain, nonatomic) NSDictionary *hy_params; // @synthesize hy_params=_hy_params;
- (void).cxx_destruct;
- (_Bool)flexBottomBarClickLogForCollectSuccess:(id)arg1 notied:(_Bool)arg2;
- (void)flexibleBottomBarShouldPageTransferWithAction:(id)arg1;
- (void)hideNavRightButtonCollectItemWithFlexBottomBarDict:(id)arg1;
- (void)handleLeftSlideFinished;
- (void)handleLeftSlide;
- (_Bool)isSupportLeftSlide;
- (void)removePreviousDetailViewController;
- (void)logWithPageType:(id)arg1 actionType:(id)arg2 params:(id)arg3;
- (void)clickPhoneButton:(id)arg1;
- (void)telClickWithModel:(id)arg1 infoDict:(id)arg2 infoTypeTag:(long long)arg3;
- (void)dismiss400AlertInwindow;
- (void)tel400Phone:(id)arg1;
- (_Bool)checkThe400CallWithAction:(id)arg1;
- (void)showGoodsPage:(id)arg1;
- (void)widgetViewShouldPageTransfer:(id)arg1;
- (void)itemSelected:(long long)arg1 targetSection:(unsigned long long)arg2;
- (void)resetScrollNatiSelectTabWhenContentOffsetY:(double)arg1;
- (void)layoutBottomBar:(id)arg1;
- (id)consumeRequestData:(id)arg1;
- (void)finishedRequestServe:(unsigned long long)arg1 result:(id)arg2;
- (id)getPostBodyDic;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)registerBusinessBeans;
- (id)registerPrivateItemView;
- (void)p_observeCallPhoneState;
- (void)p_showTelCommentViewController;
- (void)commentViewControllerWillHide:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

