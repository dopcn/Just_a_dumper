//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QRFormatConvert : NSObject
{
}

+ (id)RSA_PRI_DERFromModulus:(id)arg1 pubExponent:(id)arg2 priExponent:(id)arg3 prime1:(id)arg4 prime2:(id)arg5 exponent1:(id)arg6 exponent2:(id)arg7 coefficient:(id)arg8;
+ (id)RSA_PUB_PKCS1FromModulus:(id)arg1 exponent:(id)arg2 useDER:(_Bool)arg3;
+ (id)RSA_PUB_DERFromPKCS1:(id)arg1;
+ (id)RSA_PUB_PKCS1FromDER:(id)arg1;
+ (id)RSA_PUB_ExponentFromDER:(id)arg1;
+ (id)RSA_PUB_ModulusFromDER:(id)arg1;
+ (id)PEMFromDER:(id)arg1 header:(const char *)arg2;
+ (id)DERFromPEM:(id)arg1;

@end

