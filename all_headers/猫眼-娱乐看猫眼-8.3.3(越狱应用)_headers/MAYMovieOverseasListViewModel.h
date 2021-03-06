//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVMViewModel.h"

#import "MAYMovieOverseasViewModel-Protocol.h"

@class MAYMovieOverseasArea, MAYMovieOverseasService, NSString, RACCommand;

@interface MAYMovieOverseasListViewModel : RVMViewModel <MAYMovieOverseasViewModel>
{
    _Bool _loadEnabled;
    MAYMovieOverseasService *_service;
    MAYMovieOverseasArea *_area;
    RACCommand *_loadCommand;
    RACCommand *_refreshCommand;
}

+ (void)addSectionInfo:(id)arg1 toFetchedResultsController:(id)arg2;
@property(nonatomic) _Bool loadEnabled; // @synthesize loadEnabled=_loadEnabled;
@property(retain, nonatomic) RACCommand *refreshCommand; // @synthesize refreshCommand=_refreshCommand;
@property(retain, nonatomic) RACCommand *loadCommand; // @synthesize loadCommand=_loadCommand;
@property(retain, nonatomic) MAYMovieOverseasArea *area; // @synthesize area=_area;
@property(retain, nonatomic) MAYMovieOverseasService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)networkErrorSection;
- (id)sectionInfoWithTitle:(id)arg1 movies:(id)arg2 type:(unsigned long long)arg3 seekMoreTitle:(id)arg4;
- (id)loadCommingListForce:(_Bool)arg1;
- (id)loadHotListForce:(_Bool)arg1;
- (id)loadRecommendListForce:(_Bool)arg1;
- (id)loadMovieListForce:(_Bool)arg1;
- (id)hasMore;
- (id)initWithArea:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

