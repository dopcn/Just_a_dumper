//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOTListViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, WBOTSubsidyCostItemViewModel;

@interface WBOTSubsidyCostItemViewController : WBOTListViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _overTimeClickedAddButtonIndex;
    NSIndexPath *_didSelectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *didSelectedIndexPath; // @synthesize didSelectedIndexPath=_didSelectedIndexPath;
@property(nonatomic) long long overTimeClickedAddButtonIndex; // @synthesize overTimeClickedAddButtonIndex=_overTimeClickedAddButtonIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)extraConfigTableView;
- (void)bindViewModel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) WBOTSubsidyCostItemViewModel *viewModel;

@end

