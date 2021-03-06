//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, TBCBannerCoverImageView, TBCComponentAttriLabel, TBCPBRecommendListItem, UILabel, UIView, UIViewController;

@interface TBCPBRecommendCell : UITableViewCell
{
    UIViewController *_pbViewController;
    TBCBannerCoverImageView *_bannerCoverImageView;
    UIView *_bgView;
    TBCPBRecommendListItem *_listItem;
    TBCComponentAttriLabel *_titleLabel;
    NSMutableArray *_lineArray;
    UIView *_bannerView;
    UILabel *_bannerLabel;
}

+ (double)cellHeight:(id)arg1 isFromSearchBox:(_Bool)arg2;
@property(retain, nonatomic) UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSMutableArray *lineArray; // @synthesize lineArray=_lineArray;
@property(retain, nonatomic) TBCComponentAttriLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBCPBRecommendListItem *listItem; // @synthesize listItem=_listItem;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) TBCBannerCoverImageView *bannerCoverImageView; // @synthesize bannerCoverImageView=_bannerCoverImageView;
@property(nonatomic) UIViewController *pbViewController; // @synthesize pbViewController=_pbViewController;
- (void)updateBanner;
- (void)updateBannerTitle:(id)arg1;
- (void)gotoDetailVC:(long long)arg1;
- (void)setupScrollView;
- (void)onRecommendButtonPressed:(id)arg1;
- (void)removeLines;
- (void)addLine:(double)arg1;
- (void)bindData:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

