//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PinYin4Cocoa)
+ (id)valueOfChar:(unsigned short)arg1;
- (_Bool)matchesPatternRegexPattern:(id)arg1;
- (_Bool)matchesPatternRegexPattern:(id)arg1 caseInsensitive:(_Bool)arg2 treatAsOneLine:(_Bool)arg3;
- (id)stringsByExtractingGroupsUsingRegexPattern:(id)arg1;
- (id)stringsByExtractingGroupsUsingRegexPattern:(id)arg1 caseInsensitive:(_Bool)arg2 treatAsOneLine:(_Bool)arg3;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2 caseInsensitive:(_Bool)arg3 treatAsOneLine:(_Bool)arg4;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2 caseInsensitive:(_Bool)arg3;
- (long long)indexOf:(int)arg1 fromIndex:(int)arg2;
- (long long)indexOf:(int)arg1;
- (long long)indexOfString:(id)arg1 fromIndex:(int)arg2;
- (long long)indexOfString:(id)arg1;
@end

