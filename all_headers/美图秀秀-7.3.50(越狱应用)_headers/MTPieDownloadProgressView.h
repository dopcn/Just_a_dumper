//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTPieProgressView, UIImageView;

@interface MTPieDownloadProgressView : UIView
{
    int _state;
    double _progress;
    MTPieProgressView *_progressView;
    UIImageView *_downloadFlagImageView;
}

@property(retain, nonatomic) UIImageView *downloadFlagImageView; // @synthesize downloadFlagImageView=_downloadFlagImageView;
@property(retain, nonatomic) MTPieProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

