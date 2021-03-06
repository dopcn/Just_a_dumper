//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTARFilterManager, MTCamera, MTCameraEffect, MTFilterControl, MTTextureSegmentTool;

@interface MTCameraManager : NSObject
{
    MTARFilterManager *_cameraARProcessTool;
    MTFilterControl *_filterControl;
    MTCamera *_camera;
    long long _textureScaleType;
    MTTextureSegmentTool *_textureSegmentEngine;
    MTCameraEffect *_effect;
    struct CGSize _ARPreviewSize;
    struct CGRect _ARMaterialShowRect;
}

@property(retain, nonatomic) MTCameraEffect *effect; // @synthesize effect=_effect;
@property(nonatomic) struct CGSize ARPreviewSize; // @synthesize ARPreviewSize=_ARPreviewSize;
@property(nonatomic) struct CGRect ARMaterialShowRect; // @synthesize ARMaterialShowRect=_ARMaterialShowRect;
@property(retain, nonatomic) MTTextureSegmentTool *textureSegmentEngine; // @synthesize textureSegmentEngine=_textureSegmentEngine;
@property(nonatomic) long long textureScaleType; // @synthesize textureScaleType=_textureScaleType;
@property(retain, nonatomic) MTCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) MTFilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(retain, nonatomic) MTARFilterManager *cameraARProcessTool; // @synthesize cameraARProcessTool=_cameraARProcessTool;
- (void).cxx_destruct;
- (id)currentEffectFilter;
- (id)currentARFilter;
- (void)applyPrittyAR;
- (void)applyEmptyStikcer:(_Bool)arg1 effect:(id)arg2;
- (void)updateStickerWithPartsConfig:(id)arg1 effect:(id)arg2 effectPath:(id)arg3 modelPath:(id)arg4;
- (void)switchCurrentCPMaterial;
- (_Bool)isValidSwitchARWithCurrentIndex:(long long)arg1;
- (void)updateCameraEffect:(id)arg1 filterInfo:(id)arg2;
- (void)updateBeautyLevel:(long long)arg1;
- (_Bool)applyDefaultEffect:(id)arg1 filterInfo:(id)arg2;
- (void)configureAARMaterialShowRect:(struct CGRect)arg1 preViewSize:(struct CGSize)arg2 ratioType:(long long)arg3;
- (void)setTextureScaleTypeWithRatio:(long long)arg1;
- (void)setCaptureSessionPresetWithRatio:(long long)arg1;
- (id)setFlashModeWithFlashState:(long long)arg1 retinaFlashState:(long long)arg2 cameraPosition:(long long)arg3 nightShotEnable:(_Bool)arg4;
- (void)focusWithMode:(long long)arg1 exposeWithMode:(long long)arg2 atDevicePoint:(struct CGPoint)arg3;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1 torchMode:(long long)arg2 flip:(_Bool)arg3;
- (void)updateBeautyEffectWithLevel:(long long)arg1;
- (void)setupAREnginesInfNeed;
- (void)setARCameraPosition:(long long)arg1;
- (void)rotateCamera;
- (void)applyFaceEngine;
- (_Bool)isCurrentFilterSupportHandInteraction;
- (_Bool)isCurrentDeviceSupportMeiTuVideoStabilization;
- (_Bool)isCurrentARToolCreated;
- (void)setMuteEnable:(_Bool)arg1;
- (void)setARAllMusicEnable:(_Bool)arg1;
- (void)setARServiceActive:(_Bool)arg1;
- (void)stop;
- (void)setupCameraWithPosition:(long long)arg1 preview:(id)arg2 delegate:(id)arg3 ratioType:(long long)arg4;
- (void)dealloc;

@end

