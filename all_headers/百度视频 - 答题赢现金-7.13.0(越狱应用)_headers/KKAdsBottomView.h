//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QLPlayerSliderView, UIButton, UILabel;
@protocol KKAdsBottomViewDelegate;

@interface KKAdsBottomView : UIView
{
    QLPlayerSliderView *_sliderView;
    UIView *_bottomView;
    UIButton *_btnPlay;
    UILabel *_lblLeftTime;
    UILabel *_lblRightTime;
    UIButton *_btnFullscreen;
    id <KKAdsBottomViewDelegate> _delegate;
}

@property(nonatomic) id <KKAdsBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateVideoDuration:(double)arg1;
- (void)fullscreenClicked:(id)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

