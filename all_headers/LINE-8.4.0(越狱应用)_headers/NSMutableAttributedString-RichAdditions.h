//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (RichAdditions)
+ (id)linkUnderlineKey;
+ (id)linkColorKey;
- (void)removeUnwantedCharacters;
- (void)addLineCallAgreementLink:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3;
- (void)addLink:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3 additionalAttributes:(id)arg4;
- (void)addLinkInfo:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3 additionalAttributes:(id)arg4;
- (void)addLinkInfo:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3;
- (void)addLinkURL:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3 additionalAttributes:(id)arg4;
- (void)addLinkURL:(id)arg1 type:(long long)arg2 range:(struct _NSRange)arg3;
- (void)setForegroundColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setForegroundColor:(id)arg1;
- (void)setFont:(id)arg1 range:(struct _NSRange)arg2;
@end

