//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TDEncryptionManager : NSObject
{
}

+ (id)md5String:(id)arg1;
+ (id)crc32VerificationCode:(id)arg1;
+ (id)decryptDataToObj:(id)arg1 withKey:(id)arg2;
+ (id)encryptObjToData:(id)arg1 withKey:(id)arg2;
+ (id)decryptionPlaintext:(id)arg1 withKey:(id)arg2 type:(long long)arg3;
+ (id)encryptionPlaintext:(id)arg1 withKey:(id)arg2 type:(long long)arg3;

@end

