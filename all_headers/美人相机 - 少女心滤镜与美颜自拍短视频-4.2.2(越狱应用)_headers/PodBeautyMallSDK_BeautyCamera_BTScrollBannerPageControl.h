//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class UIImage;

@interface PodBeautyMallSDK_BeautyCamera_BTScrollBannerPageControl : UIPageControl
{
    UIImage *_highLightImage;
    UIImage *_defaultImage;
}

@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIImage *highLightImage; // @synthesize highLightImage=_highLightImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpDots;
- (void)setCurrentPage:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 highLightImage:(id)arg2 defaultImage:(id)arg3;

@end

