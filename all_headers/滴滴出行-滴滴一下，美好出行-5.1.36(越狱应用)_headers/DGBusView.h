//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DGSplitLineView, DGTicketDetailModel, UIImageView, UILabel;

@interface DGBusView : UIView
{
    DGTicketDetailModel *_model;
    UIImageView *_iconView;
    UILabel *_numberLabel;
    UILabel *_colorLabel;
    UIView *_dotView;
    UILabel *_seatsLabel;
    DGSplitLineView *_splitView;
    UILabel *_numLabel;
    UILabel *_lastLabel;
    DGSplitLineView *_bottomSplitView;
}

@property(retain, nonatomic) DGSplitLineView *bottomSplitView; // @synthesize bottomSplitView=_bottomSplitView;
@property(retain, nonatomic) UILabel *lastLabel; // @synthesize lastLabel=_lastLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) DGSplitLineView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UILabel *seatsLabel; // @synthesize seatsLabel=_seatsLabel;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UILabel *colorLabel; // @synthesize colorLabel=_colorLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) DGTicketDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)resetSeatLabelConstrain;
- (void)configView;
- (void)configConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

