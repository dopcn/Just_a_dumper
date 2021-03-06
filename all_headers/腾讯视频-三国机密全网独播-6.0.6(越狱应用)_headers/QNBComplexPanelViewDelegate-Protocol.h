//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol QNBComplexPanelViewDelegate <NSObject>

@optional
- (_Bool)shouldShowSleepPanel;
- (double)getCurrentPlayerRate;
- (void)didSelectRate:(double)arg1;
- (_Bool)shouldShowRatePanel;
- (void)didReportClicked;
- (long long)getPlayerViewStyle;
- (void)dismissComplexPanelView;
- (void)didComplexPanelEndScroll;
- (void)didComplexPanelBeginScroll;
- (void)didBanabaSettingBtnClicked;
- (void)didAudioBtnClicked;
- (void)didDownloadClicked;
- (void)didFavoriteClicked:(id)arg1 isFavourite:(_Bool)arg2;
- (void)didBrightnessSliderEnd:(double)arg1;
- (void)didBrightnessSliderChanged:(double)arg1;
- (void)didBrightnessSliderBegin:(double)arg1;
- (void)didVolumeSliderEnd:(double)arg1;
- (void)didVolumeSliderChanged:(double)arg1;
- (void)didVolumeSliderBegin:(double)arg1;
@end

