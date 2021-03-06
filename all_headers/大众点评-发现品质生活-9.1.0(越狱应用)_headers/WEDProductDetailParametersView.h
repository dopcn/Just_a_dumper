//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, NVLineView, UICollectionView;

@interface WEDProductDetailParametersView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_nameArray;
    NSArray *_descArray;
    NSArray *_iconArray;
    UICollectionView *_paraCollectionView;
    CDUnknownBlockType _didClickedBlock;
    NVLineView *_vLine1;
    NVLineView *_vLine2;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) NVLineView *vLine2; // @synthesize vLine2=_vLine2;
@property(retain, nonatomic) NVLineView *vLine1; // @synthesize vLine1=_vLine1;
@property(copy, nonatomic) CDUnknownBlockType didClickedBlock; // @synthesize didClickedBlock=_didClickedBlock;
@property(retain, nonatomic) UICollectionView *paraCollectionView; // @synthesize paraCollectionView=_paraCollectionView;
@property(copy, nonatomic) NSArray *iconArray; // @synthesize iconArray=_iconArray;
@property(copy, nonatomic) NSArray *descArray; // @synthesize descArray=_descArray;
@property(copy, nonatomic) NSArray *nameArray; // @synthesize nameArray=_nameArray;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)createCollectionLayoutObject;
- (void)layoutSubviews;
- (void)createCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

