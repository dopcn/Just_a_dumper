//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3UploadPartOutput : AWSModel
{
    NSString *_ETag;
    NSString *_SSECustomerAlgorithm;
    NSString *_SSECustomerKeyMD5;
    NSString *_SSEKMSKeyId;
    long long _serverSideEncryption;
}

+ (id)serverSideEncryptionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long serverSideEncryption; // @synthesize serverSideEncryption=_serverSideEncryption;
@property(retain, nonatomic) NSString *SSEKMSKeyId; // @synthesize SSEKMSKeyId=_SSEKMSKeyId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;

@end

