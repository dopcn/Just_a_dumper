//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIColor, UIFont, UIImage, UILabel;

@interface SWHDSegmentedControl : UIControl
{
    UIImage *_segmentedControlBg;
    UIImage *_highlightBg;
    NSArray *_items;
    long long _selectedSegmentIndex;
    UIFont *_font;
    UIColor *_hightlightColor;
    UIColor *_textColor;
    UILabel *_positionPointLab;
    UIImage *_segmentLine;
    struct UIEdgeInsets _highlightBgInsets;
}

@property(retain, nonatomic) UIImage *segmentLine; // @synthesize segmentLine=_segmentLine;
@property(nonatomic) struct UIEdgeInsets highlightBgInsets; // @synthesize highlightBgInsets=_highlightBgInsets;
@property(retain, nonatomic) UILabel *positionPointLab; // @synthesize positionPointLab=_positionPointLab;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *hightlightColor; // @synthesize hightlightColor=_hightlightColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIImage *highlightBg; // @synthesize highlightBg=_highlightBg;
@property(retain, nonatomic) UIImage *segmentedControlBg; // @synthesize segmentedControlBg=_segmentedControlBg;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setitems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

