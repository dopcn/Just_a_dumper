//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BFComponentProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface BFSubscriberComponent : NSObject <BFComponentProtocol>
{
    NSMutableDictionary *_JSSubscriberInstancesByName;
}

+ (id)__BF_EXPORT_AS__destorySubscriber;
+ (id)__BF_EXPORT_AS__createSubscriber;
+ (id)BFComponentName;
@property(retain, nonatomic) NSMutableDictionary *JSSubscriberInstancesByName; // @synthesize JSSubscriberInstancesByName=_JSSubscriberInstancesByName;
- (void).cxx_destruct;
- (void)destorySubscriber:(id)arg1;
- (void)createSubscriber:(id)arg1 config:(id)arg2 interestEvents:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

