//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HTKNumericFormatter : NSObject
{
    unsigned short _placeholderCharacter;
    unsigned long long _mode;
    NSString *_mask;
    NSString *_inputString;
}

+ (id)formatterWithMask:(id)arg1 placeholderCharacter:(unsigned short)arg2;
+ (id)formatterWithMask:(id)arg1 placeholderCharacter:(unsigned short)arg2 mode:(unsigned long long)arg3;
+ (id)formatString:(id)arg1 usingMask:(id)arg2 placeholderCharacter:(unsigned short)arg3;
+ (id)formatString:(id)arg1 usingMask:(id)arg2 placeholderCharacter:(unsigned short)arg3 mode:(unsigned long long)arg4;
@property(retain, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(nonatomic) unsigned short placeholderCharacter; // @synthesize placeholderCharacter=_placeholderCharacter;
@property(copy, nonatomic) NSString *mask; // @synthesize mask=_mask;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)fillInMaskWithDigits:(id)arg1;
- (id)unfixedDigits:(id)arg1;
- (_Bool)isCorrespondingToFormat:(id)arg1;
- (_Bool)isFormatFulfilled:(id)arg1;
- (id)formatString:(id)arg1;
- (unsigned long long)indexOfFirstDigitOrPlaceholderInMask;
- (id)initWithMask:(id)arg1 placeholderCharacter:(unsigned short)arg2 mode:(unsigned long long)arg3;

@end

