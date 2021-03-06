//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class UIActivityIndicatorView, UIImageView, UILabel, UISwitch, UIView;

@interface MoreRootCell : QQMusicCell
{
    _Bool _checked;
    UILabel *_mainTitle;
    UILabel *_secondTitle;
    UILabel *_centerTitle;
    UIImageView *_selectedView;
    UIImageView *_arrowImageView;
    UIImageView *_greenView;
    UIActivityIndicatorView *_waitingIndicatorView;
    UIImageView *_greenView_2nd;
    UILabel *_rightLabel;
    UISwitch *_rightSwitch;
    UIImageView *_redPoint;
    UIImageView *_indicateImageView;
    UIImageView *_themeColorImageView;
    UILabel *_redPointLabel;
    UIView *_bgMaskView;
    UIImageView *_rightImageView;
    UIImageView *_centerImageView;
}

@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) UILabel *redPointLabel; // @synthesize redPointLabel=_redPointLabel;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UIImageView *themeColorImageView; // @synthesize themeColorImageView=_themeColorImageView;
@property(retain, nonatomic) UIImageView *indicateImageView; // @synthesize indicateImageView=_indicateImageView;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UISwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIImageView *greenView_2nd; // @synthesize greenView_2nd=_greenView_2nd;
@property(retain, nonatomic) UIActivityIndicatorView *waitingIndicatorView; // @synthesize waitingIndicatorView=_waitingIndicatorView;
@property(retain, nonatomic) UIImageView *greenView; // @synthesize greenView=_greenView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *centerTitle; // @synthesize centerTitle=_centerTitle;
@property(retain, nonatomic) UILabel *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (int)qmCellType;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetCellFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

