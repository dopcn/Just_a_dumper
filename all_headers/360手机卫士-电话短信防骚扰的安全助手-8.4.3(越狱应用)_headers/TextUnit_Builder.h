//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class TextUnit;

@interface TextUnit_Builder : PBGeneratedMessage_Builder
{
    TextUnit *protobufBuilderResult;
}

@property(retain) TextUnit *protobufBuilderResult; // @synthesize protobufBuilderResult;
- (id)clearMd5;
- (id)setMd5:(id)arg1;
- (id)md5;
- (_Bool)hasMd5;
- (id)clearRawText;
- (id)setRawText:(id)arg1;
- (id)rawText;
- (_Bool)hasRawText;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
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

