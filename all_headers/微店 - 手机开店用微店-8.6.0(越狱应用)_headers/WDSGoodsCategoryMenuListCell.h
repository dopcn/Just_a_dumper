//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLTableViewCell.h"

@class GLLabel, NSString, WDSGoodsCategoryMenuListCellSelectImageView;

@interface WDSGoodsCategoryMenuListCell : GLTableViewCell
{
    _Bool _select;
    NSString *_text;
    GLLabel *_label;
    WDSGoodsCategoryMenuListCellSelectImageView *_selectImageView;
}

+ (double)heightOfCell:(id)arg1 width:(double)arg2 selected:(_Bool)arg3;
+ (id)attrStringFromText:(id)arg1;
@property(retain, nonatomic) WDSGoodsCategoryMenuListCellSelectImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) GLLabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool select; // @synthesize select=_select;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

