//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSOrderedSet, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UIActivityIndicatorView, UITableView, UIView;
@protocol IGSelectAlbumDelegate, OS_dispatch_queue;

@interface IGSelectAlbumController : UIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver>
{
    _Bool _needsSetPhotoLibraryOptions;
    id <IGSelectAlbumDelegate> _delegate;
    unsigned long long _assetFilterType;
    long long _selectAlbumAppearanceType;
    double _tableViewViewHeight;
    double _maximumContentWidth;
    NSOrderedSet *_allowedAlbumTitles;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicator;
    NSObject<OS_dispatch_queue> *_queue;
    PHAssetCollection *_userLibrary;
    PHFetchResult *_unfilteredSmartAlbums;
    PHFetchResult *_smartAlbums;
    PHFetchResult *_albums;
    NSMutableDictionary *_keyImageFetchResults;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_options;
    UIView *_topSeparatorLine;
    struct CGSize _thumbnailSize;
    struct CGRect _previousPreheatRect;
}

+ (id)allAlbumTitle;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(nonatomic) _Bool needsSetPhotoLibraryOptions; // @synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions;
@property(retain, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain) NSMutableDictionary *keyImageFetchResults; // @synthesize keyImageFetchResults=_keyImageFetchResults;
@property(retain, nonatomic) PHFetchResult *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) PHFetchResult *smartAlbums; // @synthesize smartAlbums=_smartAlbums;
@property(retain, nonatomic) PHFetchResult *unfilteredSmartAlbums; // @synthesize unfilteredSmartAlbums=_unfilteredSmartAlbums;
@property(retain, nonatomic) PHAssetCollection *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSOrderedSet *allowedAlbumTitles; // @synthesize allowedAlbumTitles=_allowedAlbumTitles;
@property(readonly, nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) double tableViewViewHeight; // @synthesize tableViewViewHeight=_tableViewViewHeight;
@property(readonly, nonatomic) long long selectAlbumAppearanceType; // @synthesize selectAlbumAppearanceType=_selectAlbumAppearanceType;
@property(nonatomic) unsigned long long assetFilterType; // @synthesize assetFilterType=_assetFilterType;
@property(nonatomic) __weak id <IGSelectAlbumDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)collectionFetchResultAtIndexPath:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (void)viewDidOpen;
- (void)scrollToTop;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)resetCachedAssets;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathsFromIndexes:(id)arg1 section:(long long)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setPhotosLibraryOptions;
- (id)fetchOptions;
- (id)keyImageFetchResultForAssetCollection:(id)arg1;
- (void)enumerateCollections:(CDUnknownBlockType)arg1;
- (id)filterSmartAlbums:(id)arg1;
- (void)configureForAppearanceType:(long long)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (id)initWithAppearanceType:(long long)arg1 maximumContentWidth:(double)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

