//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;

@interface UGCUploadPicsContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_picList;
    unsigned long long _maxCount;
    CDUnknownBlockType _callPhotoPicker;
    CDUnknownBlockType _picPreviewBlock;
    CDUnknownBlockType _addPhotoException;
    CDUnknownBlockType _deletePhoto;
    CDUnknownBlockType _retryUploadPhoto;
    UICollectionView *_picCollectionView;
}

+ (double)ipadMargin;
+ (long long)imageRow;
+ (struct CGSize)imageSize;
+ (double)suggestHeightWithPicCount:(unsigned long long)arg1;
@property(retain, nonatomic) UICollectionView *picCollectionView; // @synthesize picCollectionView=_picCollectionView;
@property(copy, nonatomic) CDUnknownBlockType retryUploadPhoto; // @synthesize retryUploadPhoto=_retryUploadPhoto;
@property(copy, nonatomic) CDUnknownBlockType deletePhoto; // @synthesize deletePhoto=_deletePhoto;
@property(copy, nonatomic) CDUnknownBlockType addPhotoException; // @synthesize addPhotoException=_addPhotoException;
@property(copy, nonatomic) CDUnknownBlockType picPreviewBlock; // @synthesize picPreviewBlock=_picPreviewBlock;
@property(copy, nonatomic) CDUnknownBlockType callPhotoPicker; // @synthesize callPhotoPicker=_callPhotoPicker;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) NSArray *picList; // @synthesize picList=_picList;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

