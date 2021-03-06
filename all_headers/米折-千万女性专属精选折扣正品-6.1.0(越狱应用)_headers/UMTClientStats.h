//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "UMTBase-Protocol.h"

@class NSString;

@interface UMTClientStats : NSObject <UMTBase, NSCoding>
{
    int __successful_requests;
    int __failed_requests;
    int __last_request_spent_ms;
    _Bool __successful_requests_isset;
    _Bool __failed_requests_isset;
    _Bool __last_request_spent_ms_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetLast_request_spent_ms;
- (_Bool)last_request_spent_msIsSet;
@property(nonatomic, getter=last_request_spent_ms, setter=setLast_request_spent_ms:) int last_request_spent_ms;
- (void)unsetFailed_requests;
- (_Bool)failed_requestsIsSet;
@property(nonatomic, getter=failed_requests, setter=setFailed_requests:) int failed_requests;
- (void)unsetSuccessful_requests;
- (_Bool)successful_requestsIsSet;
@property(nonatomic, getter=successful_requests, setter=setSuccessful_requests:) int successful_requests;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccessful_requests:(int)arg1 failed_requests:(int)arg2 last_request_spent_ms:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

