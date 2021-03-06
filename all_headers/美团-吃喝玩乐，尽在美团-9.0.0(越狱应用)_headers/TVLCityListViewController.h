//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTableViewController.h"

#import "MRDLocationManagerDelegate-Protocol.h"
#import "SAKPortalable-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HTKDealListNoContentView, MTActivityIndicatorView, MTImageAnimationLoadingView, NSString, TVLCityListSearchController, TVLCityListViewModel, UISearchBar, UISearchDisplayController, UIView;

@interface TVLCityListViewController : MTTableViewController <MRDLocationManagerDelegate, SAKPortalable, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _shouldChangeEnvironmentCity;
    CDUnknownBlockType _chooseCity;
    TVLCityListViewModel *_viewModel;
    UISearchBar *_citySearchBar;
    UISearchDisplayController *_citySearchDisplayController;
    TVLCityListSearchController *_searchController;
    MTActivityIndicatorView *_activityIndicatorView;
    UIView *_searchView;
    HTKDealListNoContentView *_noContentView;
    MTImageAnimationLoadingView *_loadingView;
}

@property(retain, nonatomic) MTImageAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HTKDealListNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) MTActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) TVLCityListSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *citySearchDisplayController; // @synthesize citySearchDisplayController=_citySearchDisplayController;
@property(retain, nonatomic) UISearchBar *citySearchBar; // @synthesize citySearchBar=_citySearchBar;
@property(retain, nonatomic) TVLCityListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType chooseCity; // @synthesize chooseCity=_chooseCity;
@property(nonatomic) _Bool shouldChangeEnvironmentCity; // @synthesize shouldChangeEnvironmentCity=_shouldChangeEnvironmentCity;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mrdlocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupSearchBar;
- (void)didClickCloseButton;
- (_Bool)dismissWithCity:(id)arg1;
- (void)initNavbar;
- (void)configureNoContentView;
- (void)configureLoadingContentView;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

