//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIProgressView, _TBFeedbackZoomableImageView_RefreshButton;

@interface _TBFeedbackZoomableImageView_ProgressView : UIView
{
    UILabel *_downloadFailureHintLabel;
    _Bool _failure;
    UIProgressView *_progressBar;
    _TBFeedbackZoomableImageView_RefreshButton *_refreshButton;
}

@property(nonatomic) _Bool failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) _TBFeedbackZoomableImageView_RefreshButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
- (void).cxx_destruct;
- (void)rk_themeStyleDidChange;
- (void)tb_reset;
- (void)setFailure;
- (id)initWithFrame:(struct CGRect)arg1;

@end

