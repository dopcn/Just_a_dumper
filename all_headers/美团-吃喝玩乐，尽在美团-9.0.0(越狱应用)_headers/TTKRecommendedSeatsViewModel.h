//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKGCBaseModuleViewModel.h"

@class NSArray, TTKRecommendedContext;

@interface TTKRecommendedSeatsViewModel : HTKGCBaseModuleViewModel
{
    _Bool _shouldShow;
    NSArray *_recommendSeats;
}

@property(copy, nonatomic) NSArray *recommendSeats; // @synthesize recommendSeats=_recommendSeats;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
- (void).cxx_destruct;
- (double)headerOffset;
- (double)bottomOffset;
- (void)didSelectItem:(id)arg1;
- (void)buildFetchResultsController;
- (void)bindData;

// Remaining properties
@property(retain, nonatomic) TTKRecommendedContext *context;

@end

