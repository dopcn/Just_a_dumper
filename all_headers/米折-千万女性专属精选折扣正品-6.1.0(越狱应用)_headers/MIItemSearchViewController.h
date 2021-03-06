//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MIBaseViewController.h"

#import "MIFilterDelegate-Protocol.h"
#import "MIItemSearchTableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MIEmptyView, MIItemSearchFilterView, MIItemSearchOptionsView, MIItemSearchTableView, MISearchSegment, NSDictionary, NSMutableArray, NSString, UITextField, UIView;

@interface MIItemSearchViewController : MIBaseViewController <MIItemSearchTableViewDelegate, UITextFieldDelegate, MIFilterDelegate>
{
    NSMutableArray *_chooseCatIndexs;
    NSMutableArray *_chooseBrandIndexs;
    _Bool _showTBSearch;
    _Bool _isFromSearch;
    _Bool _isFirstFilter;
    _Bool _shouldFilterResult;
    NSString *_navTitle;
    NSString *_requestKey;
    NSString *_option;
    long long _fromWhat;
    MIEmptyView *_emptyView;
    MISearchSegment *_segment;
    MIItemSearchTableView *_tableView;
    UIView *_goTbView;
    UIView *_topSearchView;
    NSString *_flag;
    UITextField *_searchField;
    MIItemSearchOptionsView *_optionsView;
    MIItemSearchFilterView *_filterView;
    MIItemSearchTableView *_itemSearchTableView;
    NSDictionary *_filterDict;
    NSString *_inputWord;
}

@property(copy, nonatomic) NSString *inputWord; // @synthesize inputWord=_inputWord;
@property(retain, nonatomic) NSDictionary *filterDict; // @synthesize filterDict=_filterDict;
@property(nonatomic) _Bool shouldFilterResult; // @synthesize shouldFilterResult=_shouldFilterResult;
@property(retain, nonatomic) MIItemSearchTableView *itemSearchTableView; // @synthesize itemSearchTableView=_itemSearchTableView;
@property(retain, nonatomic) MIItemSearchFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) MIItemSearchOptionsView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) _Bool isFirstFilter; // @synthesize isFirstFilter=_isFirstFilter;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) UIView *topSearchView; // @synthesize topSearchView=_topSearchView;
@property(retain, nonatomic) UIView *goTbView; // @synthesize goTbView=_goTbView;
@property(retain, nonatomic) MIItemSearchTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MISearchSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) _Bool showTBSearch; // @synthesize showTBSearch=_showTBSearch;
@property(retain, nonatomic) MIEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long fromWhat; // @synthesize fromWhat=_fromWhat;
@property(retain, nonatomic) NSString *option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (void).cxx_destruct;
- (void)taobaoSearchWithKeyword;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)handleCancelSearch:(id)arg1;
- (void)requestItemSearchService;
- (void)updateTableView:(id)arg1;
- (id)itemIndexArray:(id)arg1 sort:(id)arg2;
- (void)showChooseView;
- (void)filterCheckWithDict;
- (void)hideOptionsView;
- (void)showOptionsView;
- (void)searchNoProduct;
- (void)refreshSortKey:(id)arg1 filterSellout:(id)arg2;
- (void)filterWithCatIndexs:(id)arg1 brandIndexs:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)validateParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

