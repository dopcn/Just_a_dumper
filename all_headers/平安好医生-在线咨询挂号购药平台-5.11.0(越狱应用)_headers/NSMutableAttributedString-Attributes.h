//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (Attributes)
+ (id)attributedStringWithString:(id)arg1 textColor:(id)arg2 font:(id)arg3;
- (void)addVerticalGlyph:(_Bool)arg1 substring:(id)arg2;
- (void)addStrokeColor:(id)arg1 thickness:(int)arg2 substring:(id)arg3;
- (void)addColorToRussianText:(id)arg1;
- (void)addAlignment:(long long)arg1 substring:(id)arg2;
- (void)addFont:(id)arg1 substring:(id)arg2 options:(unsigned long long)arg3;
- (void)addFont:(id)arg1 substring:(id)arg2;
- (void)addFontWithName:(id)arg1 size:(int)arg2 substring:(id)arg3;
- (void)addShadowColor:(id)arg1 width:(int)arg2 height:(int)arg3 radius:(int)arg4 substring:(id)arg5;
- (void)addStrikeThrough:(int)arg1 substring:(id)arg2;
- (void)addUnderlineForSubstring:(id)arg1;
- (void)addBackgroundColor:(id)arg1 substring:(id)arg2;
- (void)addColor:(id)arg1 substring:(id)arg2;
- (void)addColor:(id)arg1 substring:(id)arg2 options:(unsigned long long)arg3;
@end

