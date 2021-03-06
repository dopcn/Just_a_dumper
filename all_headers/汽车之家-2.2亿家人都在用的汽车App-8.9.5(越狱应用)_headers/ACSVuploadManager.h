//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AHBaseServiceDelegate-Protocol.h"

@class ACSVPublishModel, ACSVpublishService, AHSVuploadManager, NSString;

@interface ACSVuploadManager : NSObject <AHBaseServiceDelegate>
{
    ACSVPublishModel *_lastPublishModel;
    AHSVuploadManager *_uploadManager;
    ACSVpublishService *_publishService;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _uploadSuccessBlock;
    CDUnknownBlockType _uploadFailureBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType uploadFailureBlock; // @synthesize uploadFailureBlock=_uploadFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadSuccessBlock; // @synthesize uploadSuccessBlock=_uploadSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(retain, nonatomic) ACSVpublishService *publishService; // @synthesize publishService=_publishService;
@property(retain, nonatomic) AHSVuploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(retain, nonatomic) ACSVPublishModel *lastPublishModel; // @synthesize lastPublishModel=_lastPublishModel;
- (void).cxx_destruct;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (void)netServiceFinished:(long long)arg1;
- (void)uploadStatueProgress:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)uploadFileWithPublishModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

