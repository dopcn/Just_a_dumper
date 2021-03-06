//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BottomDeleteViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XimalayaHistoryTableViewCellDeleagte-Protocol.h"

@class BottomDeleteView, CustomerActivityIndicatorView, NSArray, NSString, NavigationBarView, UIButton, UITableView;

@interface XimalayaHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BottomDeleteViewDelegate, XimalayaHistoryTableViewCellDeleagte>
{
    NavigationBarView *navView;
    UIButton *deleteBtn;
    UIButton *cancelDeleteBtn;
    BottomDeleteView *bottomDeleteView;
    UITableView *historyTableView;
    CustomerActivityIndicatorView *indicatorView;
    _Bool isShowEditing;
    NSArray *_historyItemsArray;
}

@property(retain, nonatomic) NSArray *historyItemsArray; // @synthesize historyItemsArray=_historyItemsArray;
- (void)updateDataAndView;
- (void)delSelectUpdate;
- (void)deleteHistoryWithItem:(id)arg1;
- (void)bottomDelViewSelBtnClick;
- (void)bottomDelViewDelBtnClick;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)backButtonAction;
- (void)showEdit:(_Bool)arg1 ani:(_Bool)arg2;
- (void)cancelDeleteButtonClicked;
- (void)buttonDeleteClicked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

