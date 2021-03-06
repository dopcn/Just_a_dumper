//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class GZCalendarViewController, HXRequet, UILabel;
@protocol GZNHGTopViewDelegate;

@interface GZNHGTopView : UIButton
{
    id <GZNHGTopViewDelegate> _topDelegate;
    UILabel *_leftLabel;
    UILabel *_middleLabel;
    UILabel *_rightLabel;
    UILabel *_leftTimeLabel;
    UILabel *_middleTimeLabel;
    UILabel *_rightTimeLaebl;
    GZCalendarViewController *_calendarController;
    HXRequet *_request;
}

+ (id)converteStringFromDate:(id)arg1;
+ (id)converteDateFromString:(id)arg1;
@property(retain, nonatomic) HXRequet *request; // @synthesize request=_request;
@property(retain, nonatomic) GZCalendarViewController *calendarController; // @synthesize calendarController=_calendarController;
@property(retain, nonatomic) UILabel *rightTimeLaebl; // @synthesize rightTimeLaebl=_rightTimeLaebl;
@property(retain, nonatomic) UILabel *middleTimeLabel; // @synthesize middleTimeLabel=_middleTimeLabel;
@property(retain, nonatomic) UILabel *leftTimeLabel; // @synthesize leftTimeLabel=_leftTimeLabel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) __weak id <GZNHGTopViewDelegate> topDelegate; // @synthesize topDelegate=_topDelegate;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)requestFinishDay:(id)arg1;
- (void)requestData:(id)arg1 wait:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

