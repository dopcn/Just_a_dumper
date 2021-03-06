//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIPRSAUtil : NSObject
{
}

+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)formatPublicKey:(id)arg1;
+ (struct rsa_st)rsaPublicForKey:(id)arg1 error:(id *)arg2;
+ (int)signWith:(char *)arg1 length:(int)arg2 cipherText:(char *)arg3 rsa:(struct rsa_st)arg4;
+ (void)initialize;

@end

