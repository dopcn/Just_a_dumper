//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "MTPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MTImageManager, MTMYPhotoAlbumViewController, MTPhotoAlbum, MTPhotoAsset, MTPhotoLibrary, NSMutableArray, NSSet, NSString, UIButton, UICollectionView;

@interface MTMYPhotoAssetsViewController : UIViewController <MTPhotoLibraryChangeObserver, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIButton *_titleButton;
    _Bool _hasPhotoLibraryDidChangeNoHandle;
    _Bool _isNeedToShowLastPage;
    _Bool _isFetchingAlbumData;
    MTPhotoLibrary *_sharedPhotoLibrary;
    _Bool _hasPhotoAuthorization;
    _Bool _needLoadDetail;
    _Bool _isInBackground;
    _Bool _shouldShowEmptyView;
    _Bool _originStatusBarHidden;
    UICollectionView *_collectionView;
    MTPhotoAsset *_currentSelectedAsset;
    NSSet *_supportedPhotoNameExtension;
    MTPhotoAlbum *_photoAlbum;
    MTImageManager *_imageManager;
    MTMYPhotoAlbumViewController *_photoAlbumViewController;
    NSMutableArray *_photoAlbums;
    NSMutableArray *_photos;
    NSMutableArray *_selectedIndexs;
    UIButton *_btnCamera;
    UIButton *_btnClose;
    struct CGRect _previousPreheatRect;
}

@property(retain, nonatomic) UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(retain, nonatomic) UIButton *btnCamera; // @synthesize btnCamera=_btnCamera;
@property(retain, nonatomic) NSMutableArray *selectedIndexs; // @synthesize selectedIndexs=_selectedIndexs;
@property(nonatomic) _Bool originStatusBarHidden; // @synthesize originStatusBarHidden=_originStatusBarHidden;
@property(nonatomic) _Bool shouldShowEmptyView; // @synthesize shouldShowEmptyView=_shouldShowEmptyView;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool needLoadDetail; // @synthesize needLoadDetail=_needLoadDetail;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *photoAlbums; // @synthesize photoAlbums=_photoAlbums;
@property(retain, nonatomic) MTMYPhotoAlbumViewController *photoAlbumViewController; // @synthesize photoAlbumViewController=_photoAlbumViewController;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(retain, nonatomic) MTImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) MTPhotoAlbum *photoAlbum; // @synthesize photoAlbum=_photoAlbum;
@property(copy, nonatomic) NSSet *supportedPhotoNameExtension; // @synthesize supportedPhotoNameExtension=_supportedPhotoNameExtension;
@property(retain, nonatomic) MTPhotoAsset *currentSelectedAsset; // @synthesize currentSelectedAsset=_currentSelectedAsset;
@property(nonatomic) _Bool hasPhotoAuthorization; // @synthesize hasPhotoAuthorization=_hasPhotoAuthorization;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)shouldShowCryMarkForPhotoAsset:(id)arg1;
- (void)updateUIFor:(id)arg1;
- (void)handlePhotoLibraryDidChangeIfExist;
- (void)handleApplicationWillEnterForeground;
- (void)handleApplicationDidEnterBackground;
- (void)handleReceivedNewSavedPhotoNotification;
- (void)updateAlbumsAndPhotosWhenBack:(CDUnknownBlockType)arg1 needReloadPhotoDetailView:(_Bool)arg2;
- (void)handlePhotoLibraryDidChangeForIOS7:(id)arg1;
- (void)handlePhotoLibraryDidChangeForIOS8Later:(id)arg1;
- (void)assetsLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)reLoadPhotoDetailViewController:(_Bool)arg1;
- (void)closePhotoDetailViewController;
- (void)reset;
- (id)assetsAtIndexPaths:(id)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)resetCachedAssets;
- (void)checkAlbumAuthorizationAndSetSelectedAlbum:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (_Bool)emptyDataSetShouldDisplay:(id)arg1;
- (struct CGPoint)offsetForEmptyDataSet:(id)arg1;
- (double)spaceHeightForEmptyDataSet:(id)arg1;
- (id)descriptionForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)actionSelectUnsupportItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)assetsForCollectionView:(id)arg1 indexPath:(id)arg2;
- (id)picker;
- (id)getAttributedStringWithString:(id)arg1 lineSpace:(double)arg2 attributes:(id)arg3;
- (void)updateNavigationButtonItem;
- (void)updateIconImageForTitleButton;
- (void)setSelectedAlbumlTitle:(id)arg1;
- (id)titleButton;
- (void)scrollToTop;
- (void)actionCamera:(id)arg1;
- (_Bool)shouldEnableCamera;
- (void)back;
- (void)actionBack:(id)arg1;
- (void)actionHome:(id)arg1;
- (void)actionPhotoAlbums:(id)arg1;
- (void)setupCollectionViewConstraints;
- (void)setupCollectionView;
- (void)setupCameraButton;
- (void)setupConstraints;
- (void)setupView;
- (void)didReceiveMemoryWarning;
- (void)showAppAuthorityViewController;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

