//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, UIColor, UIFont;
@protocol UMPLabelDelegate;

@interface UmpLabel : UIView
{
    NSString *_text;
    UIFont *font;
    UIColor *textColor;
    int _textAlignment;
    int _lineBreakMode;
    NSString *_plainText;
    NSMutableArray *_textComponents;
    struct CGSize _optimumSize;
    double _lineSpacing;
    long long currentSelectedButtonComponentIndex;
    NSDictionary *linkAttributes;
    NSDictionary *selectedLinkAttributes;
    id <UMPLabelDelegate> delegate;
    struct __CTFrame *frame;
    CDStruct_627e0f85 visibleRange;
    NSString *paragraphReplacement;
}

@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement;
@property(nonatomic) id <UMPLabelDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSDictionary *selectedLinkAttributes; // @synthesize selectedLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes;
@property(nonatomic) struct CGSize _optimumSize; // @synthesize _optimumSize;
@property(retain, nonatomic) NSMutableArray *_textComponents; // @synthesize _textComponents;
@property(retain, nonatomic) NSString *_plainText; // @synthesize _plainText;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font;
@property(retain, nonatomic) NSString *_text; // @synthesize _text;
- (id)visibleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)colorForHex:(id)arg1;
- (void)parse:(id)arg1 valid_tags:(id)arg2;
- (void)extractTextStyle:(id)arg1;
- (id)components;
- (void)dealloc;
- (double)frameHeight:(struct __CTFrame *)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (struct CGSize)optimumSize;
- (void)onButtonPressed:(id)arg1;
- (void)onButtonTouchUpOutside:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)render;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

