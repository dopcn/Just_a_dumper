//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class DPMeishiGroupapiException, DPRecommendTopsResponse, NSString;

@interface GetDPRecommendTopsByCityID_result : NSObject <TBase, NSCoding>
{
    DPRecommendTopsResponse *__success;
    DPMeishiGroupapiException *__e;
    _Bool __success_isset;
    _Bool __e_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetE;
- (_Bool)eIsSet;
@property(retain, nonatomic, getter=e, setter=setE:) DPMeishiGroupapiException *e;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(retain, nonatomic, getter=success, setter=setSuccess:) DPRecommendTopsResponse *success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(id)arg1 e:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

