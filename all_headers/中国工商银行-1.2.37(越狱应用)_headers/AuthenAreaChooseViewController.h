//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AuthenViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UISearchBar, UISearchDisplayController, UITableView;

@interface AuthenAreaChooseViewController : AuthenViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate>
{
    NSDictionary *areaDic;
    NSArray *areaNameArray;
    NSArray *areaNumArray;
    NSMutableArray *_indexArray;
    NSMutableArray *_letterResultArr;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_strongSearchDisplayController;
    NSMutableArray *_searchArray;
}

@property(retain, nonatomic) NSMutableArray *searchArray; // @synthesize searchArray=_searchArray;
@property(retain, nonatomic) UISearchDisplayController *strongSearchDisplayController; // @synthesize strongSearchDisplayController=_strongSearchDisplayController;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *letterResultArr; // @synthesize letterResultArr=_letterResultArr;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSArray *areaNumArray; // @synthesize areaNumArray;
@property(retain, nonatomic) NSArray *areaNameArray; // @synthesize areaNameArray;
@property(retain, nonatomic) NSDictionary *areaDic; // @synthesize areaDic;
- (void).cxx_destruct;
- (void)backClick;
- (void)searchResultsWithKeys:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)readTempAreaData;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setExtraCellLineHidden;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

