//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTBResourceLoader-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MTBLocalResourceFetcher : NSObject <MTBResourceLoader>
{
    NSMutableDictionary *_customParams;
}

@property(retain) NSMutableDictionary *customParams; // @synthesize customParams=_customParams;
- (void).cxx_destruct;
- (id)loadResource:(id)arg1 reportQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

