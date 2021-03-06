//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BabyProductDetailController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NVTableView, UITableViewCell;

@interface BabyProductDetailTaoXiModule : BabyProductDetailController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_pics;
    UITableViewCell *_backgroundView;
    NVTableView *_tableView;
}

@property(retain, nonatomic) NVTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *pics; // @synthesize pics=_pics;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)viewHeight;
- (_Bool)shouldShow;
- (id)getPicHeight:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewFromData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setupModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

