//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NOSVcloudRequestDelegate-Protocol.h"

@class NOSHttpManager, NSString;
@protocol NOSRecorderDelegate, NOSUploadRequestDelegate;

@interface NOSUploadManager : NSObject <NOSVcloudRequestDelegate>
{
    id <NOSUploadRequestDelegate> _delegate;
    id <NOSRecorderDelegate> _recorder;
    NOSHttpManager *_httpManager;
    CDUnknownBlockType _recorderKeyGen;
}

+ (_Bool)checkAndNotifyError:(id)arg1 key:(id)arg2 token:(id)arg3 data:(id)arg4 file:(id)arg5 complete:(CDUnknownBlockType)arg6;
+ (id)sharedInstanceWithRecorder:(id)arg1 recorderKeyGenerator:(CDUnknownBlockType)arg2;
+ (id)bucketLbsMap;
+ (id)lbsTask;
+ (id)globalConf;
+ (void)setGlobalConf:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType recorderKeyGen; // @synthesize recorderKeyGen=_recorderKeyGen;
@property(retain, nonatomic) NOSHttpManager *httpManager; // @synthesize httpManager=_httpManager;
@property(retain, nonatomic) id <NOSRecorderDelegate> recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak id <NOSUploadRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)putFile:(id)arg1 protocal:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7;
- (void)putFileByHttps:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6;
- (id)initWithRecorder:(id)arg1 recorderKeyGenerator:(CDUnknownBlockType)arg2;
- (id)initWithRecorder:(id)arg1;
- (id)init;
- (void)fileUploadInit:(id)arg1 userFileName:(id)arg2 typeId:(id)arg3 presetId:(id)arg4 uploadCallbackUrl:(id)arg5 callbackUrl:(id)arg6 description:(id)arg7 watermarkId:(id)arg8 userDefInfo:(id)arg9 success:(CDUnknownBlockType)arg10 fail:(CDUnknownBlockType)arg11;
@property(readonly, nonatomic) NSString *objectName;
@property(readonly, nonatomic) NSString *bucketName;
@property(readonly, nonatomic) NSString *xNosToken;
- (id)NOSVcloudAppToken;
- (id)NOSVcloudAppAccid;
- (id)NOSVcloudAppKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

