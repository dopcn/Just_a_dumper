//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OSSClient;

@interface AliyunOSSMananger : NSObject
{
    OSSClient *_client;
}

+ (id)shareInstance;
@property(retain, nonatomic) OSSClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)putImageAsyncWithObject:(id)arg1 file:(id)arg2 process:(CDUnknownBlockType)arg3 finishURL:(CDUnknownBlockType)arg4;
- (id)putObjectAsyncWithObject:(id)arg1 objectKey:(id)arg2 file:(id)arg3 process:(CDUnknownBlockType)arg4 finishURL:(CDUnknownBlockType)arg5;
- (void)setClientCredentialProviderWithAccessKey:(id)arg1 secretKey:(id)arg2 token:(id)arg3;
- (void)setUpClient;
- (id)init;

@end

