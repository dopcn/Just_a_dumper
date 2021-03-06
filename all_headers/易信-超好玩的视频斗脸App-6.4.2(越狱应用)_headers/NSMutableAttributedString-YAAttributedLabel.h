//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@class UIColor, UIFont;

@interface NSMutableAttributedString (YAAttributedLabel)
- (struct CGRect)yaBoundingRectWithSize:(struct CGSize)arg1;
- (void)adjustBaseline:(id)arg1 verticalAlignment:(long long)arg2;
- (id)yaParagraphStyle;
- (double)yaContentHeightOfLines:(long long)arg1;
- (void)yaAddLinkAttribute:(id)arg1;
- (void)yaAddLink:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)yaAppendView:(id)arg1 size:(struct CGSize)arg2 verticalAlignment:(long long)arg3;
- (void)yaAppendImage:(id)arg1 size:(struct CGSize)arg2 verticalAlignment:(long long)arg3;
- (void)yaAppendImage:(id)arg1 size:(struct CGSize)arg2;
- (void)yaAppendAttributedText:(id)arg1;
- (void)yaAppendText:(id)arg1;
- (void)yaSetText:(id)arg1;
- (void)setYaHasViewAttachment:(_Bool)arg1;
@property(readonly, nonatomic) _Bool yaHasViewAttachment;
- (void)setYaHasLink:(_Bool)arg1;
@property(readonly, nonatomic) _Bool yaHasLink;
@property(nonatomic) long long yaNumberOfLines;
@property(nonatomic) long long yaLineBreakMode;
@property(nonatomic) long long yaTextAlignment;
@property(nonatomic) _Bool yaShowLinkUnderline;
@property(retain, nonatomic) UIColor *yaHilightedLinkColor;
@property(retain, nonatomic) UIColor *yaLinkColor;
@property(retain, nonatomic) UIColor *yaTextColor;
@property(retain, nonatomic) UIFont *yaFont;
@property(nonatomic) double yaLeading;
@end

