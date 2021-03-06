//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZDMCollectionSerializable-Protocol.h"
#import "ZDMSerializable-Protocol.h"
#import "ZDMViewModelProvider-Protocol.h"

@class NSArray, NSString, ZDMTagViewModel;

@interface ZDMTag : NSObject <ZDMViewModelProvider, ZDMSerializable, ZDMCollectionSerializable>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_imagePath;
    NSArray *_posts;
}

+ (id)collectionWithRepresentation:(id)arg1;
+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *posts; // @synthesize posts=_posts;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithRepresentation:(id)arg1;
@property(readonly) ZDMTagViewModel *viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

