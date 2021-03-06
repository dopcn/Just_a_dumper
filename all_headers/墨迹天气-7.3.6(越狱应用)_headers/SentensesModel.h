//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface SentensesModel : PBGeneratedMessage
{
    unsigned int hasOrder_:1;
    unsigned int hasContent_:1;
    unsigned int hasUrl_:1;
    unsigned int hasEntry_:1;
    int order;
    NSString *content;
    NSString *url;
    NSString *entry;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property int order; // @synthesize order;
@property(retain) NSString *entry; // @synthesize entry;
@property(retain) NSString *url; // @synthesize url;
@property(retain) NSString *content; // @synthesize content;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasOrder:(_Bool)arg1;
- (_Bool)hasOrder;
- (void)setHasEntry:(_Bool)arg1;
- (_Bool)hasEntry;
- (void)setHasUrl:(_Bool)arg1;
- (_Bool)hasUrl;
- (void)setHasContent:(_Bool)arg1;
- (_Bool)hasContent;

@end

