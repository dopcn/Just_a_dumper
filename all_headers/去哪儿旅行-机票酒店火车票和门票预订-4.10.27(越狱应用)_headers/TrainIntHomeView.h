//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SearchNetDealPtc-Protocol.h"
#import "TrainInterPassengerAmountViewDelegate-Protocol.h"
#import "TrainWebTipViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, TrainIntTrainListParam, TrainInterIndex, TrainInterPassengerAmountView, TrainTip, TrainWebTipView, UITableView;

@interface TrainIntHomeView : UIView <UITableViewDelegate, UITableViewDataSource, SearchNetDealPtc, TrainWebTipViewDelegate, TrainInterPassengerAmountViewDelegate>
{
    _Bool _animate;
    NSString *_source;
    UITableView *_intTableView;
    NSMutableArray *_tableModel;
    NSString *_trainDepartCity;
    NSString *_trainArrivalCity;
    NSString *_trainDepartCode;
    NSString *_trainArrivalCode;
    NSString *_trainDepartCityCode;
    NSString *_trainArrivalCityCode;
    NSDate *_searchDepartDate;
    long long _childrenAmount;
    long long _youthAmount;
    long long _adultsAmount;
    long long _seniorsAmount;
    TrainTip *_topTip;
    TrainWebTipView *_tipView;
    TrainInterIndex *_indexTips;
    TrainIntTrainListParam *_trainListParam;
    TrainInterPassengerAmountView *_passengerAmountView;
}

@property(retain, nonatomic) TrainInterPassengerAmountView *passengerAmountView; // @synthesize passengerAmountView=_passengerAmountView;
@property(retain, nonatomic) TrainIntTrainListParam *trainListParam; // @synthesize trainListParam=_trainListParam;
@property(retain, nonatomic) TrainInterIndex *indexTips; // @synthesize indexTips=_indexTips;
@property(retain, nonatomic) TrainWebTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) TrainTip *topTip; // @synthesize topTip=_topTip;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
@property(nonatomic) long long seniorsAmount; // @synthesize seniorsAmount=_seniorsAmount;
@property(nonatomic) long long adultsAmount; // @synthesize adultsAmount=_adultsAmount;
@property(nonatomic) long long youthAmount; // @synthesize youthAmount=_youthAmount;
@property(nonatomic) long long childrenAmount; // @synthesize childrenAmount=_childrenAmount;
@property(retain, nonatomic) NSDate *searchDepartDate; // @synthesize searchDepartDate=_searchDepartDate;
@property(retain, nonatomic) NSString *trainArrivalCityCode; // @synthesize trainArrivalCityCode=_trainArrivalCityCode;
@property(retain, nonatomic) NSString *trainDepartCityCode; // @synthesize trainDepartCityCode=_trainDepartCityCode;
@property(retain, nonatomic) NSString *trainArrivalCode; // @synthesize trainArrivalCode=_trainArrivalCode;
@property(retain, nonatomic) NSString *trainDepartCode; // @synthesize trainDepartCode=_trainDepartCode;
@property(retain, nonatomic) NSString *trainArrivalCity; // @synthesize trainArrivalCity=_trainArrivalCity;
@property(retain, nonatomic) NSString *trainDepartCity; // @synthesize trainDepartCity=_trainDepartCity;
@property(retain, nonatomic) NSMutableArray *tableModel; // @synthesize tableModel=_tableModel;
@property(retain, nonatomic) UITableView *intTableView; // @synthesize intTableView=_intTableView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)chooseInterPassengerAmountFinished:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)TrainWebTipViewDidFinishedLoad:(id)arg1;
- (id)getPassengerAmountDataDic;
- (_Bool)isGuangJiuRailway;
- (_Bool)isTaiWanRailway;
- (void)adjustTrainDateWithFlag;
- (void)finishPickDate:(id)arg1;
- (void)departDateStart;
- (void)resetTrainListParam:(id)arg1;
- (void)getSearch:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)loadCountryFlags:(id)arg1;
- (void)requestIndexBack:(id)arg1;
- (void)loadTrainInterIndex;
- (void)searchStart:(id)arg1;
- (void)reloadWithAnimate:(_Bool)arg1;
- (void)setCityAndCodeToDictionary:(id)arg1;
- (void)chooseCity:(id)arg1;
- (void)reloadTableView;
- (long long)getPassengerAmount;
- (void)setDefaultValue;
- (void)setupTableModel;
- (void)setupContent;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

