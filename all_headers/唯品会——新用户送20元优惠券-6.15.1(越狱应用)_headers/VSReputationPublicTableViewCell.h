//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSBaseTableViewCell.h"

@class NSMutableArray, UIImageView, UILabel, UIScrollView, UIView, VSReputationPublicCellModel, VSReputationUsefulButton;

@interface VSReputationPublicTableViewCell : VSBaseTableViewCell
{
    UILabel *_contentLabel;
    UILabel *_dateLabel;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayImageView;
    UILabel *_videoLabel;
    UIScrollView *_scrollView;
    NSMutableArray *_imageViewList;
    UIView *_goodsView;
    UILabel *_goodsNameLabel;
    UILabel *_vipPriceLabel;
    UILabel *_marketPriceLabel;
    UILabel *_discountLabel;
    VSReputationUsefulButton *_usefulButton;
    UIView *_bottomView;
    VSReputationPublicCellModel *_reputationCellModel;
}

+ (double)estimatedCellHeightForCellModel:(id)arg1;
+ (struct CGSize)sizeOfString:(id)arg1 withWidth:(double)arg2 font:(id)arg3;
@property(retain, nonatomic) VSReputationPublicCellModel *reputationCellModel; // @synthesize reputationCellModel=_reputationCellModel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) VSReputationUsefulButton *usefulButton; // @synthesize usefulButton=_usefulButton;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *marketPriceLabel; // @synthesize marketPriceLabel=_marketPriceLabel;
@property(retain, nonatomic) UILabel *vipPriceLabel; // @synthesize vipPriceLabel=_vipPriceLabel;
@property(retain, nonatomic) UILabel *goodsNameLabel; // @synthesize goodsNameLabel=_goodsNameLabel;
@property(retain, nonatomic) UIView *goodsView; // @synthesize goodsView=_goodsView;
@property(retain, nonatomic) NSMutableArray *imageViewList; // @synthesize imageViewList=_imageViewList;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *videoLabel; // @synthesize videoLabel=_videoLabel;
@property(retain, nonatomic) UIImageView *videoPlayImageView; // @synthesize videoPlayImageView=_videoPlayImageView;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureSectionModel;
- (void)setUpUI;
- (void)tapVideo:(id)arg1;
- (void)tapImageScrollView:(id)arg1;
- (void)tapImage:(id)arg1;
- (void)usefulAction:(id)arg1;
- (id)imageViewWithIndex:(unsigned long long)arg1 imageType:(long long)arg2 resetFrame:(_Bool)arg3;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

