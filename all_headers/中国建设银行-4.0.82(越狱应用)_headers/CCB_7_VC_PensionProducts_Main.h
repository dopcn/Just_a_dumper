//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "UISearchBarDelegate-Protocol.h"

@class CCB_7_VM_PensionProducts_Main, NSString;

@interface CCB_7_VC_PensionProducts_Main : CCBFormViewController <UISearchBarDelegate>
{
    _Bool _needRefresh;
    _Bool _loginStatus;
    CCB_7_VM_PensionProducts_Main *_viewModel;
}

+ (void)JumpToMe;
@property(nonatomic) _Bool loginStatus; // @synthesize loginStatus=_loginStatus;
@property(retain, nonatomic) CCB_7_VM_PensionProducts_Main *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
- (void).cxx_destruct;
- (void)onlineCustomerBtnAction:(id)arg1;
- (void)navCustomerBtnAction:(id)arg1;
- (void)navigationControllerInit;
- (void)createExplanationController;
- (void)gotoRequest;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initKVO;
- (void)registerAllCell;
- (void)refreshLoginStatus:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

