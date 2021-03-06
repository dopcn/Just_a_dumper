//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

#import "TPKCommonBaseModuleViewModelProtocol-Protocol.h"

@class NSString, RACCommand, RACSubject, SAKFetchedResultsController, SAKTravelDeal;

@interface TVLDealDetailImageTextModuleViewModel : GCBaseModuleViewModel <TPKCommonBaseModuleViewModelProtocol>
{
    _Bool _shouldShow;
    SAKFetchedResultsController *_resultController;
    SAKTravelDeal *_deal;
}

@property(retain, nonatomic) SAKTravelDeal *deal; // @synthesize deal=_deal;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(retain, nonatomic) SAKFetchedResultsController *resultController; // @synthesize resultController=_resultController;
- (void).cxx_destruct;
- (id)createImageTextItem;
- (id)buildResultController;
- (void)setupViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RACCommand *didSelectRowAtIndexPathCommand;
@property(nonatomic) double footerHeight;
@property(readonly) unsigned long long hash;
@property(nonatomic) double headerHeight;
@property(nonatomic) _Bool hiddenModuleGroupLine;
@property(retain, nonatomic) RACSubject *showToastMessageSignal;
@property(readonly) Class superclass;

@end

