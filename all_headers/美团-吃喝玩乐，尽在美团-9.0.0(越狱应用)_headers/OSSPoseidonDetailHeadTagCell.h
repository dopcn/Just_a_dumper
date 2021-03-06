//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class MDOLabelWithBgImgView, MDOMultiLabelView, NSArray, NSString, UILabel;

@interface OSSPoseidonDetailHeadTagCell : GCBaseMarginCell
{
    NSString *_opsText;
    NSString *_titleText;
    NSArray *_tagsArray;
    MDOLabelWithBgImgView *_opsLabelWithBgImgView;
    UILabel *_titleLabel;
    MDOMultiLabelView *_multiTagView;
}

+ (id)tagCornerColor;
+ (id)tagColor;
+ (id)tagFont;
+ (id)titleColor;
+ (id)titleFont;
+ (double)titleLineSpacing;
+ (long long)titleLineNumber;
+ (double)titleWidth;
+ (id)opsColor;
+ (id)opsFont;
+ (struct CGSize)titleSizeWithTitle:(id)arg1;
+ (double)cellHeightWithOps:(id)arg1 andTitle:(id)arg2 andTags:(id)arg3;
@property(retain, nonatomic) MDOMultiLabelView *multiTagView; // @synthesize multiTagView=_multiTagView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MDOLabelWithBgImgView *opsLabelWithBgImgView; // @synthesize opsLabelWithBgImgView=_opsLabelWithBgImgView;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *opsText; // @synthesize opsText=_opsText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellMarginType:(long long)arg3;

@end

