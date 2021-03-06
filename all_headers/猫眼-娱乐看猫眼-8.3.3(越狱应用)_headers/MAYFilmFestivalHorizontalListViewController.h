//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MAYHorizontalListViewDataSource-Protocol.h"
#import "MAYHorizontalListViewDelegate-Protocol.h"
#import "MAYHorizontalListViewScrollGestures-Protocol.h"

@class MAYCellGroupStyleView, MAYFilmFestivalHorizontalListViewModel, MAYFilmFestivalSectionBottomControl, MAYFilmFestivalSectionHeaderView, MAYHomeMovieHorizontalListView, NSString, SAKFetchedResultsController;

@interface MAYFilmFestivalHorizontalListViewController : MTBaseViewController <MAYHorizontalListViewDataSource, MAYHorizontalListViewDelegate, MAYHorizontalListViewScrollGestures>
{
    MAYFilmFestivalHorizontalListViewModel *_viewModel;
    MAYCellGroupStyleView *_groupView;
    MAYFilmFestivalSectionHeaderView *_headerView;
    MAYHomeMovieHorizontalListView *_movieHorizontalView;
    MAYFilmFestivalSectionBottomControl *_bottomView;
    SAKFetchedResultsController *_fetchedResultsController;
}

@property(retain, nonatomic) SAKFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) MAYFilmFestivalSectionBottomControl *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MAYHomeMovieHorizontalListView *movieHorizontalView; // @synthesize movieHorizontalView=_movieHorizontalView;
@property(retain, nonatomic) MAYFilmFestivalSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MAYCellGroupStyleView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) MAYFilmFestivalHorizontalListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setGesturesRecognizersToBeEnabledWhenListViewGestureFails:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)horizontalListView:(id)arg1 cellAtIndexPath:(id)arg2;
- (double)horizontalListView:(id)arg1 widthForCellAtIndexPath:(id)arg2;
- (long long)numberOfSections;
- (long long)horizontalListViewNumberOfCells:(id)arg1 inSection:(long long)arg2;
- (void)didClickAllAwardMovieControl:(id)arg1;
- (void)refreshFilmFestivalMovieList;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

