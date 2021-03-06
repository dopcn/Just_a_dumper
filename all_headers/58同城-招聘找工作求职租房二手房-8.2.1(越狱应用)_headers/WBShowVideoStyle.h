//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBPKStyleProtocol-Protocol.h"
#import "WBPSPhotoPickerDelegate-Protocol.h"
#import "WBShowVideoSortViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, WBNavigationController, WBVideoUploader;

@interface WBShowVideoStyle : NSObject <WBPSPhotoPickerDelegate, WBShowVideoSortViewControllerDelegate, WBPKStyleProtocol>
{
    NSDictionary *_actionParams;
    WBNavigationController *_navigationController;
    CDUnknownBlockType _completionBlock;
    NSArray *_selectedPhotos;
    NSArray *_backupPhotos;
    long long _maxNum;
    WBVideoUploader *_videoUploader;
}

@property(retain, nonatomic) WBVideoUploader *videoUploader; // @synthesize videoUploader=_videoUploader;
@property(nonatomic) long long maxNum; // @synthesize maxNum=_maxNum;
@property(copy, nonatomic) NSArray *backupPhotos; // @synthesize backupPhotos=_backupPhotos;
@property(copy, nonatomic) NSArray *selectedPhotos; // @synthesize selectedPhotos=_selectedPhotos;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) WBNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *actionParams; // @synthesize actionParams=_actionParams;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sortViewControllerShouldAddPhotoWithSelectedPhotos:(id)arg1;
- (void)sortViewControllerFinish:(_Bool)arg1 photos:(id)arg2;
- (void)photoPickerDidFinishPick:(_Bool)arg1 photos:(id)arg2;
- (void)checkVideoUpdate:(id)arg1;
- (id)obtainUploadedImages;
- (void)uploadSelectedPhotos:(CDUnknownBlockType)arg1;
- (void)replaceSelectedPhotosWithImageURLs:(id)arg1;
- (void)replaceSelectedPhotosWithImages:(id)arg1;
- (void)checkAlbumAuthorization;
- (void)uploadPhotosAfterSelectWithParameter:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

