//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IfengNewsTableCell.h"

@class IfengUILabel, UIImageView;

@interface DocOriginalLogoCell : IfengNewsTableCell
{
    UIImageView *_leftLine;
    UIImageView *_rightLine;
    IfengUILabel *_channelLab;
    IfengUILabel *_timeNameLab;
    IfengUILabel *_editTimeLab;
    IfengUILabel *_sologanLab;
}

@property(retain, nonatomic) IfengUILabel *sologanLab; // @synthesize sologanLab=_sologanLab;
@property(retain, nonatomic) IfengUILabel *editTimeLab; // @synthesize editTimeLab=_editTimeLab;
@property(retain, nonatomic) IfengUILabel *timeNameLab; // @synthesize timeNameLab=_timeNameLab;
@property(retain, nonatomic) IfengUILabel *channelLab; // @synthesize channelLab=_channelLab;
@property(retain, nonatomic) UIImageView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIImageView *leftLine; // @synthesize leftLine=_leftLine;
- (void).cxx_destruct;
- (void)setupViewWithDocument:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

