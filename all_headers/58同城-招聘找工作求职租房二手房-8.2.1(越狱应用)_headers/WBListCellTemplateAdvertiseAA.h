//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBListBaseCell.h"

@class UIImageView, UILabel;

@interface WBListCellTemplateAdvertiseAA : WBListBaseCell
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_iconImageView;
}

@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareCellViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)configCellViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

