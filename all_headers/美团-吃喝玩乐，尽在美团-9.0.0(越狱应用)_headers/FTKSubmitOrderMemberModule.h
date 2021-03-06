//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class FTKSubmitOrderMemberHeaderCell, FTKSubmitOrderMemberViewModel;

@interface FTKSubmitOrderMemberModule : GCBaseModule
{
    FTKSubmitOrderMemberHeaderCell *_headerCell;
    FTKSubmitOrderMemberViewModel *_memberViewModel;
}

@property(retain, nonatomic) FTKSubmitOrderMemberViewModel *memberViewModel; // @synthesize memberViewModel=_memberViewModel;
@property(retain, nonatomic) FTKSubmitOrderMemberHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
- (void).cxx_destruct;
- (void)updateCellStyle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)heightForHeaderCellForSection:(long long)arg1;
- (id)headerCellForSection:(long long)arg1;
- (_Bool)hasHeaderCellForSection:(long long)arg1;
- (_Bool)shouldShow;
- (void)setupModule;

@end

