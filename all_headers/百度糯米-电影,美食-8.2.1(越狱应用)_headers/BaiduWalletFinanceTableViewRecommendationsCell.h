//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduWalletFinanceTableViewCell.h"

#import "BaiduWalletUIImageBannerDelegate-Protocol.h"

@class BaiduWalletFinanceRecommendationModel, BaiduWalletUIImageBanner, NSArray, NSString;
@protocol BaiduWalletFinanceTableViewRecommendationsCellDelegate;

@interface BaiduWalletFinanceTableViewRecommendationsCell : BaiduWalletFinanceTableViewCell <BaiduWalletUIImageBannerDelegate>
{
    BaiduWalletFinanceRecommendationModel *_recomModel;
    id <BaiduWalletFinanceTableViewRecommendationsCellDelegate> _delegate;
    BaiduWalletUIImageBanner *_recommendationView;
    NSArray *_recommendationItems;
}

@property(retain, nonatomic) NSArray *recommendationItems; // @synthesize recommendationItems=_recommendationItems;
@property(retain, nonatomic) BaiduWalletUIImageBanner *recommendationView; // @synthesize recommendationView=_recommendationView;
@property(nonatomic) __weak id <BaiduWalletFinanceTableViewRecommendationsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaiduWalletFinanceRecommendationModel *recomModel; // @synthesize recomModel=_recomModel;
- (void).cxx_destruct;
- (void)initConstraints;
- (void)updateRecommendationItemViews;
- (void)initContentView;
- (void)imageBanner:(id)arg1 didTapItem:(id)arg2;
- (id)imageBanner:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfImagesInImageBanner:(id)arg1;
- (id)headerViewOfImageBanner:(id)arg1;
- (double)heightForHeaderViewOfImageBanner:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

