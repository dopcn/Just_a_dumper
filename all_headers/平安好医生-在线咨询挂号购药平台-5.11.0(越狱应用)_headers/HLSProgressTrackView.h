//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDateFormatter, NSLayoutConstraint, UIImageView, UILabel;

@interface HLSProgressTrackView : UIView
{
    UIImageView *_imageView;
    UILabel *_progressLabel1;
    UILabel *_progressSeperate;
    UILabel *_progressLabel2;
    long long _duration;
    NSDateFormatter *_dateFormatter;
    NSLayoutConstraint *_labelWidthConstraint1;
    NSLayoutConstraint *_labelWidthConstraint2;
}

@property(retain, nonatomic) NSLayoutConstraint *labelWidthConstraint2; // @synthesize labelWidthConstraint2=_labelWidthConstraint2;
@property(retain, nonatomic) NSLayoutConstraint *labelWidthConstraint1; // @synthesize labelWidthConstraint1=_labelWidthConstraint1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UILabel *progressLabel2; // @synthesize progressLabel2=_progressLabel2;
@property(retain, nonatomic) UILabel *progressSeperate; // @synthesize progressSeperate=_progressSeperate;
@property(retain, nonatomic) UILabel *progressLabel1; // @synthesize progressLabel1=_progressLabel1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)formattedStringForTime:(long long)arg1;
- (void)updateViewWithDuration:(long long)arg1 currentTime:(long long)arg2 progressTime:(long long)arg3 forward:(_Bool)arg4;
- (void)addConstraintsForSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

