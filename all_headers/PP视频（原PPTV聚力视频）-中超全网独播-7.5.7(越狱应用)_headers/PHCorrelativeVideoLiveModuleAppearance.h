//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHRecommendVideoLiveModuleAppearance.h"

#import "PCInnerCollectionViewInnerCollectionModuleAppearance-Protocol.h"

@class NSString, PBFansVideoInfo, PCInnerCollectionViewOuterCollectionModuleAppearance, PCModuleController, UICollectionView;
@protocol PCModuleLayoutViewController;

@interface PHCorrelativeVideoLiveModuleAppearance : PHRecommendVideoLiveModuleAppearance <PCInnerCollectionViewInnerCollectionModuleAppearance>
{
    PBFansVideoInfo *_fansVideoInfo;
}

@property(retain, nonatomic) PBFansVideoInfo *fansVideoInfo; // @synthesize fansVideoInfo=_fansVideoInfo;
- (void).cxx_destruct;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (struct UIEdgeInsets)insetForModule;

// Remaining properties
@property(nonatomic) __weak id <PCModuleLayoutViewController> collectionModuleLayoutViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UICollectionView *innerCollectionView;
@property(retain, nonatomic) PCModuleController *moduleController;
@property(nonatomic) __weak PCInnerCollectionViewOuterCollectionModuleAppearance *outerModuleAppearance;
@property(readonly) Class superclass;

@end

