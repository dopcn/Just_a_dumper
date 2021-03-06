//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttTCPublishBaseManager.h"

@interface MttTCPublishManager : MttTCPublishBaseManager
{
    _Bool _isPosting;
}

+ (id)sharedInstance;
- (void)editorUploadTask:(id)arg1 uploadProcessing:(id)arg2;
- (void)editorUploadTask:(id)arg1 uploadFail:(id)arg2;
- (void)editorUploadTask:(id)arg1 uploadFinish:(id)arg2;
- (void)cancelPost;
- (unsigned long long)calculateImageUploadProgress;
- (unsigned long long)currentResUploadProgress;
- (void)uploadImageFailed:(long long)arg1;
- (void)writePostFailed:(id)arg1 errorCode:(long long)arg2;
- (void)writePostSuccess:(id)arg1;
- (void)updloadPostDetail;
- (void)beginPublishPost:(id)arg1;
- (_Bool)isPosting;
- (id)init;

@end

