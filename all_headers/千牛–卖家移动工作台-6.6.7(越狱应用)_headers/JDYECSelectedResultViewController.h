//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDYMUSBViewController.h"

#import "JDYECExplorerNavigationProtocol-Protocol.h"
#import "JDYECExplorerTableViewCellDelegate-Protocol.h"
#import "JDYECSelectResultDeleagte-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDYECSelectResult, NSArray, NSString, UITableView;

@interface JDYECSelectedResultViewController : JDYMUSBViewController <UITableViewDelegate, UITableViewDataSource, JDYECSelectResultDeleagte, JDYECExplorerTableViewCellDelegate, JDYECExplorerNavigationProtocol>
{
    UITableView *_tableView;
    JDYECSelectResult *_selectResult;
    NSArray *_personList;
    NSArray *_groupList;
}

@property(retain, nonatomic) NSArray *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) NSArray *personList; // @synthesize personList=_personList;
@property(retain, nonatomic) JDYECSelectResult *selectResult; // @synthesize selectResult=_selectResult;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)shouldNavigationControllerShowSelectSesultFooterView:(id)arg1;
- (void)onLoadSelecteResult:(id)arg1;
- (void)didClickCloseButtonOnCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSelectResultContentChanged:(id)arg1;
- (void)dealloc;
- (void)initTableView;
- (void)reloadListFromResult;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

