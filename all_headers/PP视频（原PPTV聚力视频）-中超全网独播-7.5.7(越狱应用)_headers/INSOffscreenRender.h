//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, EAGLContext, INSCirclePassFilter, INSFilter, INSRenderTarget, INSYUVFilter, NSArray, NSString, UIImage;

@interface INSOffscreenRender : NSObject
{
    UIImage *_logoImage;
    struct _opaque_pthread_mutex_t _sceneMutex;
    struct __CVPixelBufferPool *_pixelBufferPool;
    _Bool _enableAdjustOrientation;
    _Bool _isRenderVideo;
    _Bool _isDepth;
    float _logoAngle;
    int _width;
    int _height;
    EAGLContext *_glContext;
    NSString *_offset;
    INSFilter *_filter;
    INSFilter *_beautifyFilter;
    CIContext *_cContext;
    NSArray *_originScenes;
    NSArray *_renderScenes;
    INSRenderTarget *_drawableRenderTarget;
    INSCirclePassFilter *_cirlcleFilter;
    INSYUVFilter *_yuvFilter;
    union _GLKVector3 _backgroundColor;
    union _GLKQuaternion _adjustOrientation;
}

@property(retain, nonatomic) INSYUVFilter *yuvFilter; // @synthesize yuvFilter=_yuvFilter;
@property(retain, nonatomic) INSCirclePassFilter *cirlcleFilter; // @synthesize cirlcleFilter=_cirlcleFilter;
@property(nonatomic) _Bool isDepth; // @synthesize isDepth=_isDepth;
@property(nonatomic) union _GLKVector3 backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) INSRenderTarget *drawableRenderTarget; // @synthesize drawableRenderTarget=_drawableRenderTarget;
@property(retain, nonatomic) NSArray *renderScenes; // @synthesize renderScenes=_renderScenes;
@property(retain, nonatomic) NSArray *originScenes; // @synthesize originScenes=_originScenes;
@property(retain, nonatomic) CIContext *cContext; // @synthesize cContext=_cContext;
@property(retain, nonatomic) INSFilter *beautifyFilter; // @synthesize beautifyFilter=_beautifyFilter;
@property(retain, nonatomic) INSFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool isRenderVideo; // @synthesize isRenderVideo=_isRenderVideo;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) float logoAngle; // @synthesize logoAngle=_logoAngle;
@property(nonatomic) union _GLKQuaternion adjustOrientation; // @synthesize adjustOrientation=_adjustOrientation;
@property(nonatomic) _Bool enableAdjustOrientation; // @synthesize enableAdjustOrientation=_enableAdjustOrientation;
@property(copy, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void).cxx_destruct;
- (void)releasePixelBufferPool;
- (void)createPixelBufferPool;
- (struct __CVBuffer *)copyTextureData:(unsigned int)arg1 constext:(id)arg2;
- (id)readFrameBuffer;
- (void)updatAdjustOrientation;
- (void)updateRenderScenes;
- (void)updateScene;
- (void)setScenes:(id)arg1;
- (void)sceneUnlock;
- (void)sceneLock;
- (void)updateLogo;
@property(retain, nonatomic) UIImage *logoImage;
- (void)offscreenRender;
- (struct __CVBuffer *)renderYUV420pAndCopyWithPanoPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)renderNV12AndCopyWithPanoPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)renderAndCopyWithPanoPixelBuffer:(struct __CVBuffer *)arg1;
- (id)renderWithPanoPixelBuffer:(struct __CVBuffer *)arg1;
- (id)renderWithPanoUIImage:(id)arg1;
- (id)renderWithFlatPixelBuffer:(struct __CVBuffer *)arg1;
- (id)renderWithFlatUIImage:(id)arg1;
- (void)setRenderWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)initWithRenderWidth:(int)arg1 height:(int)arg2 depth:(_Bool)arg3;

@end

