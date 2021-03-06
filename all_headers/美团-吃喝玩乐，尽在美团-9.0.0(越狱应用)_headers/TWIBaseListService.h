//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKBaseService.h"

#import "SAKCityBasedService-Protocol.h"

@class CLLocation, NSMutableArray, NSString, SAKCity, SAKFetchedResultsController;

@interface TWIBaseListService : SAKBaseService <SAKCityBasedService>
{
    _Bool _loading;
    _Bool _isPageEnabled;
    CLLocation *_location;
    SAKFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_fetchedResults;
    long long _pageLimit;
    long long _offset;
    long long _total;
}

@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long pageLimit; // @synthesize pageLimit=_pageLimit;
@property(readonly, nonatomic) _Bool isPageEnabled; // @synthesize isPageEnabled=_isPageEnabled;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSMutableArray *fetchedResults; // @synthesize fetchedResults=_fetchedResults;
@property(readonly, nonatomic) SAKFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)refreshData:(CDUnknownBlockType)arg1;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)resetDataList;
- (_Bool)hasMore;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SAKCity *city;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

