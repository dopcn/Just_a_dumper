//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TableViewCell.h"

@class UIImageView, UILabel;

@interface SearchMallCell : TableViewCell
{
    UIImageView *_bottomLine;
    UIImageView *_logoImage;
    UIImageView *_mallImage;
    UILabel *_mallName;
    UILabel *_total;
    UILabel *_distance;
    UILabel *_line;
}

@property(retain, nonatomic) UILabel *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) UILabel *total; // @synthesize total=_total;
@property(retain, nonatomic) UILabel *mallName; // @synthesize mallName=_mallName;
@property(retain, nonatomic) UIImageView *mallImage; // @synthesize mallImage=_mallImage;
@property(retain, nonatomic) UIImageView *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)updateCellWithModel:(id)arg1 idx:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)makeConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

