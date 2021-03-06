//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NHImagesUploaderProtocol-Protocol.h"

@class NHImagesUploaderConfig, NSMutableArray, NSProgress, NSString, TTHttpTask;

@interface NHImagesUploader : NSObject <NHImagesUploaderProtocol>
{
    double _totalSizeToUpload;
    double _hasCompletedSize;
    _Bool _isCanceld;
    Class _modelClass;
    CDUnknownBlockType _uploadImageProgressBlock;
    CDUnknownBlockType _uploadImageSuccessBlock;
    CDUnknownBlockType _uploadImageFailureBlock;
    double _currentUploadProgress;
    TTHttpTask *_uploadingTask;
    NSProgress *_uploadProgress;
    NSMutableArray *_resultModelArray;
    NHImagesUploaderConfig *_uploaderConfig;
}

+ (id)uploadQueue;
@property(retain, nonatomic) NHImagesUploaderConfig *uploaderConfig; // @synthesize uploaderConfig=_uploaderConfig;
@property(retain, nonatomic) NSMutableArray *resultModelArray; // @synthesize resultModelArray=_resultModelArray;
@property(retain, nonatomic) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) TTHttpTask *uploadingTask; // @synthesize uploadingTask=_uploadingTask;
@property(nonatomic) _Bool isCanceld; // @synthesize isCanceld=_isCanceld;
@property(nonatomic) double currentUploadProgress; // @synthesize currentUploadProgress=_currentUploadProgress;
@property(copy, nonatomic) CDUnknownBlockType uploadImageFailureBlock; // @synthesize uploadImageFailureBlock=_uploadImageFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadImageSuccessBlock; // @synthesize uploadImageSuccessBlock=_uploadImageSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadImageProgressBlock; // @synthesize uploadImageProgressBlock=_uploadImageProgressBlock;
@property(nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (void)monitorImageUploadStatus:(_Bool)arg1 imageFileSize:(double)arg2 error:(id)arg3;
- (id)mimeTypeWithData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeProgressObserverIfNeeded;
- (void)configUploader:(id)arg1;
- (void)cancelUpload;
- (_Bool)uploadImageData:(id)arg1 withCategory:(id)arg2;
- (void)uploadImagesData:(id)arg1 parameters:(id)arg2 modelClass:(Class)arg3 progressBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)uploadImages:(id)arg1 parameters:(id)arg2 modelClass:(Class)arg3 progressBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

