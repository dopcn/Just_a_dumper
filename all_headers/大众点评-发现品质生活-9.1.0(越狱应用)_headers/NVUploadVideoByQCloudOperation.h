//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVUploadVideoOperation.h"

@class TVCClient;

@interface NVUploadVideoByQCloudOperation : NVUploadVideoOperation
{
    TVCClient *_uploadClient;
}

@property(retain, nonatomic) TVCClient *uploadClient; // @synthesize uploadClient=_uploadClient;
- (void).cxx_destruct;
- (void)cancel;
- (void)getSignatureError;
- (void)checkFileError;
- (void)uploadFailed;
- (void)uploadFinished;
- (_Bool)needChangeHTTP2HTTPS;
- (void)beginUpload:(id)arg1;
- (void)main;

@end

