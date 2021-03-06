//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface MDSettingIdentityCell : UITableViewCell
{
    UIImageView *_selectIconView;
    UILabel *_titleLabel;
    UIImageView *_filterIconView;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *filterIconView; // @synthesize filterIconView=_filterIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
- (void).cxx_destruct;
- (struct CGSize)suitableSizeForText:(id)arg1 withFont:(id)arg2 maxLength:(double)arg3;
- (void)refreshCellWithFilterModel:(id)arg1;
- (void)addLineView;
- (void)awakeFromNib;

@end

