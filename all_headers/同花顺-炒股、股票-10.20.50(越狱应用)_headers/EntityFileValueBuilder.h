//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class EntityFileValue;

@interface EntityFileValueBuilder : PBGeneratedMessageBuilder
{
    EntityFileValue *resultEntityFileValue;
}

@property(retain) EntityFileValue *resultEntityFileValue; // @synthesize resultEntityFileValue;
- (void).cxx_destruct;
- (id)clearContext;
- (id)setContext:(id)arg1;
- (id)context;
- (_Bool)hasContext;
- (id)clearXn;
- (id)setXn:(id)arg1;
- (id)xn;
- (_Bool)hasXn;
- (id)clearLn;
- (id)setLn:(id)arg1;
- (id)ln;
- (_Bool)hasLn;
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

