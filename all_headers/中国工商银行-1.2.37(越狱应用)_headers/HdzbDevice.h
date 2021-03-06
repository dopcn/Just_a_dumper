//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HdzbDevice : NSObject
{
    _Bool isOpen;
    unsigned long long m_hDev;
    NSString *waitSN;
}

+ (_Bool)Label2CertInfo:(id)arg1 _info:(struct CreateCertInfo *)arg2;
+ (id)sharedDevice;
@property(retain, nonatomic) NSString *waitSN; // @synthesize waitSN;
- (void).cxx_destruct;
- (int)setSecurityKey;
- (int)initCard:(id)arg1;
- (int)setkeyID:(int)arg1 idData:(struct ByteArray)arg2;
- (int)getPubkeyAttr:(int)arg1 offset:(int)arg2 readLength:(int)arg3 _attr:(struct ByteArray *)arg4;
- (int)writeCertToHandleSpecial:(unsigned char)arg1 pubkeyOffset:(int)arg2 _cert:(struct ByteArray)arg3;
- (long long)setCertIndexFile:(int)arg1 certLength:(int)arg2;
- (int)getCosVersion:(int *)arg1;
- (int)writeCertToHandle:(unsigned char)arg1 isGUOMI:(_Bool)arg2 _cert:(struct ByteArray)arg3;
- (long long)getKeyIndexFile:(int)arg1 index:(id)arg2;
- (int)privateECCKeyCalc:(unsigned char)arg1 _soID:(int)arg2 _pin:(const struct ByteArray *)arg3 _plain:(const struct ByteArray *)arg4 _sign:(struct ByteArray *)arg5;
- (int)getPubKey:(int)arg1 keyLength:(int)arg2 pubKey:(struct ByteArray *)arg3;
- (long long)setKeyIndexFile:(int)arg1 _isSM2:(_Bool)arg2 _bit:(int)arg3;
- (int)setContainer:(int)arg1 _container:(struct _CON_FILE)arg2;
- (int)setAttr:(int)arg1 _type:(int)arg2 _offset:(int)arg3 _attr:(struct ByteArray)arg4;
- (int)createCertFile:(unsigned char)arg1 certMaxLength:(int)arg2 userPin:(id)arg3;
- (long long)generateGMKeyPair:(int)arg1 alg:(int)arg2 keyUsage:(int)arg3 hashUsage:(int)arg4 userPin:(id)arg5;
- (long long)generateRsaKeyPair:(int)arg1 userPin:(id)arg2 keyBit:(int)arg3;
- (int)convertMsg;
- (int)getPinRetryTimes:(unsigned char)arg1 _times:(int *)arg2;
- (int)getUserOperator:(unsigned char)arg1;
- (int)getSignatureForLcdSign:(int)arg1 _sign:(struct ByteArray *)arg2;
- (int)lcdSign:(unsigned char)arg1 _soID:(int)arg2 _hashType:(int)arg3 _plain:(const struct ByteArray *)arg4 _pin:(const struct ByteArray *)arg5;
- (int)privateKeyCalc:(unsigned char)arg1 _soID:(int)arg2 _pin:(const struct ByteArray *)arg3 _plain:(const struct ByteArray *)arg4 _sign:(struct ByteArray *)arg5;
- (int)changePin:(unsigned char)arg1 _oldpin:(const struct ByteArray *)arg2 _newpin:(const struct ByteArray *)arg3;
- (int)verifyPin:(unsigned char)arg1 _pin:(const struct ByteArray *)arg2;
- (int)getLastTwoOperation;
- (int)getKeyType:(struct ByteArray *)arg1;
- (int)getSN:(struct ByteArray *)arg1;
- (int)getPubkeyUsage:(unsigned char)arg1 _usage:(int *)arg2 _key:(int *)arg3;
- (int)getsoID:(unsigned char)arg1 _soID:(int *)arg2;
- (int)getZ:(unsigned char)arg1 _soID:(unsigned char)arg2 _z:(struct ByteArray *)arg3;
- (int)getCertFromHandle:(unsigned char)arg1 _cert:(struct ByteArray *)arg2;
- (int)getCertContainer:(int)arg1 coninfo:(struct _CON_FILE *)arg2;
- (int)getCertBit:(int)arg1 _bit:(int *)arg2;
- (int)SetCharset:(int)arg1 _lan:(int)arg2;
- (int)getEncryptPublicKey:(unsigned char)arg1 _soID:(unsigned char)arg2 _bit:(int)arg3 _pubkey:(struct ByteArray *)arg4;
- (int)realClose;
- (int)close;
- (int)open:(int)arg1 tryTime:(int)arg2;
- (int)enumBt:(id *)arg1;
- (int)keyExit:(int *)arg1;
- (_Bool)isAudioKeyCurrent;
- (_Bool)isKeyReady;
- (void)releaseKey;
- (void)dealloc;
- (id)init;
- (void)unInit:(_Bool)arg1;

@end

