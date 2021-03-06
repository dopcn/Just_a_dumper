//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ENParamsBuilderProtocol-Protocol.h"

@class ENParamsBuilderConfigure, NSString;

@interface ENParamsBuilder : NSObject <ENParamsBuilderProtocol>
{
    ENParamsBuilderConfigure *_config;
}

+ (id)en_keyMapping;
+ (id)allKeyMapping;
+ (id)createParamsWithParamsBuilder:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) ENParamsBuilderConfigure *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)toDictionaryWithKeyMapping:(id)arg1;
- (id)toDictionaryByRemovePrefixString:(id)arg1;
- (id)toDictionaryWithENDefinedKeyMapping;
- (id)toDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

