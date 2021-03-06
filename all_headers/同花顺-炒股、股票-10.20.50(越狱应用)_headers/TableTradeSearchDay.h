//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompView.h"

@class HXCancelOrSearchGj, UIButton, UIView;

@interface TableTradeSearchDay : CompView
{
    UIView *m_pDateView;
    HXCancelOrSearchGj *_resultTable;
    UIButton *_refreshButton;
    UIView *_topSepView;
    UIView *_sepView;
    UIButton *_beginDateBtn;
    UIButton *_endDateBtn;
    long long _selectedBtnIndex;
}

@property(nonatomic) long long selectedBtnIndex; // @synthesize selectedBtnIndex=_selectedBtnIndex;
@property(retain, nonatomic) UIButton *endDateBtn; // @synthesize endDateBtn=_endDateBtn;
@property(retain, nonatomic) UIButton *beginDateBtn; // @synthesize beginDateBtn=_beginDateBtn;
@property(nonatomic) __weak UIView *sepView; // @synthesize sepView=_sepView;
@property(nonatomic) __weak UIView *topSepView; // @synthesize topSepView=_topSepView;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
- (void).cxx_destruct;
- (int)onNotifyProcess:(id)arg1;
- (void)setData:(struct CEQStuffBaseStruct *)arg1;
- (void)didSubmitCancel:(id)arg1;
- (void)didSubmitOk:(id)arg1;
- (void)bindAction:(id)arg1;
- (void)initOkAndCancelBtnStyle:(id)arg1 cancel:(id)arg2;
- (void)didSubmitSearch:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (int)checkValidDateRangeFrom:(id)arg1 To:(id)arg2;
- (void)showDateView:(id)arg1 selectedIndex:(long long)arg2;
- (void)endDateClick:(id)arg1;
- (void)beginDateClick:(id)arg1;
- (void)setBeginAndEndDateBtnTitle;
- (void)willDisappear;
- (void)didAppear;
- (void)requestData:(_Bool)arg1;
- (void)willAppear;
- (void)onFinishInflate;

@end

