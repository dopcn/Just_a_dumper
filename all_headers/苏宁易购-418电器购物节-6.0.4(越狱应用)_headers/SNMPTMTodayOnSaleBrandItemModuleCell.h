//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMPTMTodayOnSaleCommonCell.h"

#import "SNUIImageViewExDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SNMPTMCMSModuleDTO, SNUIImageViewEx, UICollectionView, UICollectionViewFlowLayout, UIImageView;

@interface SNMPTMTodayOnSaleBrandItemModuleCell : SNMPTMTodayOnSaleCommonCell <UIScrollViewDelegate, SNUIImageViewExDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    SNMPTMCMSModuleDTO *currentDto;
    SNUIImageViewEx *_brandImageView;
    UIImageView *_arrowTipImageView;
    UICollectionView *_singleScrollView;
    UICollectionViewFlowLayout *_flowLayout;
}

+ (_Bool)checkFloorIsOutDate:(id)arg1;
+ (double)cellHeightForDTO:(id)arg1;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *singleScrollView; // @synthesize singleScrollView=_singleScrollView;
@property(retain, nonatomic) UIImageView *arrowTipImageView; // @synthesize arrowTipImageView=_arrowTipImageView;
@property(retain, nonatomic) SNUIImageViewEx *brandImageView; // @synthesize brandImageView=_brandImageView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)imageExViewDidOk:(id)arg1;
- (void)updataData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

