//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVTableViewController.h"

#import "NVTableHorizontalViewDataSource-Protocol.h"
#import "NVTableHorizontalViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MenuTag, NSArray, NSIndexPath, NSString, NVModelBaseWeddingHotelExtra, NVModelBaseWeddingHotelMenu, NVShop, NVTableHorizontalView, UITableViewCell, WEDHotelSubmitCell;

@interface WEDHotelMenuViewController : NVTableViewController <NVTableHorizontalViewDataSource, NVTableHorizontalViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WEDHotelSubmitCell *_submitCell;
    NVTableHorizontalView *_segment;
    NSString *_errorMsg;
    long long _shopId;
    NVShop *_shop;
    NVModelBaseWeddingHotelExtra *_weddingHotel;
    NVModelBaseWeddingHotelMenu *_menu;
    NSString *_phoneNo;
    NSArray *_menuTags;
    NSIndexPath *_selectedIndex;
    MenuTag *_selectedMenuTag;
    UITableViewCell *_header;
}

+ (id)smallTextFont;
@property(retain, nonatomic) UITableViewCell *header; // @synthesize header=_header;
@property(retain, nonatomic) MenuTag *selectedMenuTag; // @synthesize selectedMenuTag=_selectedMenuTag;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *menuTags; // @synthesize menuTags=_menuTags;
@property(retain, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(retain, nonatomic) NVModelBaseWeddingHotelMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) NVModelBaseWeddingHotelExtra *weddingHotel; // @synthesize weddingHotel=_weddingHotel;
@property(retain, nonatomic) NVShop *shop; // @synthesize shop=_shop;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NVTableHorizontalView *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) WEDHotelSubmitCell *submitCell; // @synthesize submitCell=_submitCell;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)dishHeight:(long long)arg1;
- (void)addLayer:(struct CGRect)arg1 to:(id)arg2;
- (void)setSegmentLRBackGround;
- (void)showErrorMsg:(id)arg1;
- (struct CGSize)sizeForText:(id)arg1 withWidth:(double)arg2 andFont:(id)arg3;
- (id)dishView:(long long)arg1 withDish:(id)arg2;
- (id)doubleDishView;
- (id)singleDishView;
- (id)zeroDishView;
- (id)createHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectColumnAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForColumnAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 widthForColumnAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfColumnInSection:(long long)arg2;
- (void)queryMenu:(id)arg1;
- (void)resetWithTag:(id)arg1;
- (void)loadMenu;
- (void)queryWeddingHotel;
- (void)queryShop:(long long)arg1;
- (_Bool)handleWithURLAction:(id)arg1;
- (_Bool)isGroupedTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

