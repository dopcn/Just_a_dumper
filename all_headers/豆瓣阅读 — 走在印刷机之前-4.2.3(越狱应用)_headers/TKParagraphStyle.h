//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface TKParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    unsigned long long _textAlignment;
    unsigned long long _lineBreakMode;
    double _firstLineHeadIndent;
    double _headIndent;
    double _tailIndent;
    double _minLineHeightMultiple;
    double _naturalLineHeightMultiple;
    double _paragraphSpacingBefore;
    double _paragraphSpacing;
    _Bool _allowsHyphenation;
    _Bool _insertSpacesBetweenCJKAndLatin;
    _Bool _tailorableIdeographicsWords;
    _Bool _shouldDetectURL;
    _Bool _shouldDetectEmail;
}

+ (id)defaultParagraphStyle;
+ (id)paragraphStyleWithArbitraryParagraphStyle:(id)arg1 emSize:(double)arg2;
+ (id)paragraphStyleWithCTParagraphStyle:(struct __CTParagraphStyle *)arg1 emSize:(double)arg2;
+ (id)paragraphStyleWithNSParagraphStyle:(id)arg1 emSize:(double)arg2;
@property(readonly, nonatomic) _Bool shouldDetectEmail; // @synthesize shouldDetectEmail=_shouldDetectEmail;
@property(readonly, nonatomic) _Bool shouldDetectURL; // @synthesize shouldDetectURL=_shouldDetectURL;
@property(readonly, nonatomic) _Bool tailorableIdeographicsWords; // @synthesize tailorableIdeographicsWords=_tailorableIdeographicsWords;
@property(readonly, nonatomic) _Bool insertSpacesBetweenCJKAndLatin; // @synthesize insertSpacesBetweenCJKAndLatin=_insertSpacesBetweenCJKAndLatin;
@property(readonly, nonatomic) _Bool allowsHyphenation; // @synthesize allowsHyphenation=_allowsHyphenation;
@property(readonly, nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(readonly, nonatomic) double paragraphSpacingBefore; // @synthesize paragraphSpacingBefore=_paragraphSpacingBefore;
@property(readonly, nonatomic) double naturalLineHeightMultiple; // @synthesize naturalLineHeightMultiple=_naturalLineHeightMultiple;
@property(readonly, nonatomic) double minLineHeightMultiple; // @synthesize minLineHeightMultiple=_minLineHeightMultiple;
@property(readonly, nonatomic) double tailIndent; // @synthesize tailIndent=_tailIndent;
@property(readonly, nonatomic) double headIndent; // @synthesize headIndent=_headIndent;
@property(readonly, nonatomic) double firstLineHeadIndent; // @synthesize firstLineHeadIndent=_firstLineHeadIndent;
@property(readonly, nonatomic) unsigned long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(readonly, nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (void)getTCParagraphStyleSettings:(CDStruct_d5d5586f *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 mutable:(_Bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

