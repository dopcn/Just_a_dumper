//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, YYLoadingToastView, YYLocateListResponse, YYSwitchLocateHeaderView;

@interface YYSwitchLocateController : UIViewController <UITableViewDataSource, UITableViewDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    _Bool _isLoading;
    NSString *_currentCity;
    UITableView *_tableView;
    YYLoadingToastView *_toastView;
    YYSwitchLocateHeaderView *_header;
    YYLocateListResponse *_response;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) YYLocateListResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) YYSwitchLocateHeaderView *header; // @synthesize header=_header;
@property(retain, nonatomic) YYLoadingToastView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *currentCity; // @synthesize currentCity=_currentCity;
- (void).cxx_destruct;
- (void)emptyDataSet:(id)arg1 didTapView:(id)arg2;
- (id)descriptionForEmptyDataSet:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (_Bool)emptyDataSetShouldDisplay:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchLocate:(id)arg1;
- (void)requestLocateList;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

