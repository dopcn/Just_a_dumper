//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class Comments;

@interface Comments_Builder : PBGeneratedMessage_Builder
{
    Comments *protobufBuilderResult;
}

@property(retain) Comments *protobufBuilderResult; // @synthesize protobufBuilderResult;
- (id)clearCount;
- (id)setCount:(int)arg1;
- (int)count;
- (_Bool)hasCount;
- (id)clearAttitude;
- (id)setAttitude:(int)arg1;
- (int)attitude;
- (_Bool)hasAttitude;
- (id)clearComment;
- (id)setComment:(id)arg1;
- (id)comment;
- (_Bool)hasComment;
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

