//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIScrollView, YKFIPHomeSeriesSelectListViewModel;

@interface YKFIPHomeSeriesSelectView : UIView
{
    YKFIPHomeSeriesSelectListViewModel *_viewModel;
    UILabel *_headlineLabel;
    UILabel *_updateTimeLabel;
    UIButton *_closeButton;
    UIScrollView *_scrollView;
    double _ipHomeSeriesSelectViewMargin;
}

@property(nonatomic) double ipHomeSeriesSelectViewMargin; // @synthesize ipHomeSeriesSelectViewMargin=_ipHomeSeriesSelectViewMargin;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
@property(retain, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(retain, nonatomic) YKFIPHomeSeriesSelectListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)pop;
- (void)close:(id)arg1;
- (id)init;

@end

