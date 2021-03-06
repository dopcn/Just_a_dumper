//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface IGCardViewConfiguration : NSObject
{
    double _cardSizeFactor;
    double _cornerRadius;
    double _fontSize;
    double _cornerSizeFactor;
    double _glyphSizeFactor;
    double _labelPaddingFactor;
    double _labelLineSpaceFactor;
    double _labelSizeFactor;
    UIColor *_shadowColor;
    double _shadowOpacity;
    UIColor *_backgroundColor;
    struct CGSize _shadowOffset;
}

+ (id)scanConfig;
+ (id)defaultConfig;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double labelSizeFactor; // @synthesize labelSizeFactor=_labelSizeFactor;
@property(readonly, nonatomic) double labelLineSpaceFactor; // @synthesize labelLineSpaceFactor=_labelLineSpaceFactor;
@property(readonly, nonatomic) double labelPaddingFactor; // @synthesize labelPaddingFactor=_labelPaddingFactor;
@property(readonly, nonatomic) double glyphSizeFactor; // @synthesize glyphSizeFactor=_glyphSizeFactor;
@property(readonly, nonatomic) double cornerSizeFactor; // @synthesize cornerSizeFactor=_cornerSizeFactor;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double cardSizeFactor; // @synthesize cardSizeFactor=_cardSizeFactor;
- (void).cxx_destruct;
- (id)initWithCardSizeFactor:(double)arg1 cornerRadius:(double)arg2 fontSize:(double)arg3 cornerSizeFactor:(double)arg4 glyphSizeFactor:(double)arg5 labelpaddingFactor:(double)arg6 labelLineSpaceFactor:(double)arg7 labelSizeFactor:(double)arg8 shadowColor:(id)arg9 shadowOffset:(struct CGSize)arg10 shadowOpacity:(double)arg11 backgroundColor:(id)arg12;

@end

