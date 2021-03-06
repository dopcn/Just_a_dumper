//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RefreshViewController.h"

#import "WccLoginDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UITableView, UIViewController;

@interface UserHomeFavorBrandsViewController : RefreshViewController <WccLoginDelegate>
{
    UIViewController *_parentVC;
    NSMutableArray *_muArrayBrands;
    UILabel *_labelMessage;
    NSString *_strBrandID;
}

@property(retain, nonatomic) NSString *strBrandID; // @synthesize strBrandID=_strBrandID;
@property(retain, nonatomic) UILabel *labelMessage; // @synthesize labelMessage=_labelMessage;
@property(retain, nonatomic) NSMutableArray *muArrayBrands; // @synthesize muArrayBrands=_muArrayBrands;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (int)typeWithDicData:(id)arg1;
- (void)showConfirmWithDelBrandID:(id)arg1 andCell:(id)arg2;
- (void)addFavorBrandsWithBrandID:(id)arg1 Status:(id)arg2 andCellOrIndexPath:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMoreData;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UITableView *m_tableView;
@property(readonly) Class superclass;

@end

