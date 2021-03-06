//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackedUIViewController.h"

#import "UIExpandableTableViewDatasource-Protocol.h"
#import "UIExpandableTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SKDataRequest, UIExpandableTableView, UILabel;
@protocol ShoppingBillListViewControllerDelegate;

@interface ShoppingBillListViewController : TrackedUIViewController <UIExpandableTableViewDelegate, UIExpandableTableViewDatasource>
{
    long long _iFailUpload;
    _Bool _bFromBillComplete;
    _Bool _bUploading;
    NSString *_selectedYear;
    id <ShoppingBillListViewControllerDelegate> _delegate;
    UIExpandableTableView *_tableView;
    UILabel *_noResultLabel;
    NSMutableArray *_billList;
    SKDataRequest *_request;
}

@property(nonatomic) _Bool bUploading; // @synthesize bUploading=_bUploading;
@property(retain, nonatomic) SKDataRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *billList; // @synthesize billList=_billList;
@property(nonatomic) __weak UILabel *noResultLabel; // @synthesize noResultLabel=_noResultLabel;
@property(nonatomic) __weak UIExpandableTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ShoppingBillListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bFromBillComplete; // @synthesize bFromBillComplete=_bFromBillComplete;
@property(retain, nonatomic) NSString *selectedYear; // @synthesize selectedYear=_selectedYear;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 expandingCellForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 needsToDownloadDataForExpandableSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 isSectionExpand:(long long)arg2;
- (_Bool)tableView:(id)arg1 canExpandSection:(long long)arg2;
- (double)getTotalAmountPrice;
- (void)deleteBillByBiid:(id)arg1;
- (void)deleteBillLocal;
- (void)startDeleteBills;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

