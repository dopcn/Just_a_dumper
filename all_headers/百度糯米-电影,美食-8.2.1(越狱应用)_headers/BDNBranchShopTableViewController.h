//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNStyleTableViewController.h"

#import "BDNBranchShopTableViewCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class BDNBranchShoplistJSONModel, BDNBranchShoplistRequestModel, NSString;

@interface BDNBranchShopTableViewController : BDNStyleTableViewController <BDNBranchShopTableViewCellDelegate, UIActionSheetDelegate>
{
    BDNBranchShoplistJSONModel *_shopInfo;
    _Bool _hasSelecteShop;
    long long _branchVCType;
    NSString *_selectedSellId;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _selectAddressBlock;
    BDNBranchShoplistRequestModel *_requestModel;
}

@property(nonatomic) _Bool hasSelecteShop; // @synthesize hasSelecteShop=_hasSelecteShop;
@property(retain, nonatomic) BDNBranchShoplistRequestModel *requestModel; // @synthesize requestModel=_requestModel;
@property(copy, nonatomic) CDUnknownBlockType selectAddressBlock; // @synthesize selectAddressBlock=_selectAddressBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) NSString *selectedSellId; // @synthesize selectedSellId=_selectedSellId;
@property(nonatomic) long long branchVCType; // @synthesize branchVCType=_branchVCType;
- (void).cxx_destruct;
- (void)viewControllerDidClose;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dialNumber:(unsigned long long)arg1;
- (void)tableViewCellDialButtonDidClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)shoplistMap;
- (void)reloadViewControllerData;
- (void)viewControllerShouldReloadMoreData;
- (void)viewControllerShouldReloadData;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;
- (id)initViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

