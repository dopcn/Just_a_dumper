//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliEntity.h"

@class NSNumber, NSString;

@interface ASCCloudFileItem : AliEntity
{
    NSNumber *_fileID;
    NSString *_fileName;
    NSString *_displayName;
    NSString *_iconPath;
    NSString *_filePath;
    NSString *_fileExtension;
    NSNumber *_fileSize;
    NSNumber *_createDate;
    NSNumber *_modifiedDate;
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    NSString *_currentFilename;
    NSString *_currentFilePath;
    NSNumber *_originalFileID;
    NSString *_onLinePreviewUrl;
}

+ (id)propertyMap;
@property(copy, nonatomic) NSString *onLinePreviewUrl; // @synthesize onLinePreviewUrl=_onLinePreviewUrl;
@property(retain, nonatomic) NSNumber *originalFileID; // @synthesize originalFileID=_originalFileID;
@property(copy, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
@property(copy, nonatomic) NSString *currentFilename; // @synthesize currentFilename=_currentFilename;
@property(retain, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSNumber *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSNumber *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;

@end

