//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PicBCollectionViewControllerBase.h"

#import "PicBBatchSaveHandlerDelegate-Protocol.h"
#import "UCStatusbarControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, PicBBatchSaveHandler, PicBCollectionView, PicBDataProviderAdapterBase, UCNavigationController, UIButton, UIImageView, UIView;

@interface PicBCollectionViewController : PicBCollectionViewControllerBase <UCStatusbarControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, PicBBatchSaveHandlerDelegate>
{
    PicBCollectionView *_collectionView;
    PicBDataProviderAdapterBase *_dataSource;
    PicBBatchSaveHandler *_batchSaveHandler;
    UIImageView *_maskView;
    UIView *_topView;
    NSArray *_itemCache;
    UIButton *_rightButton;
    UCNavigationController *_naviForMap;
}

@property(retain, nonatomic) UCNavigationController *naviForMap; // @synthesize naviForMap=_naviForMap;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) NSArray *itemCache; // @synthesize itemCache=_itemCache;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) PicBBatchSaveHandler *batchSaveHandler; // @synthesize batchSaveHandler=_batchSaveHandler;
@property(retain, nonatomic) PicBDataProviderAdapterBase *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PicBCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)viewManagerCanForceDismiss;
- (void)forceDismissCurrentView;
- (void)didThemeChange;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1;
- (void)handler:(id)arg1 didFinishedSaveOperation:(unsigned long long)arg2 saveToPrivateGallery:(_Bool)arg3;
- (void)handler:(id)arg1 didSavePicItemSuccessfulWithIndex:(long long)arg2 andLocalPath:(id)arg3 saveToPrivateGallery:(_Bool)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didRightButtonClick:(id)arg1;
- (void)didLeftButtonClick:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)navigationControllerTransationAnimationDidFinish:(id)arg1;
- (void)viewControllerWillHide:(_Bool)arg1;
- (void)viewControllerWillShow:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)statusBarStyle;
- (void)handleRightButtonShow;
- (id)navBarExProperty;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

