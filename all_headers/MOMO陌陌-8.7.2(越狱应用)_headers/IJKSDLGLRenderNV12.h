//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IJKSDLGLRender-Protocol.h"

@interface IJKSDLGLRenderNV12 : NSObject <IJKSDLGLRender>
{
    int _uniform[1];
    int _uniformSamplers[2];
    unsigned int _textures[2];
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_cvTexturesRef[2];
}

- (void)dealloc;
- (_Bool)prepareDisplay;
- (void)render:(SDL_VoutOverlay_24269881 *)arg1;
- (void)resolveUniforms:(unsigned int)arg1;
- (id)fragmentShader;
- (_Bool)isValid;
- (id)initWithTextureCache:(struct __CVOpenGLESTextureCache *)arg1;

@end

