//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WanderShopActivePKPaddingLabel, WanderShopActivePKPercentView, WanderShopTopicModel;

@interface WanderShopActivePKView : UIView
{
    WanderShopTopicModel *_model;
    WanderShopActivePKPaddingLabel *_leftTitleLabel;
    UIImageView *_leftImageView;
    UILabel *_leftNumberLabel;
    WanderShopActivePKPaddingLabel *_rightTitleLabel;
    UIImageView *_rightImageView;
    UILabel *_rightNumberLabel;
    WanderShopActivePKPercentView *_percentView;
}

@property(retain, nonatomic) WanderShopActivePKPercentView *percentView; // @synthesize percentView=_percentView;
@property(retain, nonatomic) UILabel *rightNumberLabel; // @synthesize rightNumberLabel=_rightNumberLabel;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) WanderShopActivePKPaddingLabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *leftNumberLabel; // @synthesize leftNumberLabel=_leftNumberLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) WanderShopActivePKPaddingLabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) WanderShopTopicModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)getAttributedString:(id)arg1 withFontSize:(double)arg2;
- (void)configSubviews:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

