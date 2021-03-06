//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBExtendableMessage_Builder.h"

@class PBFieldOptions;

@interface PBFieldOptions_Builder : PBExtendableMessage_Builder
{
    PBFieldOptions *result;
}

@property(retain) PBFieldOptions *result; // @synthesize result;
- (id)addUninterpretedOption:(id)arg1;
- (id)clearUninterpretedOptionList;
- (id)addAllUninterpretedOption:(id)arg1;
- (id)replaceUninterpretedOptionAtIndex:(int)arg1 with:(id)arg2;
- (id)uninterpretedOptionAtIndex:(int)arg1;
- (id)uninterpretedOptionList;
- (id)clearExperimentalMapKey;
- (id)setExperimentalMapKey:(id)arg1;
- (id)experimentalMapKey;
- (_Bool)hasExperimentalMapKey;
- (id)clearDeprecated;
- (id)setDeprecated:(_Bool)arg1;
- (_Bool)deprecated;
- (_Bool)hasDeprecated;
- (id)clearPacked;
- (id)setPacked:(_Bool)arg1;
- (_Bool)packed;
- (_Bool)hasPacked;
- (id)clearCtype;
- (id)setCtype:(int)arg1;
- (int)ctype;
- (_Bool)hasCtype;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

