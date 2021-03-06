//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MLVideoProcessor-Protocol.h"

@class FDKFaceWarpFilter, FDKSkinWhitenFilter, GPUImageContrastFilter, GPUImageCropFilter, GPUImageFilterPipeline, GPUImageLookupFilter, GPUImageOutput, GPUImagePicture, MLAudioPrism, MLBeautySettings, MLFilterDescriptor, MLGPUImageCVPixelBufferInput, MLGPUImageCVPixelBufferOutput, MLGPUImageDecorationManager, MLGPUImageLogarithmYFilter, MLGPUImageScaleFilter, MLGPUImageVibranceFilter, MMFaceWarper, NSArray, NSString;
@protocol GPUImageInput, GPUImageInput><MLSkinSmoothingFilter, OS_dispatch_queue;

@interface MLGPUImageVideoProcessor : NSObject <MLVideoProcessor>
{
    MLFilterDescriptor *_filterDescriptor;
    MLBeautySettings *_beautySettings;
    MLGPUImageDecorationManager *_decorationManager;
    MLGPUImageCVPixelBufferInput *_pixelBufferInput;
    MLGPUImageCVPixelBufferOutput *_pixelBufferOutput;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GPUImageFilterPipeline *_filterPipeline;
    GPUImageCropFilter *_cropFilter;
    MLGPUImageVibranceFilter *_vibranceFilter;
    MLGPUImageLogarithmYFilter *_logarithmYFilter;
    GPUImageContrastFilter *_contrastFilter;
    GPUImagePicture *_defaultColorLookupTable;
    GPUImageLookupFilter *_defaultColorLookupFilter;
    GPUImageOutput<GPUImageInput> *_effectFilter;
    struct GPUImageOutput *_skinSmoothingFilter;
    GPUImageOutput<GPUImageInput> *_faceBeautyFilter;
    FDKFaceWarpFilter *_faceWarpFilter;
    FDKSkinWhitenFilter *_skinWhitenFilter;
    MMFaceWarper *_faceWarper;
    NSArray *_faceFeatures;
    NSArray *_objectFeatures;
    MLGPUImageScaleFilter *_scaleFilter;
}

@property(retain, nonatomic) MLGPUImageScaleFilter *scaleFilter; // @synthesize scaleFilter=_scaleFilter;
@property(copy, nonatomic) NSArray *objectFeatures; // @synthesize objectFeatures=_objectFeatures;
@property(copy, nonatomic) NSArray *faceFeatures; // @synthesize faceFeatures=_faceFeatures;
@property(retain, nonatomic) MMFaceWarper *faceWarper; // @synthesize faceWarper=_faceWarper;
@property(retain, nonatomic) FDKSkinWhitenFilter *skinWhitenFilter; // @synthesize skinWhitenFilter=_skinWhitenFilter;
@property(retain, nonatomic) FDKFaceWarpFilter *faceWarpFilter; // @synthesize faceWarpFilter=_faceWarpFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *faceBeautyFilter; // @synthesize faceBeautyFilter=_faceBeautyFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput><MLSkinSmoothingFilter> *skinSmoothingFilter; // @synthesize skinSmoothingFilter=_skinSmoothingFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(retain, nonatomic) GPUImageLookupFilter *defaultColorLookupFilter; // @synthesize defaultColorLookupFilter=_defaultColorLookupFilter;
@property(retain, nonatomic) GPUImagePicture *defaultColorLookupTable; // @synthesize defaultColorLookupTable=_defaultColorLookupTable;
@property(retain, nonatomic) GPUImageContrastFilter *contrastFilter; // @synthesize contrastFilter=_contrastFilter;
@property(retain, nonatomic) MLGPUImageLogarithmYFilter *logarithmYFilter; // @synthesize logarithmYFilter=_logarithmYFilter;
@property(retain, nonatomic) MLGPUImageVibranceFilter *vibranceFilter; // @synthesize vibranceFilter=_vibranceFilter;
@property(retain, nonatomic) GPUImageCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) GPUImageFilterPipeline *filterPipeline; // @synthesize filterPipeline=_filterPipeline;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) MLGPUImageCVPixelBufferOutput *pixelBufferOutput; // @synthesize pixelBufferOutput=_pixelBufferOutput;
@property(retain, nonatomic) MLGPUImageCVPixelBufferInput *pixelBufferInput; // @synthesize pixelBufferInput=_pixelBufferInput;
@property(retain, nonatomic) MLGPUImageDecorationManager *decorationManager; // @synthesize decorationManager=_decorationManager;
@property(copy, nonatomic) MLBeautySettings *beautySettings; // @synthesize beautySettings=_beautySettings;
@property(copy, nonatomic) MLFilterDescriptor *filterDescriptor; // @synthesize filterDescriptor=_filterDescriptor;
- (void).cxx_destruct;
- (void)setFaceFeatures:(id)arg1 objectFeatures:(id)arg2;
- (void)processingCVPixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSArray *objectTriggeredDecorations;
- (id)decorationIdentifiers;
- (void)removeDecorationWithIdentifier:(id)arg1;
- (void)addDecoration:(id)arg1 withIdentifier:(id)arg2;
- (void)addDecoration:(id)arg1 duration:(double)arg2 positionType:(long long)arg3;
@property(nonatomic) struct CGRect cropRegion;
- (void)skinSmoothingMethodChanged:(id)arg1;
@property(readonly, nonatomic) MLAudioPrism *audioPrism;
@property(nonatomic) double scale;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

