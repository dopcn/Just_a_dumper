//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNHWGRecommendCommonCell.h"

#import "SNUIImageViewExDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MASConstraint, NSMutableDictionary, NSString, SNHWGFloorDTO, SNHWGTagModuleDTO, SNUIImageViewEx, UICollectionView, UICollectionViewFlowLayout;

@interface SNHWGRecommendThemeProductCell : SNHWGRecommendCommonCell <SNUIImageViewExDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    SNHWGTagModuleDTO *top_ad_moduleDto;
    SNHWGFloorDTO *prolist_floor_dto;
    SNHWGTagModuleDTO *more_moduleDto;
    SNUIImageViewEx *_top_ad_image_view;
    UICollectionView *_main_scroll_view;
    UICollectionViewFlowLayout *_flowLayout;
    MASConstraint *_top_ad_height_Constraint;
    NSMutableDictionary *_cacheDic;
}

@property(retain, nonatomic) NSMutableDictionary *cacheDic; // @synthesize cacheDic=_cacheDic;
@property(retain, nonatomic) MASConstraint *top_ad_height_Constraint; // @synthesize top_ad_height_Constraint=_top_ad_height_Constraint;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *main_scroll_view; // @synthesize main_scroll_view=_main_scroll_view;
@property(retain, nonatomic) SNUIImageViewEx *top_ad_image_view; // @synthesize top_ad_image_view=_top_ad_image_view;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)imageExViewDidOk:(id)arg1;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

