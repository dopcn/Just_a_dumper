//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ZXDataMatrixEncoder-Protocol.h"

@class NSString;

@interface ZXDataMatrixEdifactEncoder : NSObject <ZXDataMatrixEncoder>
{
}

- (id)encodeToCodewords:(id)arg1 startpos:(int)arg2;
- (void)encodeChar:(unsigned short)arg1 buffer:(id)arg2;
- (void)handleEOD:(id)arg1 buffer:(id)arg2;
- (void)encode:(id)arg1;
- (int)encodingMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

