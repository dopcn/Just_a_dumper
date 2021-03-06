//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface PNLineChartData : NSObject
{
    _Bool _showPointLabel;
    UIColor *_color;
    double _alpha;
    unsigned long long _itemCount;
    CDUnknownBlockType _getData;
    NSString *_dataTitle;
    UIColor *_pointLabelColor;
    UIFont *_pointLabelFont;
    NSString *_pointLabelFormat;
    unsigned long long _inflexionPointStyle;
    UIColor *_inflexionPointColor;
    double _inflexionPointWidth;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double inflexionPointWidth; // @synthesize inflexionPointWidth=_inflexionPointWidth;
@property(retain, nonatomic) UIColor *inflexionPointColor; // @synthesize inflexionPointColor=_inflexionPointColor;
@property(nonatomic) unsigned long long inflexionPointStyle; // @synthesize inflexionPointStyle=_inflexionPointStyle;
@property(retain, nonatomic) NSString *pointLabelFormat; // @synthesize pointLabelFormat=_pointLabelFormat;
@property(retain, nonatomic) UIFont *pointLabelFont; // @synthesize pointLabelFont=_pointLabelFont;
@property(retain, nonatomic) UIColor *pointLabelColor; // @synthesize pointLabelColor=_pointLabelColor;
@property(nonatomic) _Bool showPointLabel; // @synthesize showPointLabel=_showPointLabel;
@property(retain, nonatomic) NSString *dataTitle; // @synthesize dataTitle=_dataTitle;
@property(copy) CDUnknownBlockType getData; // @synthesize getData=_getData;
@property unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setupDefaultValues;
- (id)init;

@end

