//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton;

@interface WeatherShopDownloadBtnView : UIView
{
    UIButton *_statusButton;
    CAGradientLayer *_downloadProgressLayer;
}

@property(retain, nonatomic) CAGradientLayer *downloadProgressLayer; // @synthesize downloadProgressLayer=_downloadProgressLayer;
@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
- (void).cxx_destruct;
- (void)p_makeConstraint;
- (id)initWithFrame:(struct CGRect)arg1;

@end

