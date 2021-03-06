//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTMYPhotoAssetsViewController.h"

@class NSArray;

@interface MTMYOrderdPhotoAssetsViewController : MTMYPhotoAssetsViewController
{
    _Bool _enableSelectedPhotoAsset;
    NSArray *_selectedPhotoAsset;
    long long _currentIndex;
    double _checkScale;
    struct CGSize _targetSize;
}

@property(nonatomic) double checkScale; // @synthesize checkScale=_checkScale;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *selectedPhotoAsset; // @synthesize selectedPhotoAsset=_selectedPhotoAsset;
@property(nonatomic) _Bool enableSelectedPhotoAsset; // @synthesize enableSelectedPhotoAsset=_enableSelectedPhotoAsset;
- (void).cxx_destruct;
- (_Bool)shouldShowCryMarkForPhotoAsset:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

