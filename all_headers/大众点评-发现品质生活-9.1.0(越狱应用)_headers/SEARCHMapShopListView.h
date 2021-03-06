//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NVPopoverViewDelegate-Protocol.h"

@class NSString, NVModelBaseSearchShopApiResult, SEARCHFilterButton, SEARCHMapCollectionView, SEARCHMapShopListViewController, SEARCHMapView, SEARCHSearchBar, UIButton, UIImageView;

@interface SEARCHMapShopListView : UIView <NVPopoverViewDelegate>
{
    _Bool _isNewResult;
    SEARCHMapShopListViewController *_viewController;
    NVModelBaseSearchShopApiResult *_result;
    SEARCHMapView *_mapView;
    SEARCHSearchBar *_searchBar;
    SEARCHMapCollectionView *_collectionView;
    UIButton *_searchInRegionButton;
    UIButton *_focusButton;
    UIButton *_zoomoutButton;
    UIButton *_zoominButton;
    UIView *_maskView;
    SEARCHFilterButton *_filterButton;
    UIImageView *_tabSelectedArrow;
}

@property(nonatomic) _Bool isNewResult; // @synthesize isNewResult=_isNewResult;
@property(retain, nonatomic) UIImageView *tabSelectedArrow; // @synthesize tabSelectedArrow=_tabSelectedArrow;
@property(retain, nonatomic) SEARCHFilterButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *zoominButton; // @synthesize zoominButton=_zoominButton;
@property(retain, nonatomic) UIButton *zoomoutButton; // @synthesize zoomoutButton=_zoomoutButton;
@property(retain, nonatomic) UIButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain, nonatomic) UIButton *searchInRegionButton; // @synthesize searchInRegionButton=_searchInRegionButton;
@property(retain, nonatomic) SEARCHMapCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SEARCHSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) SEARCHMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NVModelBaseSearchShopApiResult *result; // @synthesize result=_result;
@property(nonatomic) __weak SEARCHMapShopListViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)popoverViewWillDismiss:(id)arg1;
- (void)dealloc;
- (void)searchInRegion;
- (void)zoomout;
- (void)zoomin;
- (void)focus;
- (void)dismissPopover;
- (void)showPopover;
- (void)filterClicked;
- (void)simplyBack;
- (void)configureCenterShop;
- (void)setupFilter:(id)arg1;
- (void)alterButtonPosition;
- (void)configureFocusButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

