//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKBaseModule.h"

@class TPKDestinationHomeNavigationBarModuleViewModel, TPKDestinationHomeNavigationTitleBar, TPKDestinationTitleBarInfo, UIButton;

@interface TPKDestinationHomeNavigationBarModule : TPKBaseModule
{
    _Bool _isDragRefreshing;
    _Bool _shouldCancelRequestAndRefresh;
    _Bool _isWhite;
    long long _destinationCityId;
    TPKDestinationHomeNavigationTitleBar *_titleBarView;
    TPKDestinationHomeNavigationBarModuleViewModel *_titleBarViewModel;
    UIButton *_searchButton;
    TPKDestinationTitleBarInfo *_titleBar;
}

@property(nonatomic) _Bool isWhite; // @synthesize isWhite=_isWhite;
@property(retain, nonatomic) TPKDestinationTitleBarInfo *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) TPKDestinationHomeNavigationBarModuleViewModel *titleBarViewModel; // @synthesize titleBarViewModel=_titleBarViewModel;
@property(retain, nonatomic) TPKDestinationHomeNavigationTitleBar *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(nonatomic) _Bool shouldCancelRequestAndRefresh; // @synthesize shouldCancelRequestAndRefresh=_shouldCancelRequestAndRefresh;
@property(nonatomic) _Bool isDragRefreshing; // @synthesize isDragRefreshing=_isDragRefreshing;
@property(nonatomic) long long destinationCityId; // @synthesize destinationCityId=_destinationCityId;
- (void).cxx_destruct;
- (void)didClickLeftBarButtonItem;
- (void)configNavigationBar;
- (void)configureSearchButton;
- (void)setupModule;

@end

