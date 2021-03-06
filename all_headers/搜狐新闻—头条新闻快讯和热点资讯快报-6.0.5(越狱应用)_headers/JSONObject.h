//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONObject-Protocol.h"

@class NSMutableDictionary, NSString;

@interface JSONObject : NSObject <JSONObject>
{
    NSMutableDictionary *_JSONDictionary;
}

+ (id)instancesWithJSONArray:(id)arg1;
+ (id)instanceWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *JSONDictionary; // @synthesize JSONDictionary=_JSONDictionary;
- (void).cxx_destruct;
- (void)dealloc;
- (id)toJSONDictionary;
- (void)updateWithJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

