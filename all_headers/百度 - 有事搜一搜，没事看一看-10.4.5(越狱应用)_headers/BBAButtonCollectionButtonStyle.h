//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface BBAButtonCollectionButtonStyle : NSObject
{
    double _buttonFontSize;
    double _buttonHeight;
    double _buttonRowGap;
    double _buttonColumnGap;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_frameColor;
    double _cornerRadius;
    UIColor *_highlightedBackgroundColor;
    unsigned long long _touchEvents;
}

@property(nonatomic) unsigned long long touchEvents; // @synthesize touchEvents=_touchEvents;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *frameColor; // @synthesize frameColor=_frameColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double buttonColumnGap; // @synthesize buttonColumnGap=_buttonColumnGap;
@property(nonatomic) double buttonRowGap; // @synthesize buttonRowGap=_buttonRowGap;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonFontSize; // @synthesize buttonFontSize=_buttonFontSize;
- (void).cxx_destruct;

@end

