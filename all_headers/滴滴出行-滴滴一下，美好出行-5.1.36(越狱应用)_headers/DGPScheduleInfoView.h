//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DGPLineModel, UILabel;

@interface DGPScheduleInfoView : UIView
{
    DGPLineModel *_lineModel;
    UILabel *_topLabel;
    UILabel *_centerLabel;
    UILabel *_bottomLabel;
}

@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) DGPLineModel *lineModel; // @synthesize lineModel=_lineModel;
- (void).cxx_destruct;
- (void)configWithLineModel:(id)arg1;
- (void)configConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

