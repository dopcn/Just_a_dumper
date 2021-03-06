//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CMBillShoppingSheetRemarkViewModel, NSArray, NSString, UILabel, UITableView, UIViewController;

@interface CMUnsettledBillsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_unsettleBillTotalAmountLabel;
    UITableView *_billsTableView;
    UIView *_noDataMaskView;
    UIViewController *_viewController;
    CMBillShoppingSheetRemarkViewModel *_remarkViewModel;
    NSArray *_dataSource;
}

+ (id)instanceView:(id)arg1;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CMBillShoppingSheetRemarkViewModel *remarkViewModel; // @synthesize remarkViewModel=_remarkViewModel;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIView *noDataMaskView; // @synthesize noDataMaskView=_noDataMaskView;
@property(nonatomic) __weak UITableView *billsTableView; // @synthesize billsTableView=_billsTableView;
@property(nonatomic) __weak UILabel *unsettleBillTotalAmountLabel; // @synthesize unsettleBillTotalAmountLabel=_unsettleBillTotalAmountLabel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateUIWithViewModel:(id)arg1;
- (void)updateUI;
- (void)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

