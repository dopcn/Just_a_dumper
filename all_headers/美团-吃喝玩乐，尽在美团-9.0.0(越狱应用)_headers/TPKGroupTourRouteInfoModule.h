//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKBaseModule.h"

@class SAKFetchedResultsController, TPKGroupTourDetailViewModel, TPKGroupTourRouteInfoViewModel, TPKGroupTourRouteSwitcher, TPKGroupTourRouterDayListView;

@interface TPKGroupTourRouteInfoModule : TPKBaseModule
{
    _Bool _isSuspendedViewAdded;
    TPKGroupTourDetailViewModel *_groupTourViewModel;
    TPKGroupTourRouterDayListView *_routerSuspendedView;
    TPKGroupTourRouteSwitcher *_routeSwithcerSuspendedView;
}

@property(nonatomic) _Bool isSuspendedViewAdded; // @synthesize isSuspendedViewAdded=_isSuspendedViewAdded;
@property(retain, nonatomic) TPKGroupTourRouteSwitcher *routeSwithcerSuspendedView; // @synthesize routeSwithcerSuspendedView=_routeSwithcerSuspendedView;
@property(retain, nonatomic) TPKGroupTourRouterDayListView *routerSuspendedView; // @synthesize routerSuspendedView=_routerSuspendedView;
@property(retain, nonatomic) TPKGroupTourDetailViewModel *groupTourViewModel; // @synthesize groupTourViewModel=_groupTourViewModel;
- (void).cxx_destruct;
- (void)setupSuspendedView;
- (void)setupSuspendedRouteTypeView;
- (void)navigateToPhotoViewControllerAtDayIndex:(long long)arg1 andPhotoIndex:(long long)arg2;
- (void)setupModule;

// Remaining properties
@property(retain, nonatomic) SAKFetchedResultsController *itemController; // @dynamic itemController;
@property(retain, nonatomic) TPKGroupTourRouteInfoViewModel *viewModel;

@end

