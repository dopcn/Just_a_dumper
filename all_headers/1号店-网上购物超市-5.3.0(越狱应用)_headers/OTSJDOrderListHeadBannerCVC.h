//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSCollectionViewCell.h>

@class UILabel;

@interface OTSJDOrderListHeadBannerCVC : OTSCollectionViewCell
{
    _Bool _selected;
    UILabel *_titleLabel;
    long long _row;
}

@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)isSelected;
- (void).cxx_destruct;
- (void)updateWithCellData:(id)arg1 atIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

