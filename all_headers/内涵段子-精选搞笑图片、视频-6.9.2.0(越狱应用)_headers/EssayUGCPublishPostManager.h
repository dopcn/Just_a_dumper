//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSUploadImageManagerDelegate-Protocol.h"

@class EssayVideoEventLog, NSString, SSUploadImageManager;
@protocol EssayUGCPublishPostManagerDelegate;

@interface EssayUGCPublishPostManager : NSObject <SSUploadImageManagerDelegate>
{
    id <EssayUGCPublishPostManagerDelegate> _delegate;
    SSUploadImageManager *_uploadImageManager;
    NSString *_uploadedImageUniqueKey;
    NSString *_uploadedVideoUniqueKey;
    NSString *_uploadedVideoMaterialID;
    EssayVideoEventLog *_uploadEvent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) EssayVideoEventLog *uploadEvent; // @synthesize uploadEvent=_uploadEvent;
@property(retain, nonatomic) NSString *uploadedVideoMaterialID; // @synthesize uploadedVideoMaterialID=_uploadedVideoMaterialID;
@property(retain, nonatomic) NSString *uploadedVideoUniqueKey; // @synthesize uploadedVideoUniqueKey=_uploadedVideoUniqueKey;
@property(retain, nonatomic) NSString *uploadedImageUniqueKey; // @synthesize uploadedImageUniqueKey=_uploadedImageUniqueKey;
@property(retain, nonatomic) SSUploadImageManager *uploadImageManager; // @synthesize uploadImageManager=_uploadImageManager;
@property(nonatomic) __weak id <EssayUGCPublishPostManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getVideoParam:(id)arg1 recordFlag:(_Bool)arg2;
- (void)stopSendLogVideoEvent:(id)arg1;
- (void)startLogVideoEvent:(id)arg1;
- (void)clearVideoEvent;
- (void)uploadImageManager:(id)arg1 uploadFailedForUniqueKey:(id)arg2 error:(id)arg3;
- (void)uploadImageManager:(id)arg1 uploadFinishForUniqueKey:(id)arg2 result:(id)arg3;
- (void)uploadImageManager:(id)arg1 uploadProgress:(id)arg2 forUniqueKey:(id)arg3;
- (void)cancelUploadVideo;
- (void)uploadUGCVideo:(id)arg1 withCoverSelectedTime:(id)arg2 withCategoryID:(id)arg3;
- (void)uploadUGCVideoAsyn:(id)arg1 withCoverSelectedTime:(id)arg2 withCategoryID:(id)arg3;
- (id)postUGCWithPublishModel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

