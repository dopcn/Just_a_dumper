//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBExtendableMessageBuilder.h"

@class PBServiceOptions;

@interface PBServiceOptionsBuilder : PBExtendableMessageBuilder
{
    PBServiceOptions *resultServiceOptions;
}

@property(retain) PBServiceOptions *resultServiceOptions; // @synthesize resultServiceOptions;
- (void).cxx_destruct;
- (id)clearUninterpretedOption;
- (id)setUninterpretedOptionArray:(id)arg1;
- (id)addUninterpretedOption:(id)arg1;
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;
- (id)uninterpretedOption;
- (id)clearDeprecated;
- (id)setDeprecated:(_Bool)arg1;
- (_Bool)deprecated;
- (_Bool)hasDeprecated;
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

@end

