//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RPBBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ENSegmentedControl, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface RPBTotalAssetViewController : RPBBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    long long _pageNo;
    long long _pageSize;
    NSDictionary *_result;
    NSMutableArray *_listArray;
    NSMutableArray *_fliterArray;
    ENSegmentedControl *_segmentedControl;
    _Bool _requestSuccess;
    long long _assetType;
    UITableView *_assetTableView;
    UIView *_topView;
    UILabel *_assetLabel;
    UIView *_segmentBackView;
    NSLayoutConstraint *_topConstraint;
}

+ (void)load;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UIView *segmentBackView; // @synthesize segmentBackView=_segmentBackView;
@property(nonatomic) __weak UILabel *assetLabel; // @synthesize assetLabel=_assetLabel;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak UITableView *assetTableView; // @synthesize assetTableView=_assetTableView;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pushFliterAssetViewController:(id)arg1;
- (void)_filterAsset;
- (void)segmentedControlChanged:(long long)arg1;
- (void)_stroageAssetResult:(id)arg1 withType:(long long)arg2;
- (void)_accessMoreUserBalances;
- (void)_accessUserBalances;
- (void)_accessServiceData;
- (void)_updateFailView;
- (void)_updateUI;
- (void)_interfaceUpdate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

