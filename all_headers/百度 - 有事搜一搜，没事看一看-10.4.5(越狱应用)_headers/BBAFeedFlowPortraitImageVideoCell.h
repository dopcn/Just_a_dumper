//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAFeedCollectionViewCell.h"

@class CAGradientLayer, UILabel, UIView;

@interface BBAFeedFlowPortraitImageVideoCell : BBAFeedCollectionViewCell
{
    UILabel *_playCountLabel;
    UILabel *_durationLabel;
    UIView *_shadeView;
    CAGradientLayer *_shadeGradient;
}

+ (void)calculateLayoutWithViewModel:(id)arg1 preferSize:(struct CGSize)arg2;
@property(retain, nonatomic) CAGradientLayer *shadeGradient; // @synthesize shadeGradient=_shadeGradient;
@property(retain, nonatomic) UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
- (void).cxx_destruct;
- (void)configViewWithViewModel:(id)arg1;

@end

