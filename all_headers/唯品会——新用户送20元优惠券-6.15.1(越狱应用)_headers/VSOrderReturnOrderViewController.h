//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LDTableViewDataSource-Protocol.h"
#import "LDTableViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VSCartNativeBarDelegate-Protocol.h"
#import "VSOrderChouseCellDelegate-Protocol.h"
#import "VSRequestDelegate-Protocol.h"

@class LDTableView, NSArray, NSIndexPath, NSMutableArray, NSString, UIButton, UILabel, VSAfterSaleGoodsList, VSAfterSaleSizeInputDialog, VSCartNativeBar, VSGuideBubbleView, VSOrderDetailModel;

@interface VSOrderReturnOrderViewController : UIViewController <LDTableViewDelegate, LDTableViewDataSource, VSCartNativeBarDelegate, VSOrderChouseCellDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, VSRequestDelegate>
{
    _Bool _isSelfTypeClick;
    _Bool _isDoubleButtonType;
    _Bool _isSupportOnsite;
    _Bool _showCarriageCell;
    _Bool _canOnsiteSwitch;
    _Bool _hasShowTop5;
    NSString *_orderSn;
    NSString *_opType;
    VSOrderDetailModel *_orderDetails;
    LDTableView *_returnOrderTableView;
    NSMutableArray *_selectGoodsArray;
    NSMutableArray *_sizeIDArray;
    NSMutableArray *_catIDArray;
    NSIndexPath *_currentSelectIndexPath;
    NSMutableArray *_canReturnGoods;
    NSMutableArray *_noReturnGoods;
    UILabel *_topTitleLbl;
    UILabel *_topTotalReturnMoneyLable;
    long long _canBackGoodCount;
    UIButton *_noticeButton;
    VSCartNativeBar *_cartNativeBar;
    NSString *_deleteMizeId;
    NSString *_deleteMizeAmount;
    NSString *_buttonTitleName;
    NSString *_orderStatus;
    NSString *_staticProperty;
    NSString *_specialGoodsDialogMsg;
    VSAfterSaleSizeInputDialog *_returnGoodsSizeInputInfo;
    NSMutableArray *_dataSource;
    VSAfterSaleGoodsList *_afterSaleGoodsList;
    NSArray *_top5ResonIdArray;
    VSGuideBubbleView *_bubbleView;
}

@property(retain, nonatomic) VSGuideBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool hasShowTop5; // @synthesize hasShowTop5=_hasShowTop5;
@property(retain, nonatomic) NSArray *top5ResonIdArray; // @synthesize top5ResonIdArray=_top5ResonIdArray;
@property(retain, nonatomic) VSAfterSaleGoodsList *afterSaleGoodsList; // @synthesize afterSaleGoodsList=_afterSaleGoodsList;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) VSAfterSaleSizeInputDialog *returnGoodsSizeInputInfo; // @synthesize returnGoodsSizeInputInfo=_returnGoodsSizeInputInfo;
@property(copy, nonatomic) NSString *specialGoodsDialogMsg; // @synthesize specialGoodsDialogMsg=_specialGoodsDialogMsg;
@property(copy, nonatomic) NSString *staticProperty; // @synthesize staticProperty=_staticProperty;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) _Bool canOnsiteSwitch; // @synthesize canOnsiteSwitch=_canOnsiteSwitch;
@property(copy, nonatomic) NSString *buttonTitleName; // @synthesize buttonTitleName=_buttonTitleName;
@property(copy, nonatomic) NSString *deleteMizeAmount; // @synthesize deleteMizeAmount=_deleteMizeAmount;
@property(copy, nonatomic) NSString *deleteMizeId; // @synthesize deleteMizeId=_deleteMizeId;
@property(nonatomic) _Bool showCarriageCell; // @synthesize showCarriageCell=_showCarriageCell;
@property(nonatomic) _Bool isSupportOnsite; // @synthesize isSupportOnsite=_isSupportOnsite;
@property(nonatomic) _Bool isDoubleButtonType; // @synthesize isDoubleButtonType=_isDoubleButtonType;
@property(nonatomic) _Bool isSelfTypeClick; // @synthesize isSelfTypeClick=_isSelfTypeClick;
@property(retain, nonatomic) VSCartNativeBar *cartNativeBar; // @synthesize cartNativeBar=_cartNativeBar;
@property(retain, nonatomic) UIButton *noticeButton; // @synthesize noticeButton=_noticeButton;
@property(nonatomic) long long canBackGoodCount; // @synthesize canBackGoodCount=_canBackGoodCount;
@property(retain, nonatomic) UILabel *topTotalReturnMoneyLable; // @synthesize topTotalReturnMoneyLable=_topTotalReturnMoneyLable;
@property(retain, nonatomic) UILabel *topTitleLbl; // @synthesize topTitleLbl=_topTitleLbl;
@property(retain, nonatomic) NSMutableArray *noReturnGoods; // @synthesize noReturnGoods=_noReturnGoods;
@property(retain, nonatomic) NSMutableArray *canReturnGoods; // @synthesize canReturnGoods=_canReturnGoods;
@property(retain, nonatomic) NSIndexPath *currentSelectIndexPath; // @synthesize currentSelectIndexPath=_currentSelectIndexPath;
@property(retain, nonatomic) NSMutableArray *catIDArray; // @synthesize catIDArray=_catIDArray;
@property(retain, nonatomic) NSMutableArray *sizeIDArray; // @synthesize sizeIDArray=_sizeIDArray;
@property(retain, nonatomic) NSMutableArray *selectGoodsArray; // @synthesize selectGoodsArray=_selectGoodsArray;
@property(retain, nonatomic) LDTableView *returnOrderTableView; // @synthesize returnOrderTableView=_returnOrderTableView;
@property(retain, nonatomic) VSOrderDetailModel *orderDetails; // @synthesize orderDetails=_orderDetails;
@property(copy, nonatomic) NSString *opType; // @synthesize opType=_opType;
@property(copy, nonatomic) NSString *orderSn; // @synthesize orderSn=_orderSn;
- (void).cxx_destruct;
- (void)requestError:(id)arg1 error:(id)arg2;
- (void)requestCompleted:(id)arg1 response:(id)arg2;
- (void)removeOnsiteCategoryIdOfProduct:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFixedHeaderInSection:(long long)arg2;
- (void)createFixHeaderView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedGoodsToReturn;
- (void)routeToOnlineService;
- (void)removeBubbleView;
- (void)selectReason:(id)arg1;
- (void)addSelectGoods:(id)arg1;
- (void)pushConfirmOnsiteViewController;
- (void)submitBtnActionDidClicked:(id)arg1;
- (void)sizeInputEntranceClicked;
- (void)mizeAmount:(id)arg1 indexPath:(id)arg2;
- (void)orderDetailChouseCell:(id)arg1;
- (void)showBackReasonView;
- (void)requestGoodsReturn;
- (void)updateCommitButtonStatus;
- (void)noticeAction;
- (id)creatHeadViewHasGap:(_Bool)arg1;
- (void)navigateBack;
- (void)resetViewFrame;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

