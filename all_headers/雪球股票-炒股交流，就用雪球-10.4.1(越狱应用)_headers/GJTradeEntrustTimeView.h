//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WTViewBase.h"

@class UIImageView, UILabel, UIView;

@interface GJTradeEntrustTimeView : WTViewBase
{
    _Bool _expand;
    unsigned long long _timeViewType;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long timeViewType; // @synthesize timeViewType=_timeViewType;
- (void).cxx_destruct;
- (void)setTimeString:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

