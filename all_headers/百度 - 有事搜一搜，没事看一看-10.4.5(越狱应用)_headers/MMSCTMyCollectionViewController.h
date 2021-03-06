//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSCTAudioListViewController.h"

#import "MMSCTModelDelegate-Protocol.h"

@class MMSCTLoadingView, NSFetchedResultsController, NSString;
@protocol MMSCTMyCollectionViewControllerDelegate;

@interface MMSCTMyCollectionViewController : MMSCTAudioListViewController <MMSCTModelDelegate>
{
    _Bool _isRequesting;
    id <MMSCTMyCollectionViewControllerDelegate> _delegate;
    NSFetchedResultsController *_resultFetcher;
    long long _pageNum;
    MMSCTLoadingView *_loadingView;
    long long _totalNumberInServer;
}

@property(nonatomic) long long totalNumberInServer; // @synthesize totalNumberInServer=_totalNumberInServer;
@property(retain, nonatomic) MMSCTLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSFetchedResultsController *resultFetcher; // @synthesize resultFetcher=_resultFetcher;
@property(nonatomic) __weak id <MMSCTMyCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)placeHolderView;
- (_Bool)needHideFootRefresh:(long long)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)fetcherDidDeleteAtIndexPath:(id)arg1;
- (void)fetcherDidUpdateAtIndexPath:(id)arg1;
- (long long)resultCount;
- (void)swipeToDeleteTableAtIndexPath:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)isNavigationBarHidden;
- (id)infoWithInfoFromServer:(id)arg1;
- (void)deleteFavoriteList:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)requestFavoriteListWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)setTotalNumberInServerWithResponse:(id)arg1;
- (void)collectionNumberChanged:(id)arg1;
- (void)showDeleteFailToast;
- (void)dismissLoadingToast;
- (void)showLoadingToast;
- (void)deleteSelectedAlbum:(id)arg1;
- (void)deleteAllSelectedAlubms;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)updateHeaderCellSelectedNumber;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configAlbumCell:(id)arg1 withAlbum:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)albumResults;
- (long long)albumCount;
- (void)logoutNotification:(id)arg1;
- (void)cancelButtonAction;
- (void)deleteButtonAction;
- (void)editButtonAction;
- (void)changtingHomeButtonAction;
- (void)didMoveToParentViewController:(id)arg1;
- (void)registerCellClass;
- (_Bool)needCheckLoginWhenDidAppear;
- (void)requestFavoriteListFailed;
- (void)handleResponse:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBottomBarShow:(_Bool)arg1 fakeNavBarShow:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

