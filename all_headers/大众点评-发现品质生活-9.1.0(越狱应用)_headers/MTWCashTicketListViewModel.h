//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTWBaseListViewModel.h"

#import "SPKTableViewStatusProtocol-Protocol.h"

@class MTWCashTicketModel, NSString, NSURL, RACCommand, RACSignal;

@interface MTWCashTicketListViewModel : MTWBaseListViewModel <SPKTableViewStatusProtocol>
{
    _Bool _hasCashTicketsData;
    RACCommand *_loadCommand;
    NSString *_title;
    NSString *_helpInfoTitle;
    NSURL *_helpURL;
    NSString *_descForCashTicketsObtainInstructions;
    NSURL *_cashTicketsObtainInstructionsURL;
    MTWCashTicketModel *_model;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) MTWCashTicketModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool hasCashTicketsData; // @synthesize hasCashTicketsData=_hasCashTicketsData;
@property(retain, nonatomic) NSURL *cashTicketsObtainInstructionsURL; // @synthesize cashTicketsObtainInstructionsURL=_cashTicketsObtainInstructionsURL;
@property(copy, nonatomic) NSString *descForCashTicketsObtainInstructions; // @synthesize descForCashTicketsObtainInstructions=_descForCashTicketsObtainInstructions;
@property(retain, nonatomic) NSURL *helpURL; // @synthesize helpURL=_helpURL;
@property(copy, nonatomic) NSString *helpInfoTitle; // @synthesize helpInfoTitle=_helpInfoTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) RACCommand *loadCommand; // @synthesize loadCommand=_loadCommand;
- (void).cxx_destruct;
- (_Bool)hasInvalidUIObjectOfFetcheResults;
- (id)fetchCashTicketInfoSignal;
- (id)loadMoreListSignal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) RACSignal *stateChangeSignal;
@property(readonly) Class superclass;

@end

