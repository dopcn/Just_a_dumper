//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGFilterGroup, IGLocalLaplacianFilter, IGLuxBlendFilter, IGNormalFilter, IGSurface, IGTiltShiftFilter, UIImage;
@protocol IGPostPipelineFilterDelegate;

@interface IGPostPipelineFilter : IGImageFilter
{
    _Bool _borderHidden;
    _Bool _luxEnabled;
    _Bool _sharpenDisabled;
    _Bool _disableTiltShiftRendering;
    _Bool _displayOriginal;
    _Bool _luxNeedsRefresh;
    _Bool _needsRefresh;
    IGSurface *_inputSurface;
    IGSurface *_outputSurface;
    IGSurface *_luxCDF;
    unsigned long long _tintShadowsColorIndex;
    unsigned long long _tintHighlightsColorIndex;
    id <IGPostPipelineFilterDelegate> _delegate;
    IGSurface *_luxedPreviewSurface;
    IGLuxBlendFilter *_luxBlendFilter;
    IGFilterGroup *_filters;
    IGNormalFilter *_displayOriginalFilter;
}

@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) _Bool luxNeedsRefresh; // @synthesize luxNeedsRefresh=_luxNeedsRefresh;
@property(retain, nonatomic) IGNormalFilter *displayOriginalFilter; // @synthesize displayOriginalFilter=_displayOriginalFilter;
@property(retain, nonatomic) IGFilterGroup *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) IGLuxBlendFilter *luxBlendFilter; // @synthesize luxBlendFilter=_luxBlendFilter;
@property(retain, nonatomic) IGSurface *luxedPreviewSurface; // @synthesize luxedPreviewSurface=_luxedPreviewSurface;
@property(nonatomic) __weak id <IGPostPipelineFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displayOriginal; // @synthesize displayOriginal=_displayOriginal;
@property(nonatomic) _Bool disableTiltShiftRendering; // @synthesize disableTiltShiftRendering=_disableTiltShiftRendering;
@property(nonatomic) _Bool sharpenDisabled; // @synthesize sharpenDisabled=_sharpenDisabled;
@property(nonatomic) unsigned long long tintHighlightsColorIndex; // @synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex;
@property(nonatomic) unsigned long long tintShadowsColorIndex; // @synthesize tintShadowsColorIndex=_tintShadowsColorIndex;
@property(retain, nonatomic) IGSurface *luxCDF; // @synthesize luxCDF=_luxCDF;
@property(nonatomic, getter=isLuxEnabled) _Bool luxEnabled; // @synthesize luxEnabled=_luxEnabled;
@property(nonatomic) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(retain, nonatomic) IGSurface *outputSurface; // @synthesize outputSurface=_outputSurface;
@property(retain, nonatomic) IGSurface *inputSurface; // @synthesize inputSurface=_inputSurface;
- (void).cxx_destruct;
- (_Bool)hasAdjustedValues;
- (_Bool)isFiltered;
- (id)flattenedFilter;
- (id)renderByConsumingSource:(id)arg1;
- (void)render:(id)arg1 to:(id)arg2;
- (void)renderIfNeeded;
- (void)render;
- (void)setNeedsRefresh;
- (void)clearCachesNotOfSize:(struct CGSize)arg1;
- (id)renderOrRetrieveLuxedSurfaceOfSize:(struct CGSize)arg1;
@property(nonatomic) unsigned long long tiltshiftMode;
@property(nonatomic) double tiltShiftAngle;
@property(nonatomic) double tiltShiftRadius;
@property(nonatomic) struct CGPoint tiltShiftCenter;
@property(nonatomic) union _GLKVector3 tintHighlightsColor;
@property(nonatomic) union _GLKVector3 tintShadowsColor;
@property(nonatomic) double tintHighlightsIntensity;
@property(nonatomic) double tintShadowsIntensity;
@property(nonatomic) double sharpen;
@property(nonatomic) double shadows;
@property(nonatomic) double highlights;
@property(nonatomic) double fade;
@property(nonatomic) double vignette;
@property(nonatomic) double temperature;
@property(nonatomic) double saturation;
@property(nonatomic) double contrast;
@property(nonatomic) double brightness;
@property(nonatomic) double localLaplacianAmount;
@property(nonatomic, getter=isLocalLaplacianEnabled) _Bool localLaplacianEnabled;
@property(readonly, nonatomic) IGLocalLaplacianFilter *localLaplacianFilter;
- (void)reduceCaches;
@property(nonatomic) double luxBlendAmount;
- (void)setDisablePhotoFilter:(_Bool)arg1;
- (union _GLKMatrix4)textureTransform;
- (void)setTextureTransform:(union _GLKMatrix4)arg1;
- (void)updateBorder;
- (_Bool)shouldDisplayBorder;
@property(readonly, nonatomic) UIImage *photoBorderImage;
- (_Bool)photoFilterHasBorder;
@property(readonly, nonatomic) IGTiltShiftFilter *tiltShiftFilter;
@property(nonatomic) double photoFilterStrength;
@property(readonly, nonatomic) IGImageFilter *photoFilter;
- (id)basicAdjustFilter;
@property(retain, nonatomic) Class photoFilterClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

