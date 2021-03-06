//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

#import "OSSUnifiedCreateOrderDateFastSelectCellDelegate-Protocol.h"

@class NSNumber, NSString, NVModelBaseTravelDateModule, OSSUnifiedCreateOrderDateFastSelectCell;

@interface OSSUnifiedCreateOrderDateFastSelectModule : GCBaseModule <OSSUnifiedCreateOrderDateFastSelectCellDelegate>
{
    OSSUnifiedCreateOrderDateFastSelectCell *_selectCell;
    NVModelBaseTravelDateModule *_moduleInfo;
}

@property(retain, nonatomic) NVModelBaseTravelDateModule *moduleInfo; // @synthesize moduleInfo=_moduleInfo;
@property(retain, nonatomic) OSSUnifiedCreateOrderDateFastSelectCell *selectCell; // @synthesize selectCell=_selectCell;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *selectDate;
- (id)gc_mge_info;
- (_Bool)needAutoModuleView;
- (void)gotoCanlendarViewController;
- (void)didSelectStartDate:(id)arg1;
- (void)updateCellUI;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dateFastSelectCell:(id)arg1 didSelectDate:(id)arg2 atOtherDateButton:(_Bool)arg3;
- (id)rechooseDate;
- (_Bool)shouldShow;
- (void)setupModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

