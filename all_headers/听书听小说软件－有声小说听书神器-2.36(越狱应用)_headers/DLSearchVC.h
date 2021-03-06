//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AAPullToRefresh, DLDao, DLLoadingIdentityView, DLSearchBar, NSMutableArray, NSString, UIImageView, UILabel, UITableView;

@interface DLSearchVC : DLBaseVC <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    DLDao *dao;
    UIImageView *topView;
    DLSearchBar *textField;
    UITableView *_tableView;
    NSMutableArray *dataArray;
    UILabel *searchResultLabel;
    int currentState;
    DLLoadingIdentityView *loading;
    AAPullToRefresh *bv;
    NSString *search_more;
    int indexYe;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)getSearchHistroyData;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)clearHistory;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)request:(id)arg1 andFinished:(id)arg2;
- (void)returnButAction;
- (void)searchWord:(id)arg1;
- (void)searchReflashWord;
- (void)searchBarBtnAction;
- (void)request:(id)arg1 andGetHotFinish:(id)arg2;
- (void)getHotWord1;
- (void)showReceivedData:(id)arg1 className:(id)arg2 valuePath:(id)arg3 titleNeedShow:(id)arg4;
- (void)getHotWord;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)createSearchBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createTableView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

