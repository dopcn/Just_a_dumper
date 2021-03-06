//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModule.h"

@class ScenicMtpHeaderPicsCell, ScenicMtpHeaderPicsModuleViewModel, ScenicMtpHeaderTextCell;

@interface ScenicMtpHeaderPicsModule : NVBaseModule
{
    ScenicMtpHeaderPicsCell *_cellForBriefInfoWithPics;
    ScenicMtpHeaderTextCell *_textCell;
}

@property(retain, nonatomic) ScenicMtpHeaderTextCell *textCell; // @synthesize textCell=_textCell;
@property(retain, nonatomic) ScenicMtpHeaderPicsCell *cellForBriefInfoWithPics; // @synthesize cellForBriefInfoWithPics=_cellForBriefInfoWithPics;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupCells;
- (_Bool)shouldShow;
- (void)setupModule;
- (id)ga_label;
- (_Bool)needAutoModuleView;

// Remaining properties
@property(retain, nonatomic) ScenicMtpHeaderPicsModuleViewModel *viewModel; // @dynamic viewModel;

@end

