//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMJWCommonCell.h"

@class UIImageView, UILabel;

@interface SNPMJWCataTitleCell : SNPMJWCommonCell
{
    UIImageView *_bgImg;
    UILabel *_titleLab;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *bgImg; // @synthesize bgImg=_bgImg;
- (void).cxx_destruct;
- (void)updateWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

