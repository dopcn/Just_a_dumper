//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKGCBaseModuleViewModel.h"

@class TTKSupplementTicketContext, TTKTrainSupplementDomain;

@interface TTKSupplementRecommentModuleViewModel : HTKGCBaseModuleViewModel
{
    TTKTrainSupplementDomain *_supplementInfo;
}

@property(retain, nonatomic) TTKTrainSupplementDomain *supplementInfo; // @synthesize supplementInfo=_supplementInfo;
- (void).cxx_destruct;
- (double)bottomOffset;
- (void)didClickCell:(id)arg1;
- (void)buildFetchResultsController;
- (void)bindData;

// Remaining properties
@property(retain, nonatomic) TTKSupplementTicketContext *context;

@end

