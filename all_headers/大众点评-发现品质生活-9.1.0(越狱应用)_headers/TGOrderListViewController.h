//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVViewController.h"

#import "NVSegmentedAddNumberControlDelegate-Protocol.h"
#import "TGOrderListSubViewControllerDelegate-Protocol.h"

@class NSArray, NSString, NVModelBasePageModule, NVSegmentedAddNumberControl, RACDisposable, TGOrderListLuckyMoneyView, TGOrderListSubViewController, UIView;

@interface TGOrderListViewController : NVViewController <NVSegmentedAddNumberControlDelegate, TGOrderListSubViewControllerDelegate>
{
    _Bool _isDeleteing;
    _Bool _needRefresh;
    _Bool _needRefreshOrderListModule;
    long long _typeForOrderList;
    NVViewController *_mainViewController;
    UIView *_containerView;
    NVSegmentedAddNumberControl *_segmentedControl;
    UIView *_viewForOrderListSubView;
    TGOrderListLuckyMoneyView *_viewForLuckyMoney;
    TGOrderListSubViewController *_viewCtrlForCurrent;
    NSArray *_arrayForOrderListInfo;
    NVModelBasePageModule *_pageModule;
    RACDisposable *_disposableForGetOrderListModule;
}

@property(nonatomic) _Bool needRefreshOrderListModule; // @synthesize needRefreshOrderListModule=_needRefreshOrderListModule;
@property(retain, nonatomic) RACDisposable *disposableForGetOrderListModule; // @synthesize disposableForGetOrderListModule=_disposableForGetOrderListModule;
@property(retain, nonatomic) NVModelBasePageModule *pageModule; // @synthesize pageModule=_pageModule;
@property(retain, nonatomic) NSArray *arrayForOrderListInfo; // @synthesize arrayForOrderListInfo=_arrayForOrderListInfo;
@property(retain, nonatomic) TGOrderListSubViewController *viewCtrlForCurrent; // @synthesize viewCtrlForCurrent=_viewCtrlForCurrent;
@property(retain, nonatomic) TGOrderListLuckyMoneyView *viewForLuckyMoney; // @synthesize viewForLuckyMoney=_viewForLuckyMoney;
@property(retain, nonatomic) UIView *viewForOrderListSubView; // @synthesize viewForOrderListSubView=_viewForOrderListSubView;
@property(retain, nonatomic) NVSegmentedAddNumberControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NVViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) long long typeForOrderList; // @synthesize typeForOrderList=_typeForOrderList;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isDeleteing; // @synthesize isDeleteing=_isDeleteing;
- (void).cxx_destruct;
- (void)setNeedRefreshOrderListModule;
- (void)setNeedRefresh;
- (void)hideLuckyMoneyView;
- (void)showLuckyMoneyView;
- (void)orderListSubViewController:(id)arg1 deleteSuccess:(id)arg2;
- (void)orderListSubViewController:(id)arg1 refreshDataSuccess:(id)arg2;
- (void)valueChanged:(id)arg1 selectedSegmentIndex:(long long)arg2;
- (void)getOrderListModule;
- (void)endDeleting;
- (void)beginDeleting;
- (void)hideNavigationItem;
- (void)enableNavigationItem:(_Bool)arg1;
- (void)setNavigationItemDeleteButton:(_Bool)arg1;
- (void)setupSegmentedControl;
- (void)makeArrayForOrderListInfo;
- (void)initViews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

