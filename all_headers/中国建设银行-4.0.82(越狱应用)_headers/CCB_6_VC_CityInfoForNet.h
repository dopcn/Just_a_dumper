//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBTableViewController.h"

#import "UISearchBarDelegate-Protocol.h"

@class CCBButton, CCBLabel, CCBSearchBar, CCBView, CCB_6_VM_CityInfoForNet, NSString;
@protocol CCB_6_VC_CityInfoForNetDelegate;

@interface CCB_6_VC_CityInfoForNet : CCBTableViewController <UISearchBarDelegate>
{
    id <CCB_6_VC_CityInfoForNetDelegate> _delegate;
    CCB_6_VM_CityInfoForNet *_cityModel;
    CCBView *_maskView;
    CCBLabel *_titleLabel;
    CCBSearchBar *_searchBar;
    CCBButton *_close;
    CCBView *_mainView;
}

@property(retain, nonatomic) CCBView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) CCBButton *close; // @synthesize close=_close;
@property(retain, nonatomic) CCBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) CCBLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCBView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CCB_6_VM_CityInfoForNet *cityModel; // @synthesize cityModel=_cityModel;
@property(nonatomic) __weak id <CCB_6_VC_CityInfoForNetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTriggerRefresh;
- (void)viewModel:(id)arg1 requestFailed:(id)arg2 error:(id)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)CCB_addObserverToViewMode;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

