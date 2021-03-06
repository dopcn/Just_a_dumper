//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

#import "LTMCommonCitySelectHistoryCellDelegate-Protocol.h"
#import "LTMNaviBar_e1_Delegate-Protocol.h"
#import "NMTextAndVoiceFieldDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LTMNaviBar_e4, NMShadowTableView, NSArray, NSMutableArray, NSString;
@protocol LTMCommonCitySelectViewDelegate;

@interface LTMCommonCitySelectView : LTMBaseView <LTMNaviBar_e1_Delegate, NMTextAndVoiceFieldDelegate, UITableViewDelegate, UITableViewDataSource, LTMCommonCitySelectHistoryCellDelegate>
{
    _Bool _isSearching;
    _Bool _isInputting;
    id <LTMCommonCitySelectViewDelegate> _delegate;
    long long _selectStatus;
    LTMNaviBar_e4 *_naviBar;
    NSArray *_dataArray;
    NMShadowTableView *_cityTableView;
    NSMutableArray *_currentDataArray;
    struct CGPoint _contentOffset;
}

@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) _Bool isInputting; // @synthesize isInputting=_isInputting;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSMutableArray *currentDataArray; // @synthesize currentDataArray=_currentDataArray;
@property(retain, nonatomic) NMShadowTableView *cityTableView; // @synthesize cityTableView=_cityTableView;
@property(copy, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) LTMNaviBar_e4 *naviBar; // @synthesize naviBar=_naviBar;
@property(nonatomic) long long selectStatus; // @synthesize selectStatus=_selectStatus;
@property(nonatomic) __weak id <LTMCommonCitySelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unfoldSection:(long long)arg1;
- (void)didClickHistoryCommonCity:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)commonCity:(id)arg1 matchWithString:(id)arg2;
- (void)textAndVoiceFieldTextChanged:(id)arg1;
- (void)onNaviBarBackButtonClicked;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

