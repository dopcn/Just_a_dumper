//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDHTMLLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VSActiveCouponDelegate-Protocol.h"
#import "VSCouponCellDelegate-Protocol.h"
#import "VSRequestDelegate-Protocol.h"

@class MDHTMLLabel, NSMutableArray, NSString, UIButton, UITableView, UIView, VSAdvertisementView, VSDragTipsView, VSUserCouponCombineResModel, VSVipshopCommonsDynamicresourceRequest;

@interface VSCouponListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, VSRequestDelegate, VSActiveCouponDelegate, VSCouponCellDelegate, MDHTMLLabelDelegate>
{
    _Bool _isReachedEdge;
    _Bool _shouldReloadData;
    _Bool _isDrag;
    _Bool _isReceivedRemoteNotification;
    _Bool _isLastTimeReceivedRemoteNotification;
    _Bool _hasRemoveTipView;
    _Bool _isStillHoldTipView;
    UITableView *_tableView;
    VSDragTipsView *_dragTipView;
    UITableView *_historyTableView;
    UIView *_noCouponView;
    UIButton *_instrumentButton;
    VSUserCouponCombineResModel *_couponCombineListResponse;
    UIButton *_activBtn;
    NSMutableArray *_allData;
    MDHTMLLabel *_protocalTipsLabel;
    VSAdvertisementView *_adView;
    UIView *_tipView;
    NSString *_vipNoticeTipsText;
    VSVipshopCommonsDynamicresourceRequest *_dynamicScoureRequest;
    double _topMargin;
    double _bottomMargin;
}

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) VSVipshopCommonsDynamicresourceRequest *dynamicScoureRequest; // @synthesize dynamicScoureRequest=_dynamicScoureRequest;
@property(copy, nonatomic) NSString *vipNoticeTipsText; // @synthesize vipNoticeTipsText=_vipNoticeTipsText;
@property(nonatomic) _Bool isStillHoldTipView; // @synthesize isStillHoldTipView=_isStillHoldTipView;
@property(nonatomic) _Bool hasRemoveTipView; // @synthesize hasRemoveTipView=_hasRemoveTipView;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) _Bool isLastTimeReceivedRemoteNotification; // @synthesize isLastTimeReceivedRemoteNotification=_isLastTimeReceivedRemoteNotification;
@property(nonatomic) _Bool isReceivedRemoteNotification; // @synthesize isReceivedRemoteNotification=_isReceivedRemoteNotification;
@property(retain, nonatomic) VSAdvertisementView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) MDHTMLLabel *protocalTipsLabel; // @synthesize protocalTipsLabel=_protocalTipsLabel;
@property(retain, nonatomic) NSMutableArray *allData; // @synthesize allData=_allData;
@property(retain, nonatomic) UIButton *activBtn; // @synthesize activBtn=_activBtn;
@property(retain, nonatomic) VSUserCouponCombineResModel *couponCombineListResponse; // @synthesize couponCombineListResponse=_couponCombineListResponse;
@property(retain, nonatomic) UIButton *instrumentButton; // @synthesize instrumentButton=_instrumentButton;
@property(nonatomic) _Bool isDrag; // @synthesize isDrag=_isDrag;
@property(nonatomic) _Bool shouldReloadData; // @synthesize shouldReloadData=_shouldReloadData;
@property(nonatomic) _Bool isReachedEdge; // @synthesize isReachedEdge=_isReachedEdge;
@property(retain, nonatomic) UIView *noCouponView; // @synthesize noCouponView=_noCouponView;
@property(retain, nonatomic) UITableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) VSDragTipsView *dragTipView; // @synthesize dragTipView=_dragTipView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)loadAdvertismentView;
- (void)updateData;
- (void)instructionsBtnClicked;
- (void)attachDragTipView:(_Bool)arg1;
- (void)changeViewToHistory:(_Bool)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)infoBtnClickedInCouponCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectedActiveCouponType:(long long)arg1;
- (void)updateView:(long long)arg1;
- (void)activeCoupon:(id)arg1;
- (void)removeHistoryCouponView;
- (void)addDragTipView;
- (void)addHistoryCouponView;
- (void)renderContent;
- (void)HTMLLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)requestError:(id)arg1 error:(id)arg2;
- (void)requestCompleted:(id)arg1 response:(id)arg2;
- (void)requestOrderTipsWithCode;
- (id)getInstrumentButtonWithFrame:(struct CGRect)arg1;
- (void)alertMessageHadRead;
- (void)requstGiftCardAndCoupon;
- (void)requestUserCouponList;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)hasReceivedRemoteNotification;
- (void)p_monitorRemoteNoticationReceive;
- (_Bool)isNotificationTimeUp;
- (void)removeTipView;
- (void)removeTipViewClick;
- (void)openSystemNotiTip;
- (void)p_showTipViewIfNeed;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

