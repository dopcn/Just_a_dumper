//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WSPXCrypto : NSObject
{
}

+ (id)decryptDataBy3DES:(id)arg1 key:(id)arg2;
+ (id)encryptDataBy3DES:(id)arg1 key:(id)arg2;
+ (id)decryptDataByCipher:(id)arg1;
+ (id)encryptDataByCipher:(id)arg1;
+ (id)aes128DecryptData:(id)arg1 key:(id)arg2;
+ (id)aes128EncryptData:(id)arg1 key:(id)arg2;
+ (id)md5HexDigest:(id)arg1;
+ (id)crypt:(id)arg1 algorithm:(unsigned int)arg2 bolckSize:(unsigned long long)arg3 operation:(unsigned int)arg4 key:(const void *)arg5 keyLength:(unsigned long long)arg6;

@end

