//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class GCTermsModuleViewModel, NSArray;

@interface GCTermsModule : GCBaseModule
{
    NSArray *_cellItems;
}

@property(retain, nonatomic) NSArray *cellItems; // @synthesize cellItems=_cellItems;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)headerCellForSection:(long long)arg1;
- (_Bool)hasHeaderCellForSection:(long long)arg1;
- (id)makeupCellItems:(id)arg1;
- (void)setupModule;
- (_Bool)shouldShow;
- (_Bool)needAutoModuleView;

// Remaining properties
@property(retain, nonatomic) GCTermsModuleViewModel *viewModel; // @dynamic viewModel;

@end

