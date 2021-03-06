//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (YYOperation)
+ (int)_charNumber:(id)arg1;
+ (id)limitString:(id)arg1 charLength:(long long)arg2 replaceString:(id)arg3;
+ (id)convertTime:(double)arg1;
+ (id)numberStringFromNumber:(id)arg1 withPrefixString:(id)arg2;
+ (id)cleanSpecialTextByReplacingControlCharacter:(id)arg1;
- (id)removeDecimalZeros;
- (id)tenThousandFormatString;
- (id)lowercaseFirstLetterString;
- (id)yy_substringToIndex:(unsigned long long)arg1;
- (id)stringByTruncatingToWidth:(double)arg1 font:(id)arg2 suffix:(id)arg3;
- (id)trimEmojiAndSpecailCharacter;
- (id)trimEmojiCharacter;
- (id)stringByTrimmingTrailingWhitespaceAndNewlineCharacters;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingWhitespaceAndNewlineCharacters;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)trimmingWhitespaceAndNewlineCharacter;
- (id)trimmingWhitespaceCharacter;
- (id)cleanSpecialText;
- (id)cleanSpecialTextByReplacingSpecialCharacter:(id)arg1;
- (id)safeSubstringToIndex:(struct _NSRange)arg1;
@end

