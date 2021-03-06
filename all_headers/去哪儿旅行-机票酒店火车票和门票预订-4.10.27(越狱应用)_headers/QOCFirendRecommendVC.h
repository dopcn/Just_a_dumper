//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOCNaviBarVC.h"

#import "QOCNetDealPtc-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIButton, UILabel, UITableView;

@interface QOCFirendRecommendVC : QOCNaviBarVC <QOCNetDealPtc, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *tableViewContact;
    UILabel *labelTip;
    UIButton *buttonRefresh;
    NSArray *arraySession;
    NSDictionary *dictionaryContact;
    NSArray *arrayFriendNetwork;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)notificationNetworkChanged:(id)arg1;
- (void)doError:(id)arg1;
- (void)actionRefresh:(id)arg1;
- (void)actionAddFriendCell:(id)arg1;
- (void)actionAddFriend:(id)arg1;
- (void)mergeContact:(id)arg1;
- (void)setUpNaviBarView;
- (void)getQOCType:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)networkRequestFriendList;
- (void)networkUploadAddressBook;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

