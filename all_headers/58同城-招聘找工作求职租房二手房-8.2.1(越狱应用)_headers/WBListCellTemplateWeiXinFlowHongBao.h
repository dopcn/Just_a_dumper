//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBListBaseCell.h"

@class FLAnimatedImageView, UILabel;

@interface WBListCellTemplateWeiXinFlowHongBao : WBListBaseCell
{
    FLAnimatedImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_tipLabel;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) FLAnimatedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)prepareCellViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)configCellViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)awakeFromNib;

@end

