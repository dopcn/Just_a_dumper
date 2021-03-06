//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXThemeButton.h"

@class ChartletCatalogData, UIImageView;

@interface ChartletTabButton : YXThemeButton
{
    ChartletCatalogData *chartletCatalogData;
    UIImageView *_chartletImageView;
}

+ (struct CGSize)getButtonSize;
@property(retain, nonatomic) UIImageView *chartletImageView; // @synthesize chartletImageView=_chartletImageView;
@property(retain, nonatomic) ChartletCatalogData *chartletCatalogData; // @synthesize chartletCatalogData;
- (void).cxx_destruct;
- (void)showNewChartletUI:(_Bool)arg1;
- (void)updateNewChartletUI;
- (void)setSelectedImage:(_Bool)arg1;
- (void)setInBundleButtonImage;
- (void)setPressedBackgroundImage;
- (void)setNormalBackgroundImage;
- (void)initChartletVoiceImageView;
- (void)initButtonUI;
- (id)initChartletTabButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

