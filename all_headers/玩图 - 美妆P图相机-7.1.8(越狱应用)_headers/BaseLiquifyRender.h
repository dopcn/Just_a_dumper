//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BeautyGLProgram, GLFrameBufferToTexture;

@interface BaseLiquifyRender : NSObject
{
    BeautyGLProgram *shaderProgram;
    int frameBufferWidth;
    int frameBufferHeight;
    GLFrameBufferToTexture *framebuffer;
    float _mScale;
    float _mRadius;
    float _mCenterX;
    float _mCenterY;
}

@property(nonatomic) float mCenterY; // @synthesize mCenterY=_mCenterY;
@property(nonatomic) float mCenterX; // @synthesize mCenterX=_mCenterX;
@property(nonatomic) float mRadius; // @synthesize mRadius=_mRadius;
@property(nonatomic) float mScale; // @synthesize mScale=_mScale;
- (void)releaseRender;
- (void)dealloc;
- (void)drawFrame:(int)arg1;
- (void)setFrameBufferWidth:(int)arg1 height:(int)arg2;
- (id)getRenderTarget;
- (void)initRender;
- (id)init;

@end

