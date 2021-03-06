//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTDragRefreshTableViewController.h"

#import "MAYFetchedResultsTableDataSourceProtocol-Protocol.h"
#import "MAYStatisticsPageValueProtocol-Protocol.h"

@class MAYImageAnimationLoadingView, MAYMovieInfoListViewModel, NSString, SAKFetchedResultsController;

@interface MAYMovieInfoListViewController : MTDragRefreshTableViewController <MAYFetchedResultsTableDataSourceProtocol, MAYStatisticsPageValueProtocol>
{
    SAKFetchedResultsController *_fetchedResultsController;
    MAYMovieInfoListViewModel *_viewModel;
    MAYImageAnimationLoadingView *_loadingView;
}

@property(retain, nonatomic) MAYImageAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MAYMovieInfoListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SAKFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadMore;
- (void)refresh;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

