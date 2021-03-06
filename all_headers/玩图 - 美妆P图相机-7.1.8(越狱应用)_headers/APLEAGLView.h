//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext;

@interface APLEAGLView : UIView
{
    int _backingWidth;
    int _backingHeight;
    EAGLContext *_context;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    unsigned int _frameBufferHandle;
    unsigned int _colorBufferHandle;
    const float *_preferredConversion;
    float _preferredRotation;
    float _chromaThreshold;
    float _lumaThreshold;
    unsigned int _program;
    struct CGSize _presentationRect;
}

+ (Class)layerClass;
@property unsigned int program; // @synthesize program=_program;
@property float lumaThreshold; // @synthesize lumaThreshold=_lumaThreshold;
@property float chromaThreshold; // @synthesize chromaThreshold=_chromaThreshold;
@property struct CGSize presentationRect; // @synthesize presentationRect=_presentationRect;
@property float preferredRotation; // @synthesize preferredRotation=_preferredRotation;
- (void).cxx_destruct;
- (_Bool)validateProgram:(unsigned int)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 URL:(id)arg3;
- (_Bool)loadShaders;
- (void)drawSquareWithVertices:(float *)arg1 withTexcoords:(float *)arg2 withLuma:(float)arg3;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (void)cleanUpTextures;
- (void)setupBuffers;
- (void)setupGL;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

