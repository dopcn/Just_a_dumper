//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKBridgeBase.h"

#import "MDAudioPlayerDelegate-Protocol.h"
#import "MDPhotoPickerAndFilterHandlerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class MDMultiListener, MDPhotoPickerAndFilterHandler, MKAudioRecorderManager, NSDictionary, NSString;

@interface MDBridgeMedia : MKBridgeBase <UIActionSheetDelegate, MDPhotoPickerAndFilterHandlerDelegate, MDAudioPlayerDelegate>
{
    _Bool _audioPlaying;
    _Bool _keepScreenOn;
    NSDictionary *_imagesParaDic;
    MDPhotoPickerAndFilterHandler *_customPhotoPicker;
    NSDictionary *_playAudioPara;
    long long _audioType;
    NSString *_audioTrack;
    NSString *_audioPath;
    NSString *_uploadImagesCallBack;
    NSString *_uploadFilesCallBack;
    MDMultiListener *_listener;
    MKAudioRecorderManager *_recorderManager;
}

@property(retain, nonatomic) MKAudioRecorderManager *recorderManager; // @synthesize recorderManager=_recorderManager;
@property(retain, nonatomic) MDMultiListener *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) NSString *uploadFilesCallBack; // @synthesize uploadFilesCallBack=_uploadFilesCallBack;
@property(copy, nonatomic) NSString *uploadImagesCallBack; // @synthesize uploadImagesCallBack=_uploadImagesCallBack;
@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
@property(nonatomic) _Bool keepScreenOn; // @synthesize keepScreenOn=_keepScreenOn;
@property(retain, nonatomic) NSString *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
@property(retain, nonatomic) NSDictionary *playAudioPara; // @synthesize playAudioPara=_playAudioPara;
@property(nonatomic, getter=isAudioPlaying) _Bool audioPlaying; // @synthesize audioPlaying=_audioPlaying;
@property(retain, nonatomic) MDPhotoPickerAndFilterHandler *customPhotoPicker; // @synthesize customPhotoPicker=_customPhotoPicker;
@property(retain, nonatomic) NSDictionary *imagesParaDic; // @synthesize imagesParaDic=_imagesParaDic;
- (void).cxx_destruct;
- (void)previewImage:(id)arg1;
- (void)audioFileManager:(id)arg1 downloadFailedWithFilePath:(id)arg2 fileType:(int)arg3;
- (void)audioFileManager:(id)arg1 downloadFinishWithFilePath:(id)arg2 fileType:(int)arg3;
- (void)audioPlayer:(id)arg1 didStop:(_Bool)arg2 userInfo:(id)arg3;
- (void)audioPlayer:(id)arg1 didOccurError:(id)arg2 userInfo:(id)arg3;
- (void)audioPlayer:(id)arg1 didFinishPlaying:(int)arg2 userInfo:(id)arg3;
- (void)stopPlayAudio;
- (void)playAudio:(id)arg1;
- (_Bool)playWithAudioName:(id)arg1 url:(id)arg2;
- (id)responseDictionary:(long long)arg1 type:(long long)arg2 track:(id)arg3;
- (void)sendAudioCallbackWithStatus:(long long)arg1;
- (void)startAudio:(id)arg1;
- (void)stopAudio:(id)arg1;
- (void)mk_getPhotoFromCamera;
- (void)mk_getPhotoFromAlbum;
- (void)handleFilteredImage:(id)arg1;
- (void)imagePickerControllerDidCancel;
- (void)userDidSelectImageAssets:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)mk_showPhotoSourceActionSheet;
- (void)mk_handlePhotoPickingWithType:(long long)arg1;
- (void)readImages:(id)arg1;
- (void)uploadError:(id)arg1;
- (void)uploadFailed:(id)arg1;
- (void)uploadSuccess:(id)arg1;
- (void)doUpLoadImages:(id)arg1 withUrlPath:(id)arg2;
- (void)uploadImages:(id)arg1;
- (void)uploadFilesError:(id)arg1;
- (void)uploadFilesFailed:(id)arg1;
- (void)uploadFilesSuccess:(id)arg1;
- (void)uploadFile:(id)arg1;
- (void)createDirAtAlbumOriginCachePathIFNeed:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)saveDataToCache:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)shotVideo:(id)arg1;
- (void)saveImagesToAlbum:(id)arg1;
- (void)saveBase64File:(id)arg1;
- (id)imgName4PNG;
- (void)saveSnapshotPNGImgToCache:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)asyncSaveToAlbum:(id)arg1;
- (void)albumAuthorization:(CDUnknownBlockType)arg1;
- (id)imgPNGSnapshot4MainWindow;
- (id)imgPNGScreenshot4View:(id)arg1;
- (void)screenShot:(id)arg1;
- (void)customRecord:(id)arg1;
- (void)recordSound:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

