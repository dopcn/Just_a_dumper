//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCalendarDayView.h"

@class NSLayoutConstraint, UIColor, UIImageView, UILabel, UIView;

@interface CTBasicCalendarDayView : CTCalendarDayView
{
    UILabel *_mainTitleLabel;
    UILabel *_firstSubTitleLabel;
    UIImageView *_imageView;
    UIView *_gestureView;
    unsigned long long _state;
    UIColor *_titleNormalColor;
    UIColor *_titleHighlightColor;
    UIColor *_titleDisabledColor;
    UIColor *_titleHolidayColor;
    UIColor *_firstTitleNormalColor;
    UIColor *_firstTitleHighlightColor;
    NSLayoutConstraint *_holidayLabelContraintHeight;
    NSLayoutConstraint *_firstLabelContraintHeight;
    NSLayoutConstraint *_mainLabelContraintHeight;
    NSLayoutConstraint *_holidayLabelContraintTop;
    NSLayoutConstraint *_mainTitleLabelConstraintTop;
    NSLayoutConstraint *_firstTitleLabelConstraintTop;
    UILabel *_holidayTextLabel;
}

@property(nonatomic) __weak UILabel *holidayTextLabel; // @synthesize holidayTextLabel=_holidayTextLabel;
@property(nonatomic) __weak NSLayoutConstraint *firstTitleLabelConstraintTop; // @synthesize firstTitleLabelConstraintTop=_firstTitleLabelConstraintTop;
@property(nonatomic) __weak NSLayoutConstraint *mainTitleLabelConstraintTop; // @synthesize mainTitleLabelConstraintTop=_mainTitleLabelConstraintTop;
@property(nonatomic) __weak NSLayoutConstraint *holidayLabelContraintTop; // @synthesize holidayLabelContraintTop=_holidayLabelContraintTop;
@property(nonatomic) __weak NSLayoutConstraint *mainLabelContraintHeight; // @synthesize mainLabelContraintHeight=_mainLabelContraintHeight;
@property(nonatomic) __weak NSLayoutConstraint *firstLabelContraintHeight; // @synthesize firstLabelContraintHeight=_firstLabelContraintHeight;
@property(nonatomic) __weak NSLayoutConstraint *holidayLabelContraintHeight; // @synthesize holidayLabelContraintHeight=_holidayLabelContraintHeight;
@property(retain, nonatomic) UIColor *firstTitleHighlightColor; // @synthesize firstTitleHighlightColor=_firstTitleHighlightColor;
@property(retain, nonatomic) UIColor *firstTitleNormalColor; // @synthesize firstTitleNormalColor=_firstTitleNormalColor;
@property(retain, nonatomic) UIColor *titleHolidayColor; // @synthesize titleHolidayColor=_titleHolidayColor;
@property(retain, nonatomic) UIColor *titleDisabledColor; // @synthesize titleDisabledColor=_titleDisabledColor;
@property(retain, nonatomic) UIColor *titleHighlightColor; // @synthesize titleHighlightColor=_titleHighlightColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *firstSubTitleLabel; // @synthesize firstSubTitleLabel=_firstSubTitleLabel;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (void)highlightSection;
- (void)setSelected:(_Bool)arg1;
- (void)adpterUI;
- (void)dismiss;
- (void)showBubbleView;
- (void)setUIForState:(unsigned long long)arg1;
- (void)setup;
- (void)awakeFromNib;

@end

