//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class DynamicAction;

@interface DynamicAction_Builder : PBGeneratedMessage_Builder
{
    DynamicAction *result;
}

@property(retain) DynamicAction *result; // @synthesize result;
- (id)clearDelaytime;
- (id)setDelaytime:(int)arg1;
- (int)delaytime;
- (_Bool)hasDelaytime;
- (id)clearIssurprise;
- (id)setIssurprise:(int)arg1;
- (int)issurprise;
- (_Bool)hasIssurprise;
- (id)clearRandom;
- (id)setRandom:(int)arg1;
- (int)random;
- (_Bool)hasRandom;
- (id)clearRepeat;
- (id)setRepeat:(int)arg1;
- (int)repeat;
- (_Bool)hasRepeat;
- (id)clearName;
- (id)setName:(id)arg1;
- (id)name;
- (_Bool)hasName;
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

