//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSDictionary, NSString, UILabel;

@interface CDHistoryStatisticsContentView : UIView
{
    NSDictionary *_result;
    long long _type;
    long long _currentSportsType;
    long long _indexOfMaximumValue;
    NSString *_maximumValueString;
    NSArray *_values;
    NSArray *_labels;
    double _maxValueForDraw;
    double _leftPadding;
    double _spacingOfColumns;
    double _widthOfColumn;
    CALayer *_xLine;
    CALayer *_yLine;
    CALayer *_topLine;
    CALayer *_midleLine;
    UILabel *_topLabel;
    UILabel *_middleLabel;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) CALayer *midleLine; // @synthesize midleLine=_midleLine;
@property(retain, nonatomic) CALayer *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) CALayer *yLine; // @synthesize yLine=_yLine;
@property(retain, nonatomic) CALayer *xLine; // @synthesize xLine=_xLine;
@property(nonatomic) double widthOfColumn; // @synthesize widthOfColumn=_widthOfColumn;
@property(nonatomic) double spacingOfColumns; // @synthesize spacingOfColumns=_spacingOfColumns;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) double maxValueForDraw; // @synthesize maxValueForDraw=_maxValueForDraw;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSString *maximumValueString; // @synthesize maximumValueString=_maximumValueString;
@property(nonatomic) long long indexOfMaximumValue; // @synthesize indexOfMaximumValue=_indexOfMaximumValue;
@property(nonatomic) long long currentSportsType; // @synthesize currentSportsType=_currentSportsType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (long long)upwardNumberFor:(double)arg1 multiple:(long long)arg2;
- (void)refreshLabelsAndBars;
- (id)initWithFrame:(struct CGRect)arg1;

@end

