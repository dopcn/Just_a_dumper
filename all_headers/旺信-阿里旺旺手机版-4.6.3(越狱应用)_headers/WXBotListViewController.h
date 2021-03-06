//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"

@class NSMutableArray, NSString, UISearchBar, UITableView, UIView, YWSearchController;

__attribute__((visibility("hidden")))
@interface WXBotListViewController : UIViewController <UISearchBarDelegate>
{
    UISearchBar *_searchBar;
    UIView *_tableViewHeadView;
    UIView *_topView;
    UITableView *_tableView;
    YWSearchController *_ywSearchController;
    NSMutableArray *_dataArr;
}

@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) YWSearchController *ywSearchController; // @synthesize ywSearchController=_ywSearchController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak UIView *tableViewHeadView; // @synthesize tableViewHeadView=_tableViewHeadView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)_loadObjectForKey:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)configContentWithArray:(id)arg1;
- (void)_asyncFetchAddedBotsIfNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pressBack:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

