//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface PropertyView : UIView
{
    NSString *_propertyName;
    NSString *_propertyValue;
    NSString *_propertyUnit;
    long long _style;
    double _nameLeftMargin;
    UIColor *_propertyValueColor;
    long long _fontStyle;
    double _valueWidth;
    UILabel *_propertyNameLabel;
    UILabel *_propertyValueLabel;
    UILabel *_propertyUnitLabel;
}

@property(nonatomic) __weak UILabel *propertyUnitLabel; // @synthesize propertyUnitLabel=_propertyUnitLabel;
@property(nonatomic) __weak UILabel *propertyValueLabel; // @synthesize propertyValueLabel=_propertyValueLabel;
@property(nonatomic) __weak UILabel *propertyNameLabel; // @synthesize propertyNameLabel=_propertyNameLabel;
@property(nonatomic) double valueWidth; // @synthesize valueWidth=_valueWidth;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) UIColor *propertyValueColor; // @synthesize propertyValueColor=_propertyValueColor;
@property(nonatomic) double nameLeftMargin; // @synthesize nameLeftMargin=_nameLeftMargin;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *propertyUnit; // @synthesize propertyUnit=_propertyUnit;
@property(copy, nonatomic) NSString *propertyValue; // @synthesize propertyValue=_propertyValue;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)propertyNameFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

