//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FBGeneratedIntentTarget : NSObject <FBIntentTarget>
{
    NSMutableDictionary *_optional;
}

@property(readonly, nonatomic) NSMutableDictionary *optional; // @synthesize optional=_optional;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

