//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMRoundCardCell.h"

@class NMGroupBuyingFloorView, UILabel;

@interface NMGroupBuyingSeckillSpecialContent : NMRoundCardCell
{
    NMGroupBuyingFloorView *_iconView;
    UILabel *_nameLabel;
    UILabel *_contentLabel1;
    UILabel *_contentLabel2;
    UILabel *_currentPriceLabel;
    UILabel *_orignalPriceLabel;
}

- (void).cxx_destruct;
- (void)updateUIWithGroupBuyingData:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andCellWidth:(double)arg3 andCellHeight:(double)arg4;

@end

