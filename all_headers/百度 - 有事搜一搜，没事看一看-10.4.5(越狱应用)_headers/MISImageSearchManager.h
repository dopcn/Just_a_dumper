//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIImage;
@protocol OS_dispatch_queue;

@interface MISImageSearchManager : NSObject
{
    struct LocalImageSearchManager *_sameSearch;
    unsigned long long pixBufferWidth;
    unsigned long long pixBufferHeight;
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_queue> *scornersQueue;
    _Bool _initSucess;
    _Bool _isReadToStartLocalImageSearch;
    _Bool _fileLoadFinish;
    _Bool _loadARCancelStatus;
    NSMutableDictionary *_fileNameAndFeasDic;
    UIImage *_lastImage;
    long long _scanCount;
    double _scanStartTime;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool loadARCancelStatus; // @synthesize loadARCancelStatus=_loadARCancelStatus;
@property(nonatomic) double scanStartTime; // @synthesize scanStartTime=_scanStartTime;
@property(nonatomic) long long scanCount; // @synthesize scanCount=_scanCount;
@property(retain, nonatomic) UIImage *lastImage; // @synthesize lastImage=_lastImage;
@property(nonatomic) _Bool fileLoadFinish; // @synthesize fileLoadFinish=_fileLoadFinish;
@property(nonatomic) _Bool isReadToStartLocalImageSearch; // @synthesize isReadToStartLocalImageSearch=_isReadToStartLocalImageSearch;
@property(nonatomic) _Bool initSucess; // @synthesize initSucess=_initSucess;
@property(retain, nonatomic) NSMutableDictionary *fileNameAndFeasDic; // @synthesize fileNameAndFeasDic=_fileNameAndFeasDic;
- (void).cxx_destruct;
- (void)checkARConfigToDownFeature:(id)arg1 andFeaturemd5:(id)arg2;
- (void)downloadARfeatureZip:(id)arg1 andSourceUrl:(id)arg2 andfeatureFilemd5:(id)arg3;
- (id)MISFileMD5HashCreateWithPath:(id)arg1;
- (void)handleARConfigDic:(id)arg1;
- (void)handleARCaseTipsDic:(id)arg1;
- (void)handleARScanTimeoutConfigDic:(id)arg1;
- (void)handleARUploadPicConfigStatus:(id)arg1;
- (void)handleScanPtsWithBuffer:(struct opaqueCMSampleBuffer *)arg1 parentView:(id)arg2;
- (id)imageByDrawingCircleOnImage:(struct CGSize)arg1 withCorners:(vector_089524ff *)arg2 andScale:(long long)arg3;
- (long long)getValue:(int)arg1;
- (void)handleImageSearchWithBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)reportARScanInfoToVipLog:(id)arg1;
- (void)reportARScanInfoToVipLogWithpageId:(id)arg1 andMode:(id)arg2 withArkey:(id)arg3;
- (void)reportARScanInfoToVipLogWithSrcp:(id)arg1 withARKey:(id)arg2 andARMode:(id)arg3;
- (id)postBody:(id)arg1;
- (id)VInfoDictionary:(id)arg1;
- (id)commonParameter;
- (void)sendCNNLocImageTolog:(id)arg1 andParam:(id)arg2;
- (void)sendImageTolog:(id)arg1 andArkey:(id)arg2 andStatus:(id)arg3;
- (id)dictionaryInfoToJsonString:(id)arg1;
- (id)image2Base64String:(id)arg1;
- (_Bool)imageHasAlpha:(id)arg1;
- (void)arscanTimeout;
- (void)localFeaturesToSearch:(struct opaqueCMSampleBuffer *)arg1;
- (char *)UIImageToGrayscaleBuffer:(id)arg1;
- (char *)GrayImage:(struct opaqueCMSampleBuffer *)arg1;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)releaseImageSearchData;
- (void)getPicfeaTofilePath;
- (id)filePathWithName:(id)arg1;
- (_Bool)loadLocalFeatures;
- (_Bool)checkFeaFileExist;
- (void)setLocalImageSearchStatus:(_Bool)arg1;
- (void)setCancelLoadARStatus;
- (id)init;

@end

