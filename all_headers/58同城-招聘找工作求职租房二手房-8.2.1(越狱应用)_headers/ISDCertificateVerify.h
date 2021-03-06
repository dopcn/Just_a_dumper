//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ISDCertificateVerify : NSObject
{
    NSMutableDictionary *_hostInfoDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *hostInfoDictionary; // @synthesize hostInfoDictionary=_hostInfoDictionary;
- (void).cxx_destruct;
- (id)p_getPublicKeyBitsFromKey:(struct __SecKey *)arg1;
- (_Bool)p_customVerifyWithChallenge:(id)arg1;
- (_Bool)p_systemValidation:(id)arg1;
- (void)verifyWithChallenge:(id)arg1 complementHandler:(CDUnknownBlockType)arg2;
- (void)addCertificateInfoWithHost:(id)arg1 publicKey:(id)arg2;
- (id)init;

@end

