//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CHRTextMask-Protocol.h"

@class NSString;

@interface CHRPhoneNumberMask : NSObject <CHRTextMask>
{
    NSString *_prefix;
}

@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)formattedStringFromString:(id)arg1 cursorPosition:(unsigned long long *)arg2;
- (id)filteredStringFromString:(id)arg1 cursorPosition:(unsigned long long *)arg2;
- (_Bool)shouldChangeText:(id)arg1 withReplacementString:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

