//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, PYAreaStyle, PYChordStyle, PYLabel, PYLabelLine, PYLineStyle, PYLinkStyle, PYNodeStyle;

@interface PYItemStyleProp : NSObject
{
    id _color;
    id _color0;
    PYLineStyle *_lineStyle;
    PYAreaStyle *_areaStyle;
    PYChordStyle *_chordStyle;
    PYNodeStyle *_nodeStyle;
    PYLinkStyle *_linkStyle;
    id _borderColor;
    NSNumber *_borderWidth;
    id _barBorderColor;
    id _barBorderRadius;
    NSNumber *_barBorderWidth;
    PYLabel *_label;
    PYLabelLine *_labelLine;
}

+ (id)initPYItemStylePropWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PYLabelLine *labelLine; // @synthesize labelLine=_labelLine;
@property(retain, nonatomic) PYLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSNumber *barBorderWidth; // @synthesize barBorderWidth=_barBorderWidth;
@property(retain, nonatomic) id barBorderRadius; // @synthesize barBorderRadius=_barBorderRadius;
@property(retain, nonatomic) id barBorderColor; // @synthesize barBorderColor=_barBorderColor;
@property(retain, nonatomic) NSNumber *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) id borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) PYLinkStyle *linkStyle; // @synthesize linkStyle=_linkStyle;
@property(retain, nonatomic) PYNodeStyle *nodeStyle; // @synthesize nodeStyle=_nodeStyle;
@property(retain, nonatomic) PYChordStyle *chordStyle; // @synthesize chordStyle=_chordStyle;
@property(retain, nonatomic) PYAreaStyle *areaStyle; // @synthesize areaStyle=_areaStyle;
@property(retain, nonatomic) PYLineStyle *lineStyle; // @synthesize lineStyle=_lineStyle;
@property(retain, nonatomic) id color0; // @synthesize color0=_color0;
@property(retain, nonatomic) id color; // @synthesize color=_color;
- (void).cxx_destruct;
- (CDUnknownBlockType)labelLineEqual;
- (CDUnknownBlockType)labelEqual;
- (CDUnknownBlockType)barBorderWidthEqual;
- (CDUnknownBlockType)barBorderRadiusEqual;
- (CDUnknownBlockType)barBorderColorEqual;
- (CDUnknownBlockType)borderWidthEqual;
- (CDUnknownBlockType)borderColorEqual;
- (CDUnknownBlockType)linkStyleEqual;
- (CDUnknownBlockType)nodeStyleEqual;
- (CDUnknownBlockType)chordStyleEqual;
- (CDUnknownBlockType)areaStyleEqual;
- (CDUnknownBlockType)lineStyleEqual;
- (CDUnknownBlockType)color0Equal;
- (CDUnknownBlockType)colorEqual;
- (id)init;

@end

