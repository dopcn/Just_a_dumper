//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class MTBTrainPaperTicketInfo, SAKFetchedResultsController;

@interface MTBTrainPaperTicketNoticeModule : GCBaseModule
{
    MTBTrainPaperTicketInfo *_paperTicketInfo;
    SAKFetchedResultsController *_resultController;
}

@property(retain, nonatomic) SAKFetchedResultsController *resultController; // @synthesize resultController=_resultController;
@property(retain, nonatomic) MTBTrainPaperTicketInfo *paperTicketInfo; // @synthesize paperTicketInfo=_paperTicketInfo;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)bindData;
- (void)setupModule;

@end

