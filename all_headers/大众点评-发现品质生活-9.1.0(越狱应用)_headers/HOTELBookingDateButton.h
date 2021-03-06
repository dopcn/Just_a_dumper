//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NVLineView, UIImageView, UILabel, UIView;

@interface HOTELBookingDateButton : UIButton
{
    _Bool _isEndPoint;
    _Bool _isStartPoint;
    _Bool _haveRest;
    UIView *_backView;
    UILabel *_dateLabel;
    UILabel *_eventLabel;
    UILabel *_bookingLabel;
    UIImageView *_markView;
    NVLineView *_lineView;
}

@property(retain, nonatomic) NVLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool haveRest; // @synthesize haveRest=_haveRest;
@property(retain, nonatomic) UILabel *bookingLabel; // @synthesize bookingLabel=_bookingLabel;
@property(retain, nonatomic) UILabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) _Bool isStartPoint; // @synthesize isStartPoint=_isStartPoint;
@property(nonatomic) _Bool isEndPoint; // @synthesize isEndPoint=_isEndPoint;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)init;

@end

