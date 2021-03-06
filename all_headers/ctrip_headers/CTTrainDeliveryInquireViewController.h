//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTrainExpendRootViewController.h"

#import "CTTrainCityListViewControllerDelegate-Protocol.h"
#import "CTTrainDeliveryHeaderViewDelegate-Protocol.h"
#import "CTTrainDomesticViewDelegate-Protocol.h"
#import "CTTrainFloatingCalendarViewDelegate-Protocol.h"

@class CTTrainDeliveryHeaderView, CTTrainDomesticView, CTTrainInquireCacheBean, CTTrainPrivateTicketModel, CTTrainTipView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UIScrollView, UIView;

@interface CTTrainDeliveryInquireViewController : CTTrainExpendRootViewController <CTTrainDomesticViewDelegate, CTTrainCityListViewControllerDelegate, CTTrainFloatingCalendarViewDelegate, CTTrainDeliveryHeaderViewDelegate>
{
    long long _privateTicketType;
    UIScrollView *_containerScrollView;
    CTTrainInquireCacheBean *_shadowCacheBean;
    CTTrainDomesticView *_domesticView;
    CTTrainDeliveryHeaderView *_headerView;
    UIView *_ticketInfoView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    CTTrainPrivateTicketModel *_customerTicketModel;
    NSString *_bottomTips;
    CTTrainTipView *_tipView;
    UIView *_promet1View;
    UILabel *_promet1Label;
    UIView *_promet2View;
    UILabel *_promet2Label;
    NSArray *_dataArray;
    NSMutableArray *_unableTipArray;
    NSMutableArray *_unableTitleArray;
    NSLayoutConstraint *_scrollViewTop;
}

@property(retain, nonatomic) NSLayoutConstraint *scrollViewTop; // @synthesize scrollViewTop=_scrollViewTop;
@property(retain, nonatomic) NSMutableArray *unableTitleArray; // @synthesize unableTitleArray=_unableTitleArray;
@property(retain, nonatomic) NSMutableArray *unableTipArray; // @synthesize unableTipArray=_unableTipArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *promet2Label; // @synthesize promet2Label=_promet2Label;
@property(retain, nonatomic) UIView *promet2View; // @synthesize promet2View=_promet2View;
@property(retain, nonatomic) UILabel *promet1Label; // @synthesize promet1Label=_promet1Label;
@property(retain, nonatomic) UIView *promet1View; // @synthesize promet1View=_promet1View;
@property(retain, nonatomic) CTTrainTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSString *bottomTips; // @synthesize bottomTips=_bottomTips;
@property(retain, nonatomic) CTTrainPrivateTicketModel *customerTicketModel; // @synthesize customerTicketModel=_customerTicketModel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIView *ticketInfoView; // @synthesize ticketInfoView=_ticketInfoView;
@property(nonatomic) __weak CTTrainDeliveryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CTTrainDomesticView *domesticView; // @synthesize domesticView=_domesticView;
@property(retain, nonatomic) CTTrainInquireCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
@property(nonatomic) __weak UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) long long privateTicketType; // @synthesize privateTicketType=_privateTicketType;
- (void).cxx_destruct;
- (void)trainDeliveryHeaderView:(id)arg1 withType:(long long)arg2;
- (void)trainFloatingCalendarView:(id)arg1 didSelectedDate:(id)arg2;
- (void)domesticViewQueryAction:(id)arg1;
- (void)domesticViewSelectTimeAction:(id)arg1;
- (void)domesticView:(id)arg1 selectCityMode:(long long)arg2;
- (void)trainCityListViewController:(id)arg1 departCity:(id)arg2 arriveCity:(id)arg3;
- (void)updateCacheBeanDate:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)saveFilter:(id)arg1;
- (void)showCityTrainWidgetWithMode:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)do12306Query;
- (void)doTrainQuery;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updatePromptView:(id)arg1 withView:(id)arg2;
- (id)createPromptView:(id)arg1;
- (void)initView;
- (void)resetTrainSeniorFilter;
- (void)initCacheBean;
- (id)getDataBySeventeen;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

