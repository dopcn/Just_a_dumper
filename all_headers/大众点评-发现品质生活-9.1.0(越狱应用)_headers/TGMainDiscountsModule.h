//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModule.h"

#import "TGScrollViewDataSource-Protocol.h"

@class NSString, NVModelBaseHomeModuleList, NVPageControl, RACDisposable, TGBaseCell, TGScrollView;

@interface TGMainDiscountsModule : NVBaseModule <TGScrollViewDataSource>
{
    TGBaseCell *_cellForDiscounts;
    double _heightForDiscountsCell;
    NVModelBaseHomeModuleList *_homeModuleList;
    RACDisposable *_disposableForGetDiscounts;
    TGScrollView *_scrollViewForDiscounts;
    NVPageControl *_pageControl;
    unsigned long long _itemCountForPerPage;
}

@property(nonatomic) unsigned long long itemCountForPerPage; // @synthesize itemCountForPerPage=_itemCountForPerPage;
@property(retain, nonatomic) NVPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) TGScrollView *scrollViewForDiscounts; // @synthesize scrollViewForDiscounts=_scrollViewForDiscounts;
@property(retain, nonatomic) RACDisposable *disposableForGetDiscounts; // @synthesize disposableForGetDiscounts=_disposableForGetDiscounts;
@property(retain, nonatomic) NVModelBaseHomeModuleList *homeModuleList; // @synthesize homeModuleList=_homeModuleList;
@property(nonatomic) double heightForDiscountsCell; // @synthesize heightForDiscountsCell=_heightForDiscountsCell;
@property(retain, nonatomic) TGBaseCell *cellForDiscounts; // @synthesize cellForDiscounts=_cellForDiscounts;
- (void).cxx_destruct;
- (void)tgScrollView:(id)arg1 didSelectRowAtIndex:(unsigned long long)arg2;
- (id)tgScrollView:(id)arg1 viewForRowAtIndex:(unsigned long long)arg2;
- (long long)numberOfRowsPerPageInTGScrollView:(id)arg1;
- (long long)numberOfRowsInTGScrollView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didSelectHeaderCellForSection:(long long)arg1;
- (id)headerCellForSection:(long long)arg1;
- (void)makeupDiscountsCell;
- (void)setupDiscountsCell;
- (id)cityChanged:(id)arg1;
- (id)getDiscountsListSignal;
- (void)getDiscountsList;
- (id)moduleNeedRefresh;
- (_Bool)shouldShow;
- (void)setupModule;
- (id)ga_userinfo;
- (id)ga_label;
- (_Bool)needAutoModuleView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

