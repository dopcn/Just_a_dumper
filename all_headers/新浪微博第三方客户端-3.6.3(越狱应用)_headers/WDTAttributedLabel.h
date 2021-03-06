//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAttributedLabel.h"

@class DTCoreTextLayouter, DTCoreTextParagraphStyle, NSAttributedString, NSOperationQueue, NSString, UIColor, UIFont, WDTAttributedFormatter, WDTCoreTextLayouter;

@interface WDTAttributedLabel : DTAttributedLabel
{
    DTCoreTextLayouter *_layouter;
    _Bool _highlighted;
    _Bool _linkBold;
    _Bool _enabled;
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _adjustsLetterSpacingToFitWidth;
    _Bool _shouldCacheLayoutFrame;
    _Bool _drawsAsynchronously;
    UIColor *_textColor;
    UIFont *_font;
    UIColor *_shadowColor;
    DTCoreTextParagraphStyle *_paragraphStyle;
    long long _textAlignment;
    NSAttributedString *_attributedText;
    UIColor *_linkTextColor;
    UIColor *_highlightedTextColor;
    unsigned long long _dataDetectorTypes;
    long long _baselineAdjustment;
    double _minimumScaleFactor;
    double _preferredMaxLayoutWidth;
    WDTAttributedFormatter *_attributedFormatter;
    unsigned long long _behavior;
    NSOperationQueue *_stringBuildingOperationQueue;
    struct CGSize _shadowOffset;
}

@property(retain, nonatomic) NSOperationQueue *stringBuildingOperationQueue; // @synthesize stringBuildingOperationQueue=_stringBuildingOperationQueue;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) WDTAttributedFormatter *attributedFormatter; // @synthesize attributedFormatter=_attributedFormatter;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) _Bool drawsAsynchronously; // @synthesize drawsAsynchronously=_drawsAsynchronously;
@property(nonatomic) _Bool shouldCacheLayoutFrame; // @synthesize shouldCacheLayoutFrame=_shouldCacheLayoutFrame;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) long long baselineAdjustment; // @synthesize baselineAdjustment=_baselineAdjustment;
@property(nonatomic) _Bool adjustsLetterSpacingToFitWidth; // @synthesize adjustsLetterSpacingToFitWidth=_adjustsLetterSpacingToFitWidth;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isLinkBold) _Bool linkBold; // @synthesize linkBold=_linkBold;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) DTCoreTextParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(readonly, nonatomic) WDTCoreTextLayouter *layouter;
- (void)_setShadowOffset:(struct CGSize)arg1;
- (void)_setFont:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setShadowColor:(id)arg1;
@property(nonatomic) double lineHeight;
- (struct CGSize)intrinsicContentSize;
- (void)updateAttributedString;
- (void)_buildAttributedString;
- (id)attributedStringWithLinksAttributed;
- (id)attributedStringWithLabelAttributed;
- (void)addLink:(id)arg1 atRange:(struct _NSRange)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupAttributedLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;

@end

