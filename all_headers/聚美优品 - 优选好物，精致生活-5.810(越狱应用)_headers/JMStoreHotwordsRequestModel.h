//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YJNSURLRequestModel-Protocol.h"

@class NSDictionary, NSString;

@interface JMStoreHotwordsRequestModel : NSObject <YJNSURLRequestModel>
{
    NSString *_store_id;
}

@property(copy, nonatomic) NSString *store_id; // @synthesize store_id=_store_id;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *modelDictionary;
@property(readonly) Class superclass;

@end

