//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UtilityTableViewCellBase.h"

@class HSSift_Common_ItemModel, UIImageView, UILabel, UIView;

@interface HSSiftAreaCell : UtilityTableViewCellBase
{
    UILabel *_titleLable;
    HSSift_Common_ItemModel *_curModel;
    UIImageView *_selectArrow;
    UIView *_underLine;
}

+ (double)computeCellHeightWithData:(id)arg1;
@property(retain, nonatomic) UIView *underLine; // @synthesize underLine=_underLine;
@property(retain, nonatomic) UIImageView *selectArrow; // @synthesize selectArrow=_selectArrow;
@property(retain, nonatomic) HSSift_Common_ItemModel *curModel; // @synthesize curModel=_curModel;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (void)selectCustomCellView;
- (void)refreshCellContent;
- (void)configCellContent;
- (id)checkBoxObject;
- (id)addCheckBoxOnSuperview:(id)arg1;
- (id)addLineWithColor:(id)arg1 onSuperview:(id)arg2;
- (id)addLabelWithTextColor:(id)arg1 font:(id)arg2 textAlignment:(long long)arg3 numberOfLines:(long long)arg4 lineBreakMode:(long long)arg5 onSuperview:(id)arg6;

@end

