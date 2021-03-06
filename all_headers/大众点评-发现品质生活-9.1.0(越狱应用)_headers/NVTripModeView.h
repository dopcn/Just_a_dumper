//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface NVTripModeView : UIView
{
    UILabel *_titleLabel;
    long long _mode;
    UIImageView *_imageView;
    UIImageView *_bgImageView;
    UIButton *_changeButton;
    UIButton *_clickButton;
}

@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNowModel:(long long)arg1 cityName:(id)arg2;
- (id)init;

@end

