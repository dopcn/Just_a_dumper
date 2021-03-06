//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UIImage;

@interface TTSaveOrShareManager : NSObject
{
    _Bool _hasSuccessfullySaved;
    _Bool _canShare;
    _Bool _isSaving;
    _Bool _albumCanRefresh;
    CDUnknownBlockType _completion;
    NSMutableArray *_assetUrls;
    NSArray *_imagesToSave;
    NSDictionary *_imageExif;
    NSDictionary *_originImageMetadata;
    UIImage *_imageForShare;
    NSString *_shareText;
    NSString *_shareLink;
    NSString *_shareTitle;
    NSString *_shareDescription;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) UIImage *imageForShare; // @synthesize imageForShare=_imageForShare;
@property(retain, nonatomic) NSDictionary *originImageMetadata; // @synthesize originImageMetadata=_originImageMetadata;
@property(retain, nonatomic) NSDictionary *imageExif; // @synthesize imageExif=_imageExif;
@property(retain, nonatomic) NSArray *imagesToSave; // @synthesize imagesToSave=_imagesToSave;
@property(nonatomic) _Bool albumCanRefresh; // @synthesize albumCanRefresh=_albumCanRefresh;
@property(retain, nonatomic) NSMutableArray *assetUrls; // @synthesize assetUrls=_assetUrls;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isSaving; // @synthesize isSaving=_isSaving;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
@property(nonatomic) _Bool hasSuccessfullySaved; // @synthesize hasSuccessfullySaved=_hasSuccessfullySaved;
- (void).cxx_destruct;
- (void)clearImagesToSave;
- (void)imageIndex:(int)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3 assetURL:(id)arg4;
- (void)iterSaveImage:(int)arg1;
- (void)saveImageAndProduceSharedImage:(id)arg1 imageExif:(id)arg2 originImageMetadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)needToSave;
- (void)dealloc;
- (id)init;

@end

