//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseCell.h"

@class NVHorizontalLine, UILabel;

@interface TGNaviDoubleListTypeCell : TGBaseCell
{
    long long _cellType;
    UILabel *_labelForTitle;
    NVHorizontalLine *_bottomLine;
}

+ (double)cellHeight:(id)arg1;
+ (id)cellReuseId:(id)arg1;
@property(retain, nonatomic) NVHorizontalLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

