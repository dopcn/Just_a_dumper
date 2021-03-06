//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNListViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString;

@interface BDNRecommendViewController : BDNListViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    long long _deleteSectionNumber;
    NSIndexPath *_deleteIndexPath;
    NSMutableArray *_dataSource;
    NSString *_startDay;
    NSString *_daySize;
    NSString *_dealSize;
    NSString *_situationId;
    NSString *_str_site_list;
}

@property(retain, nonatomic) NSString *str_site_list; // @synthesize str_site_list=_str_site_list;
@property(retain, nonatomic) NSString *situationId; // @synthesize situationId=_situationId;
@property(retain, nonatomic) NSString *dealSize; // @synthesize dealSize=_dealSize;
@property(retain, nonatomic) NSString *daySize; // @synthesize daySize=_daySize;
@property(retain, nonatomic) NSString *startDay; // @synthesize startDay=_startDay;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableViewHeaderView:(id)arg1 withSection:(long long)arg2;
- (void)updateCurrentData;
- (void)requestListData;
- (void)reloadViewControllerData;
- (void)dismissAllRecommend:(id)arg1;
- (void)viewControllerShouldReloadMoreData;
- (void)viewControllerShouldReloadData;
- (id)getTodayString;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initBaseData;
- (void)initBaseView;
- (id)initViewController;
- (id)initWithScheme:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

