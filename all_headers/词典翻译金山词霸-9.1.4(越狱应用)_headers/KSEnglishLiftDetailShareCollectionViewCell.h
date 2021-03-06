//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSEnglishLiftDetailBaseCollectionViewCell.h"

@class KSSingleThinLabel, NSArray, NSLayoutConstraint, UILabel;
@protocol KSEnglishLiftDetailShareCollectionViewCellDelegate;

@interface KSEnglishLiftDetailShareCollectionViewCell : KSEnglishLiftDetailBaseCollectionViewCell
{
    id <KSEnglishLiftDetailShareCollectionViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    KSSingleThinLabel *_lineLabelOne;
    KSSingleThinLabel *_lineLabelTwo;
    NSArray *_shareButtonArray;
    NSLayoutConstraint *_lineLabelOneHeightConstraint;
    NSLayoutConstraint *_lineLabelTwoHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *lineLabelTwoHeightConstraint; // @synthesize lineLabelTwoHeightConstraint=_lineLabelTwoHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *lineLabelOneHeightConstraint; // @synthesize lineLabelOneHeightConstraint=_lineLabelOneHeightConstraint;
@property(retain, nonatomic) NSArray *shareButtonArray; // @synthesize shareButtonArray=_shareButtonArray;
@property(nonatomic) __weak KSSingleThinLabel *lineLabelTwo; // @synthesize lineLabelTwo=_lineLabelTwo;
@property(nonatomic) __weak KSSingleThinLabel *lineLabelOne; // @synthesize lineLabelOne=_lineLabelOne;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <KSEnglishLiftDetailShareCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTheme;
- (void)shareButtonClick:(id)arg1;
- (void)awakeFromNib;

@end

