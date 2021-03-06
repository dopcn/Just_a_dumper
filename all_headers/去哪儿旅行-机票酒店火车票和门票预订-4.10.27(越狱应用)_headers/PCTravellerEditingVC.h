//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NaviBarVC.h"

#import "SearchNetDealPtc-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITableView;
@protocol PCTravellerEditingPtc;

@interface PCTravellerEditingVC : NaviBarVC <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, SearchNetDealPtc>
{
    id <PCTravellerEditingPtc> _delegate;
    UITableView *_tableViewInfo;
    NSString *_friendName;
    NSString *_friendMobile;
}

@property(retain, nonatomic) NSString *friendMobile; // @synthesize friendMobile=_friendMobile;
@property(retain, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(retain, nonatomic) UITableView *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) id <PCTravellerEditingPtc> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getSearch:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)addFriendToTraveller;
- (void)setSaveBtnValid;
- (void)phoneFinished:(id)arg1;
- (void)phoneChanged:(id)arg1;
- (void)phoneBegun:(id)arg1;
- (void)nameFinished:(id)arg1;
- (void)nameChanged:(id)arg1;
- (void)nameBegun:(id)arg1;
- (void)doSaveFriends:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupTableCellMobileSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)initTableCellMobileSubs:(id)arg1;
- (void)setupTableCellNameSubs:(id)arg1 inSize:(struct CGSize *)arg2;
- (void)initTableCellNameSubs:(id)arg1;
- (void)setupNaviBarSubs:(id)arg1;
- (void)setupViewRootSubs:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

