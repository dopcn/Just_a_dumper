//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGQuickCamOutputAsset-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString, UIImage;

@interface IGQuickCamOutputPhotoAsset : NSObject <IGQuickCamOutputAsset>
{
    _Bool _isLandscape;
    UIImage *_originalImage;
    UIImage *_displayImage;
    UIImage *_displayImageWithEdits;
    UIImage *_croppedImage;
    UIImage *_croppedImageWithEdits;
    long long _devicePosition;
    long long _flashMode;
    NSDate *_creationDate;
    long long _landscapeMode;
    long long _assetSource;
    NSString *_sourceApplication;
    struct NSDictionary *_metadata;
    UIImage *_fullSizeImage;
    UIImage *_fullSizeImageWithEdits;
    struct CGSize _originalMediaSize;
}

@property(retain, nonatomic) UIImage *fullSizeImageWithEdits; // @synthesize fullSizeImageWithEdits=_fullSizeImageWithEdits;
@property(retain, nonatomic) UIImage *fullSizeImage; // @synthesize fullSizeImage=_fullSizeImage;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) struct CGSize originalMediaSize; // @synthesize originalMediaSize=_originalMediaSize;
@property(nonatomic) long long landscapeMode; // @synthesize landscapeMode=_landscapeMode;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(retain, nonatomic) UIImage *croppedImageWithEdits; // @synthesize croppedImageWithEdits=_croppedImageWithEdits;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits; // @synthesize displayImageWithEdits=_displayImageWithEdits;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) NSData *imageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

