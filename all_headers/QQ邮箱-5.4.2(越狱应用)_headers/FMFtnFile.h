//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCommonFile.h"

@class NSString, QMFtnRequestHandler, QMFtnTaskHanlder;

@interface FMFtnFile : FMCommonFile
{
    int _FMFMediaFileState;
    id _downloadHandler;
    QMFtnTaskHanlder *_fileDownloadTask;
    QMFtnRequestHandler *_fileDownloadUrlTask;
    int _downloadState;
    long long _totalSize;
    long long _downloadedSize;
    NSString *_name;
    NSString *_dataPath;
    NSString *_previewUrl;
    struct qm_ftn _fileInfo;
}

@property(nonatomic) int fileMediaState; // @synthesize fileMediaState=_FMFMediaFileState;
- (void)setPreviewUrl:(id)arg1;
- (void)setDownloadState:(int)arg1;
- (int)downloadState;
- (void)setDataPath:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)setDownloadedSize:(long long)arg1;
- (long long)downloadedSize;
- (void)setTotalSize:(long long)arg1;
- (long long)totalSize;
@property(nonatomic) struct qm_ftn fileInfo; // @synthesize fileInfo=_fileInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)previewWps:(id)arg1;
- (_Bool)previewMovie:(id)arg1;
- (_Bool)previewCompress:(id)arg1;
- (id)vedioPreviewUrl;
- (id)previewUrl;
- (void)transCodeWithCallback:(id)arg1;
- (long long)accountId;
- (id)identifier;
- (_Bool)isSupportCloudCompress;
- (_Bool)isSupportAudioPreview;
- (_Bool)isSupportMoviePreview;
- (_Bool)isSupportWpsPreview;
- (_Bool)pauseDownload;
- (_Bool)startDownloadWithCallback:(id)arg1;
- (void)asyncDownloadImage:(id)arg1 withUrlRequest:(id)arg2 withCallback:(id)arg3;
- (void)asyncDownloadImage:(id)arg1 withUrlRequest:(id)arg2 withMainThreadCallback:(id)arg3;
- (_Bool)startDownloadImageWithCallback:(id)arg1;
- (_Bool)isSpecialImage;
- (_Bool)isImageFileCompleteExist;
- (id)imageDataPath;
- (void)downloadFileWithCallback:(id)arg1;
- (void)downloadPlay:(CDUnknownBlockType)arg1 errorCallback:(CDUnknownBlockType)arg2;
- (void)downloadMediaWithCallback:(id)arg1;
- (id)ftnDownloadCallbackWithCallback:(id)arg1;
- (void)comfirmLinkPath:(id)arg1;
- (_Bool)mediaPlayAvaliable;
- (_Bool)mediaDownloadTransCode;
- (_Bool)isFileExist;
- (_Bool)isFileCompleteExist;
- (id)dataPath;
- (void)setDataPathOnSuccess;
- (void)setMediaStateWithStateWhenLoaded:(int)arg1;
- (void)setMediaStateWithState:(int)arg1;
- (void)setData:(id)arg1;
- (int)filetype;
- (basic_string_a490aa4c)fileId;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

