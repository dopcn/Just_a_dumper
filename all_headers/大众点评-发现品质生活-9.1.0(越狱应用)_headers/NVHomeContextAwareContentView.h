//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NVHomeContextAwareSubtitleView, NVJsonLabel, NVModelBaseContextAwareItem, UIButton, UIImageView, UILabel;

@interface NVHomeContextAwareContentView : UIView
{
    UIImageView *_mainImageView;
    UIImageView *_tagImageView;
    NVJsonLabel *_titleLabel;
    UIImageView *_arrowView;
    UIImageView *_weatherIcon;
    UILabel *_weatherLabel;
    UIImageView *_shopPowerView;
    NVHomeContextAwareSubtitleView *_subtitleView1;
    NVHomeContextAwareSubtitleView *_subtitleView2;
    UIButton *_maskView;
    NVModelBaseContextAwareItem *_data;
}

@property(retain, nonatomic) NVModelBaseContextAwareItem *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NVHomeContextAwareSubtitleView *subtitleView2; // @synthesize subtitleView2=_subtitleView2;
@property(retain, nonatomic) NVHomeContextAwareSubtitleView *subtitleView1; // @synthesize subtitleView1=_subtitleView1;
@property(retain, nonatomic) UIImageView *shopPowerView; // @synthesize shopPowerView=_shopPowerView;
@property(retain, nonatomic) UILabel *weatherLabel; // @synthesize weatherLabel=_weatherLabel;
@property(retain, nonatomic) UIImageView *weatherIcon; // @synthesize weatherIcon=_weatherIcon;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NVJsonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (id)getTagImageByType:(long long)arg1;
- (struct CGRect)getTagImageRectByType:(long long)arg1;
- (void)reloadViewWithData:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

