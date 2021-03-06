//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "HUETFPlateRequestDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class HUETFPlateConsituentModel, HUETFPlateRequest, NSMutableArray, NSString;

@interface HUETFPlateCollectionView : UICollectionView <HUETFPlateRequestDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    long long _marketType;
    NSMutableArray *_cellArray;
    HUETFPlateRequest *_etfRequest;
    HUETFPlateConsituentModel *_consituentModel;
}

@property(copy, nonatomic) HUETFPlateConsituentModel *consituentModel; // @synthesize consituentModel=_consituentModel;
@property(retain, nonatomic) HUETFPlateRequest *etfRequest; // @synthesize etfRequest=_etfRequest;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(nonatomic) long long marketType; // @synthesize marketType=_marketType;
- (void).cxx_destruct;
- (void)updateConsituentStock:(id)arg1 index:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)requestData;
- (void)collectUserBehavior:(id)arg1 toStockCode:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

