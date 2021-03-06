//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBImageView, CCBLabel, CCBView;
@protocol CCB_7_TransferPlatformSynthesizeSearchCellDelegate;

@interface CCB_7_TransferPlatformSynthesizeSearchCell : CCBFormCell
{
    id <CCB_7_TransferPlatformSynthesizeSearchCellDelegate> _cellDelegate;
    CCBLabel *_dateLabel;
    CCBLabel *_productNameTitle;
    CCBLabel *_productStateTitle;
    CCBLabel *_productNumTitle;
    CCBLabel *_productNameLabel;
    CCBLabel *_productStateLabel;
    CCBLabel *_productNumLabel;
    CCBImageView *_rightIcon;
    CCBView *_bgView;
    CCBLabel *_extendTitleLabel;
    CCBLabel *_extendValueLabel;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) CCBLabel *extendValueLabel; // @synthesize extendValueLabel=_extendValueLabel;
@property(retain, nonatomic) CCBLabel *extendTitleLabel; // @synthesize extendTitleLabel=_extendTitleLabel;
@property(retain, nonatomic) CCBView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) CCBImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) CCBLabel *productNumLabel; // @synthesize productNumLabel=_productNumLabel;
@property(retain, nonatomic) CCBLabel *productStateLabel; // @synthesize productStateLabel=_productStateLabel;
@property(retain, nonatomic) CCBLabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) CCBLabel *productNumTitle; // @synthesize productNumTitle=_productNumTitle;
@property(retain, nonatomic) CCBLabel *productStateTitle; // @synthesize productStateTitle=_productStateTitle;
@property(retain, nonatomic) CCBLabel *productNameTitle; // @synthesize productNameTitle=_productNameTitle;
@property(retain, nonatomic) CCBLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) id <CCB_7_TransferPlatformSynthesizeSearchCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)configExtendValueLabel;
- (void)configExtendTitleLabel;
- (id)dateAttributedString;
- (void)setFormItem:(id)arg1;
- (void)updateConstraints;

@end

