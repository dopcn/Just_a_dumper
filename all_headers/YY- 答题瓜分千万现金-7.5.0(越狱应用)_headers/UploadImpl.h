//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BS2SessionCredentials-Protocol.h"
#import "IUploader-Protocol.h"

@class BS2PersistableUpload, BS2TransferManager, BS2Upload, NSData, NSNumber, NSString;
@protocol IBS2GetToken, IUploaderDelegate;

@interface UploadImpl : NSObject <IUploader, BS2SessionCredentials>
{
    NSString *_bucket;
    NSString *_file_key;
    NSString *_local_file;
    NSData *_data;
    NSNumber *_retry_time;
    id <IUploaderDelegate> _delegate;
    id <IBS2GetToken> _tokenDelegate;
    BS2Upload *_upload;
    BS2PersistableUpload *_persistUpload;
    BS2TransferManager *_transferManager;
}

@property(retain, nonatomic) BS2TransferManager *transferManager; // @synthesize transferManager=_transferManager;
@property(retain, nonatomic) BS2PersistableUpload *persistUpload; // @synthesize persistUpload=_persistUpload;
@property(retain, nonatomic) BS2Upload *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) id <IBS2GetToken> tokenDelegate; // @synthesize tokenDelegate=_tokenDelegate;
@property(nonatomic) __weak id <IUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *retry_time; // @synthesize retry_time=_retry_time;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *local_file; // @synthesize local_file=_local_file;
@property(retain, nonatomic) NSString *file_key; // @synthesize file_key=_file_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (id)getSessionTokenForBucket:(id)arg1 key:(id)arg2 method:(id)arg3 error:(id *)arg4;
- (int)resume;
- (int)stop;
- (int)pasue;
- (int)start;
- (void)setRetryTime:(id)arg1;
- (id)init:(id)arg1 key:(id)arg2 data:(id)arg3 token_delegate:(id)arg4 delegate:(id)arg5;
- (id)init:(id)arg1 key:(id)arg2 file_path:(id)arg3 token_delegate:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

