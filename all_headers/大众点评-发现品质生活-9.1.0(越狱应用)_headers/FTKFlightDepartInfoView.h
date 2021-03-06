//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FTKFlightDepartInfoViewModel, UILabel;

@interface FTKFlightDepartInfoView : UIView
{
    UILabel *_departLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UIView *_backgroundView;
    FTKFlightDepartInfoViewModel *_viewModel;
}

@property(retain, nonatomic) FTKFlightDepartInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *departLabel; // @synthesize departLabel=_departLabel;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)bindWithViewModel:(id)arg1;
- (void)setupUI;
- (id)init;

@end

