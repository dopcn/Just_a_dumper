//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseManager.h"

#import "NMMapCoveredProtocol-Protocol.h"
#import "NMPhotoAccountPopupViewDelegate-Protocol.h"
#import "NMPhotoCropViewDataSource-Protocol.h"
#import "NMPhotoCropViewDelegate-Protocol.h"
#import "NMPhotoEditViewDataSource-Protocol.h"
#import "NMPhotoEditViewDelegate-Protocol.h"
#import "NMPhotoSelectService-Protocol.h"
#import "NMPhotoSourceViewDataSource-Protocol.h"
#import "NMPopupViewEvent-Protocol.h"

@class NSMutableArray, NSString, UIImage;

@interface NMPhotoSelectManager : NMBaseManager <NMPhotoSelectService, NMPopupViewEvent, NMPhotoSourceViewDataSource, NMPhotoCropViewDelegate, NMPhotoAccountPopupViewDelegate, NMPhotoCropViewDataSource, NMPhotoEditViewDelegate, NMPhotoEditViewDataSource, NMMapCoveredProtocol>
{
    NSString *_saveFileName;
    struct CGSize _photoSize;
    _Bool _canRemove;
    long long _status;
    long long _popupType;
    NSMutableArray *_sourceArray;
    UIImage *_sourceImage;
    NSString *_popSelected;
    _Bool _hasImage;
    _Bool _hasCupMapImage;
    _Bool _isNeedCrop;
    unsigned long long _type;
    CDUnknownBlockType _photoSelectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType photoSelectBlock; // @synthesize photoSelectBlock=_photoSelectBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isNeedCrop; // @synthesize isNeedCrop=_isNeedCrop;
@property(nonatomic) _Bool hasCupMapImage; // @synthesize hasCupMapImage=_hasCupMapImage;
@property(copy, nonatomic) NSString *popSelected; // @synthesize popSelected=_popSelected;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(copy, nonatomic) NSString *saveFileName; // @synthesize saveFileName=_saveFileName;
- (void).cxx_destruct;
- (_Bool)needLayout;
- (_Bool)coveredFullScreen;
- (_Bool)isMapCoveredByViews:(long long)arg1;
- (id)getCurPhotoPath;
- (void)gotoAlbums;
- (void)goToCamera;
- (void)goToBack;
- (id)rotateImage:(id)arg1;
- (struct CGSize)photoCropSize;
- (id)photoCropViewSourceImage;
- (void)photoCropViewCanceled;
- (void)photoCropViewCropImage:(id)arg1;
- (id)availableSourceArray;
- (void)onButtonClickAction:(id)arg1 andSender:(id)arg2;
- (_Bool)hasCutMapImage;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
- (void)cancelChangeAvatar;
- (void)selectedCutMapImageButton;
- (void)selectedEditButton;
- (void)selectedDeletePicture;
- (void)selectPhotoAction;
- (void)selectAvatarByAlbums;
- (void)selectAvatarByCamera;
- (void)saveSeletedImage2File:(id)arg1;
- (void)gotPhotoImageCancel;
- (void)gotPhotoImage:(id)arg1 maxCompressSize:(struct CGSize)arg2;
- (void)gotPhotoImage:(id)arg1;
- (id)getSavedFileName;
- (void)setPhotoFile:(id)arg1;
- (void)selectPhotoToFile:(id)arg1 size:(struct CGSize)arg2 needCrop:(_Bool)arg3 style:(unsigned long long)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (int)suitableAnimation;
- (void)clearRelatedViews;
- (void)initRelatedViews;
- (void)photoDelete;
- (void)photoSelectFinished;
- (void)photoSelectCanceled;
- (Class)managerViewContainerClass;
- (void)setPopupType:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

