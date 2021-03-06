//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont;

@interface MJSegmentedControl : UIView
{
    _Bool _midLineHidden;
    double _indicatorHeight;
    double _indicatorWidth;
    UIColor *_indicatorColor;
    double _bottomLineHeight;
    UIColor *_bottomLineColor;
    long long _currentIndex;
    double _cellWidth;
    NSMutableArray *_buttonArray;
    NSArray *_titleArray;
    UIColor *_titleColor;
    UIColor *_titleColorHighlighted;
    UIFont *_titleFontHighlighted;
    UIFont *_titleFont;
    UIColor *_midLineColor;
    unsigned long long _indicatorType;
    UIView *_indicator;
    UIView *_bottomBorderLine;
    CDUnknownBlockType _indexChange;
}

@property(copy, nonatomic) CDUnknownBlockType indexChange; // @synthesize indexChange=_indexChange;
@property(nonatomic) __weak UIView *bottomBorderLine; // @synthesize bottomBorderLine=_bottomBorderLine;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool midLineHidden; // @synthesize midLineHidden=_midLineHidden;
@property(nonatomic) unsigned long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(retain, nonatomic) UIColor *midLineColor; // @synthesize midLineColor=_midLineColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIFont *titleFontHighlighted; // @synthesize titleFontHighlighted=_titleFontHighlighted;
@property(retain, nonatomic) UIColor *titleColorHighlighted; // @synthesize titleColorHighlighted=_titleColorHighlighted;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) UIColor *bottomLineColor; // @synthesize bottomLineColor=_bottomLineColor;
@property(nonatomic) double bottomLineHeight; // @synthesize bottomLineHeight=_bottomLineHeight;
@property(nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
- (void).cxx_destruct;
- (id)p_buildButton;
- (void)setIndexChangeBlock:(CDUnknownBlockType)arg1;
- (void)updateIndicatorPositionByIndex:(long long)arg1 animation:(_Bool)arg2;
- (void)updateIndicatorPositionByIndex:(long long)arg1;
- (void)updateScrollerOffset:(id)arg1;
- (void)updateSelectTabByIndex:(long long)arg1;
- (void)p_initBottomBorderWithFrame:(struct CGRect)arg1;
- (void)p_initMiddleLine;
- (void)p_initIndicatorWithFrame:(struct CGRect)arg1;
- (void)p_initSegmentedButtonWithFrame:(struct CGRect)arg1;
- (void)p_initViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titleArray:(id)arg2 titleColor:(id)arg3 titleColorHighlighted:(id)arg4 titleFontNomal:(id)arg5 titleFontHighLighted:(id)arg6 midLineColor:(id)arg7 midLineHidden:(_Bool)arg8;
- (id)initWithFrame:(struct CGRect)arg1 titleArray:(id)arg2 titleColor:(id)arg3 titleColorHighlighted:(id)arg4 titleFontNomal:(id)arg5 titleFontHighLighted:(id)arg6 midLineColor:(id)arg7 midLineHidden:(_Bool)arg8 indicatorType:(unsigned long long)arg9;
- (id)initWithFrame:(struct CGRect)arg1 titleArray:(id)arg2;

@end

