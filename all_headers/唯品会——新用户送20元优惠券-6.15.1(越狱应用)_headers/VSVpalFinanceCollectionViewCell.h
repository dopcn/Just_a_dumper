//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, VSBorderTipsButton;

@interface VSVpalFinanceCollectionViewCell : UICollectionViewCell
{
    UILabel *_periodTitleLabel;
    UILabel *_periodDescLabel;
    VSBorderTipsButton *_feeDiscountTipsButton;
}

@property(retain, nonatomic) VSBorderTipsButton *feeDiscountTipsButton; // @synthesize feeDiscountTipsButton=_feeDiscountTipsButton;
@property(retain, nonatomic) UILabel *periodDescLabel; // @synthesize periodDescLabel=_periodDescLabel;
@property(retain, nonatomic) UILabel *periodTitleLabel; // @synthesize periodTitleLabel=_periodTitleLabel;
- (void).cxx_destruct;
- (void)setCellSelected:(_Bool)arg1;
- (void)setLayoutWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

