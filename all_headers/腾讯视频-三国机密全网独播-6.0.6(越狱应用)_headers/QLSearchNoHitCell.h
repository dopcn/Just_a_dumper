//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONANoSearchHit, UIImageView, UILabel, UIView;

@interface QLSearchNoHitCell : QLBaseTabelViewCell
{
    UILabel *_labelSorry;
    UILabel *_labelOther;
    UIView *_clickView;
    UIImageView *_iconView;
    QLJCEONANoSearchHit *_noSearchHit;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)viewClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

