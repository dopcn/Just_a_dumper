//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class FitnessSubmitOrderTitleCell, GCCellHeightHelper, NVModelBaseJoyCoachSubmission;

@interface FitnessSubmitOrderTitleModule : GCBaseModule
{
    NVModelBaseJoyCoachSubmission *_submission;
    FitnessSubmitOrderTitleCell *_titleCell;
    GCCellHeightHelper *_helper;
}

@property(retain, nonatomic) GCCellHeightHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) FitnessSubmitOrderTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) NVModelBaseJoyCoachSubmission *submission; // @synthesize submission=_submission;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShow;
- (id)stateDidChanged:(id)arg1;
- (void)setupModule;

@end

