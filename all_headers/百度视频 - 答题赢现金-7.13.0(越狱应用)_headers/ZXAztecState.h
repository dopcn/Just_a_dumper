//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ZXAztecToken;

@interface ZXAztecState : NSObject
{
    int _mode;
    int _binaryShiftByteCount;
    int _bitCount;
    ZXAztecToken *_token;
}

+ (id)initialState;
@property(readonly, nonatomic) int bitCount; // @synthesize bitCount=_bitCount;
@property(readonly, nonatomic) int binaryShiftByteCount; // @synthesize binaryShiftByteCount=_binaryShiftByteCount;
@property(readonly, nonatomic) ZXAztecToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)description;
- (id)toBitArray:(id)arg1;
- (_Bool)isBetterThanOrEqualTo:(id)arg1;
- (id)endBinaryShift:(int)arg1;
- (id)addBinaryShiftChar:(int)arg1;
- (id)shiftAndAppend:(int)arg1 value:(int)arg2;
- (id)latchAndAppend:(int)arg1 value:(int)arg2;
- (id)initWithToken:(id)arg1 mode:(int)arg2 binaryBytes:(int)arg3 bitCount:(int)arg4;

@end

