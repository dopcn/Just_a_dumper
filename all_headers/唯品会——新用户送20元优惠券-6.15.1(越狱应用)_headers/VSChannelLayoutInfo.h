//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSArray, NSString;

@interface VSChannelLayoutInfo : NSObject <YYModel>
{
    NSString *_tag;
    NSString *_version;
    NSArray *_layout;
    NSArray *_brandOpzGroups;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *brandOpzGroups; // @synthesize brandOpzGroups=_brandOpzGroups;
@property(retain, nonatomic) NSArray *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

