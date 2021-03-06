//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttVideoDetatilStarView, TTTAttributedLabel, UIButton, UILabel, UITextView;

@interface MttVideoDetailDramaInfoView : UIView
{
    TTTAttributedLabel *_videoNameLabel;
    UILabel *_popularLabel;
    MttVideoDetatilStarView *_starView;
    UILabel *_subtitleLable;
    UILabel *_memberInfoLabel;
    UITextView *_briefTextView;
    UIButton *_collectButton;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) UITextView *briefTextView; // @synthesize briefTextView=_briefTextView;
@property(retain, nonatomic) UILabel *memberInfoLabel; // @synthesize memberInfoLabel=_memberInfoLabel;
@property(retain, nonatomic) UILabel *subtitleLable; // @synthesize subtitleLable=_subtitleLable;
@property(retain, nonatomic) MttVideoDetatilStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *popularLabel; // @synthesize popularLabel=_popularLabel;
@property(retain, nonatomic) TTTAttributedLabel *videoNameLabel; // @synthesize videoNameLabel=_videoNameLabel;
- (void).cxx_destruct;
- (void)enterNight;
- (void)needUpdateUI:(id)arg1;
- (double)heightWithString:(id)arg1 withWidth:(double)arg2;
- (id)briefAttributes;
- (void)needLayoutSubViews;
- (double)layoutFactor:(double)arg1;
- (void)layoutSubviews;
- (void)addMaskLayerToScrollView:(id)arg1 height:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

