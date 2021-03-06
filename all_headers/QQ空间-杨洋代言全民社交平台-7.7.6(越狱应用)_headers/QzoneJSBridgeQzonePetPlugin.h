//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQJSBridgePluginHelper.h"

#import "QZPTakePhotoViewControllerDelegate-Protocol.h"
#import "QZPetImageShareObjDelegate-Protocol.h"
#import "QZonePhotoEditViewControllerDelegate-Protocol.h"

@class NSArray, NSString, QZPTakePhotoViewController, QZonePhotoEditViewController, UIImage;

@interface QzoneJSBridgeQzonePetPlugin : QQJSBridgePluginHelper <QZonePhotoEditViewControllerDelegate, QZPetImageShareObjDelegate, QZPTakePhotoViewControllerDelegate>
{
    _Bool _shouldGotoSpace;
    _Bool _needDivided;
    QZPTakePhotoViewController *_imagePicker;
    QZonePhotoEditViewController *_photoEditView;
    NSArray *_photoBase64Arr;
    long long _photoPieceIndex;
    double _pieceMaxSize;
    NSString *_missionKey;
    UIImage *_petPhoto;
}

@property(retain, nonatomic) UIImage *petPhoto; // @synthesize petPhoto=_petPhoto;
@property(copy, nonatomic) NSString *missionKey; // @synthesize missionKey=_missionKey;
@property(nonatomic) double pieceMaxSize; // @synthesize pieceMaxSize=_pieceMaxSize;
@property(nonatomic) _Bool needDivided; // @synthesize needDivided=_needDivided;
@property(nonatomic) long long photoPieceIndex; // @synthesize photoPieceIndex=_photoPieceIndex;
@property(retain, nonatomic) NSArray *photoBase64Arr; // @synthesize photoBase64Arr=_photoBase64Arr;
@property(nonatomic) __weak QZonePhotoEditViewController *photoEditView; // @synthesize photoEditView=_photoEditView;
@property(nonatomic) __weak QZPTakePhotoViewController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) _Bool shouldGotoSpace; // @synthesize shouldGotoSpace=_shouldGotoSpace;
- (void).cxx_destruct;
- (void)shareActionClicked:(unsigned long long)arg1 shareObj:(id)arg2;
- (void)photoEditCancel:(id)arg1;
- (void)photoEditSuccess:(id)arg1 haveChangedImage:(id)arg2;
- (void)cancelTakePhoto:(id)arg1;
- (void)finishTakePhoto:(id)arg1 photoImage:(id)arg2 petScreenShot:(id)arg3 petRectDividedByMapWidth:(struct CGRect)arg4;
- (void)shareImage:(id)arg1 shareType:(long long)arg2 url:(id)arg3 qr_rect:(id)arg4 quality:(long long)arg5;
- (void)shareGif:(id)arg1 delay:(long long)arg2 content:(id)arg3;
- (void)takePetPhotoWithId:(id)arg1;
- (void)askForPhotoPetAnimates:(CDUnknownBlockType)arg1;
- (void)forceUpdatePet;
- (id)arrayOfFragWithData:(id)arg1 size:(double)arg2;
- (id)base64ArrOfImg:(id)arg1 maxSize:(double)arg2;
- (void)asyncReturnBase64Piece:(id)arg1 index:(long long)arg2 code:(long long)arg3 query:(id)arg4;
- (void)handleJsBridgeRequest_QzonePet_getPetSharePhoto:(id)arg1;
- (void)handleJsBridgeRequest_QzonePet_TakePetPhoto:(id)arg1;
- (void)handleJsBridgeRequest_QzonePet_PetSkinsChanged:(id)arg1;
- (void)handleJsBridgeRequest_QzonePet_SharePetGifAnimation:(id)arg1;
- (void)handleJsBridgeRequest_QzonePet_modifyPetName:(id)arg1;
- (id)imagesFromBase64:(id)arg1;
- (id)dataURL2Image:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

