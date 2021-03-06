//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NMContentTagView, NMDjRadio, NMDjRadioTwoTitleButton, UIButton, UIImageView, UILabel;

@interface NMPlayDjRadioSubView : UIView
{
    UIImageView *_bgView;
    UIButton *_djRadioButton;
    UIImageView *_coverImageView;
    UILabel *_nameLabel;
    UILabel *_subCountLabel;
    UIButton *_djSubButton;
    UIView *_djSubButtonBgView;
    NMDjRadio *_radio;
    NMDjRadioTwoTitleButton *_djBuyButton;
    NMContentTagView *_tagView;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDjBuyButtonAccessibility;
- (void)setDjLikeButtonAccessibility;
- (void)songChange:(id)arg1;
- (void)setBuyCount:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)configRadioBuyButton:(id)arg1;
- (void)configSubButton:(id)arg1;
- (void)setSubButton:(id)arg1 skin:(id)arg2;
- (void)setSubButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

