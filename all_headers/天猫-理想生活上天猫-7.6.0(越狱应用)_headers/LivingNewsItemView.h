//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, TMImageView, UIImageView, UILabel;

@interface LivingNewsItemView : UIView
{
    _Bool _isCountdown;
    _Bool _isShow;
    NSDictionary *_itemDict;
    TMImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_spLabel;
    UIImageView *_spBGView;
    UILabel *_subTitleLabel;
    UILabel *_countDownLabel;
    UIImageView *_tagImageView;
    UIImageView *_countDownImageView;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isCountdown; // @synthesize isCountdown=_isCountdown;
@property(retain, nonatomic) UIImageView *countDownImageView; // @synthesize countDownImageView=_countDownImageView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *spBGView; // @synthesize spBGView=_spBGView;
@property(retain, nonatomic) UILabel *spLabel; // @synthesize spLabel=_spLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSDictionary *itemDict; // @synthesize itemDict=_itemDict;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

