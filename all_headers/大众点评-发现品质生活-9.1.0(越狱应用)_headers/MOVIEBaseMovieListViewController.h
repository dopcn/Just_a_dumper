//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVTableViewController.h"

#import "MOVIEDataLoaderDelegate-Protocol.h"

@class MOVIEDataLoader, NSArray, NSMutableArray, NSString, SimpleFliperView, UITableViewCell;

@interface MOVIEBaseMovieListViewController : NVTableViewController <MOVIEDataLoaderDelegate>
{
    NSString *_fromString;
    MOVIEDataLoader *_movieListDataLoader;
    NSMutableArray *_sectionArray;
    UITableViewCell *_retryCell;
    SimpleFliperView *_announceView;
    NSArray *_announceList;
}

@property(retain, nonatomic) NSArray *announceList; // @synthesize announceList=_announceList;
@property(retain, nonatomic) SimpleFliperView *announceView; // @synthesize announceView=_announceView;
@property(retain, nonatomic) UITableViewCell *retryCell; // @synthesize retryCell=_retryCell;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) MOVIEDataLoader *movieListDataLoader; // @synthesize movieListDataLoader=_movieListDataLoader;
@property(retain, nonatomic) NSString *fromString; // @synthesize fromString=_fromString;
- (void).cxx_destruct;
- (void)bannerClosed:(id)arg1;
- (void)announceCellonClick:(id)arg1;
- (id)formatAnnounces:(id)arg1;
- (void)loadAnnouce;
- (void)setAnnounceVisible:(_Bool)arg1;
- (void)hideBannerView;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)makeupHeaderView;
- (void)getMovieBanner:(long long)arg1;
- (void)loadSuccess:(id)arg1;
- (void)loadFailed:(id)arg1 error:(id)arg2;
- (void)refreshView:(id)arg1;
- (id)makeupMovieDataLoader:(long long)arg1;
- (_Bool)isEmptyResult;
- (void)prepareSectionArray;
- (void)refreshList;
- (void)requestMovieList;
- (void)reset;
- (void)loadNext;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

