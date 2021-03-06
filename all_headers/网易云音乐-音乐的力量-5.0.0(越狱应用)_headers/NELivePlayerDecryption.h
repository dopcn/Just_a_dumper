//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLSession, NSURLSessionDataTask;

@interface NELivePlayerDecryption : NSObject <NSURLSessionDataDelegate>
{
    int _mAlgo;
    int _mCheckRet;
    int _mKeyLen;
    int _mAfterBase64DecKeyLen;
    int _mAfterAesDecKeyLen;
    int _mKeyIsKnown;
    char *_mOriginalKey;
    double _timeout;
    CDUnknownBlockType _transferKeyComplete;
    NSString *_mTransferKey;
    NSMutableData *_ConnectionData;
    NSURLSession *_downLoadSenssion;
    NSURLSessionDataTask *_dataTask;
    char *_mKey;
    NSString *_mTransferToken;
    NSString *_mTime;
    NSString *_mNonce;
    NSString *_mChecksum;
    NSString *_mTag;
    NSString *_mExpire;
    NSString *_mAccid;
    NSString *_mAppKey;
    NSString *_mToken;
    NSString *_mAlgoStr;
    char *_srcOnce;
    CDUnknownBlockType _mCompleteBlock;
}

@property(nonatomic) int mKeyIsKnown; // @synthesize mKeyIsKnown=_mKeyIsKnown;
@property(nonatomic) int mAfterAesDecKeyLen; // @synthesize mAfterAesDecKeyLen=_mAfterAesDecKeyLen;
@property(nonatomic) int mAfterBase64DecKeyLen; // @synthesize mAfterBase64DecKeyLen=_mAfterBase64DecKeyLen;
@property(nonatomic) int mKeyLen; // @synthesize mKeyLen=_mKeyLen;
@property(nonatomic) int mCheckRet; // @synthesize mCheckRet=_mCheckRet;
@property(copy, nonatomic) CDUnknownBlockType mCompleteBlock; // @synthesize mCompleteBlock=_mCompleteBlock;
@property(nonatomic) char *srcOnce; // @synthesize srcOnce=_srcOnce;
@property(nonatomic) int mAlgo; // @synthesize mAlgo=_mAlgo;
@property(copy, nonatomic) NSString *mAlgoStr; // @synthesize mAlgoStr=_mAlgoStr;
@property(copy, nonatomic) NSString *mToken; // @synthesize mToken=_mToken;
@property(copy, nonatomic) NSString *mAppKey; // @synthesize mAppKey=_mAppKey;
@property(copy, nonatomic) NSString *mAccid; // @synthesize mAccid=_mAccid;
@property(copy, nonatomic) NSString *mExpire; // @synthesize mExpire=_mExpire;
@property(copy, nonatomic) NSString *mTag; // @synthesize mTag=_mTag;
@property(copy, nonatomic) NSString *mChecksum; // @synthesize mChecksum=_mChecksum;
@property(copy, nonatomic) NSString *mNonce; // @synthesize mNonce=_mNonce;
@property(copy, nonatomic) NSString *mTime; // @synthesize mTime=_mTime;
@property(copy, nonatomic) NSString *mTransferToken; // @synthesize mTransferToken=_mTransferToken;
@property(nonatomic) char *mKey; // @synthesize mKey=_mKey;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLSession *downLoadSenssion; // @synthesize downLoadSenssion=_downLoadSenssion;
@property(retain, nonatomic) NSMutableData *ConnectionData; // @synthesize ConnectionData=_ConnectionData;
@property(copy, nonatomic) NSString *mTransferKey; // @synthesize mTransferKey=_mTransferKey;
@property(copy, nonatomic) CDUnknownBlockType transferKeyComplete; // @synthesize transferKeyComplete=_transferKeyComplete;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) char *mOriginalKey; // @synthesize mOriginalKey=_mOriginalKey;
- (void).cxx_destruct;
- (void)setFLVKey:(char *)arg1 andKeyLen:(int)arg2;
- (void)getDecryptionTransferKeyWithAccid:(id)arg1 appKey:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (id)stringWithRetCode:(int)arg1;
- (void)getOriginKey;
- (char *)base64DecodedString:(id)arg1;
- (int)parseTransferToken:(id)arg1;
- (int)parse_transfer_token;
- (id)parse_string:(id)arg1;
- (char *)decryptTransferKey:(id)arg1:(char *)arg2:(long long)arg3:(long long)arg4;
- (char *)aes128_decryptByte:(char *)arg1:(char *)arg2;
- (char *)aes128_decrypt:(id)arg1:(id)arg2:(unsigned long long)arg3;
- (void)xor:(char *)arg1:(long long)arg2:(char *)arg3:(long long)arg4;
- (void)shift:(char *)arg1:(long long)arg2:(long long)arg3:(unsigned char)arg4;
- (void)reverse:(char *)arg1:(int)arg2:(int)arg3;
- (char *)keyPadding:(char *)arg1:(long long)arg2:(long long)arg3;
- (int)getKeyLen:(long long)arg1;
- (int)check:(id)arg1:(char *)arg2;
- (void)initFLVEncryptionWithurl:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (int)initHTTPFLVFile:(id)arg1 andKey:(char *)arg2;
- (void)initLocalFLVFile:(id)arg1 andKey:(char *)arg2;
- (void)finishOperation;
- (id)getSHA1Key:(char *)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

