//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTPCodeGenerator.h"

#import "CTPCheckDigitGenerator-Protocol.h"

@class CTPAutoCodeTable, NSString;

@interface CTPCode128Generator : CTPCodeGenerator <CTPCheckDigitGenerator>
{
    unsigned long long _codeTable;
    unsigned long long _codeTableSize;
    CTPAutoCodeTable *_autoCodeTable;
}

@property(retain, nonatomic) CTPAutoCodeTable *autoCodeTable; // @synthesize autoCodeTable=_autoCodeTable;
@property(nonatomic) unsigned long long codeTableSize; // @synthesize codeTableSize=_codeTableSize;
@property(nonatomic) unsigned long long codeTable; // @synthesize codeTable=_codeTable;
- (void).cxx_destruct;
- (id)checkDigit:(id)arg1;
- (id)barcode:(id)arg1;
- (id)terminator;
- (id)initiator;
- (_Bool)isContentsValid:(id)arg1;
- (id)initWithContents:(id)arg1;
- (void)__calculateAutoCodeTableWithContents:(id)arg1;
- (void)__calculateContinousDigitsWithContents:(id)arg1 defaultCodeTable:(unsigned long long)arg2 continousDigitsRange:(struct _NSRange)arg3;
- (unsigned long long)__middleCodeTableValue:(unsigned long long)arg1;
- (unsigned long long)__startCodeTableValue:(unsigned long long)arg1;
- (id)__encodeCharacter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

