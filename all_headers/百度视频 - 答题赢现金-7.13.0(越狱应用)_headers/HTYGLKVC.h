//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, CMAttitude, CMMotionManager, EAGLContext, GLProgram, NSString;
@protocol HTYGLKVCDelegate;

@interface HTYGLKVC : GLKViewController <UIGestureRecognizerDelegate>
{
    union _GLKMatrix4 _modelViewProjectionMatrix;
    unsigned int _vertexArrayID;
    unsigned int _vertexBufferID;
    unsigned int _vertexIndicesBufferID;
    unsigned int _vertexTexCoordID;
    unsigned int _vertexTexCoordAttributeIndex;
    float _fingerRotationX;
    float _fingerRotationY;
    float _savedGyroRotationX;
    float _savedGyroRotationY;
    double _overture;
    int _numIndices;
    CMMotionManager *_motionManager;
    CMAttitude *_referenceAttitude;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    const float *_preferredConversion;
    _Bool _isUsingMotion;
    id <HTYGLKVCDelegate> _HTYDelegate;
    EAGLContext *_context;
    GLProgram *_program;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) GLProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) _Bool isUsingMotion; // @synthesize isUsingMotion=_isUsingMotion;
@property(nonatomic) __weak id <HTYGLKVCDelegate> HTYDelegate; // @synthesize HTYDelegate=_HTYDelegate;
- (void).cxx_destruct;
- (void)resetCamera;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)buildProgram;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)update;
- (_Bool)isPortrait;
- (_Bool)isLandscapeOrFlat;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
- (void)cleanUpTextures;
- (void)tearDownGL;
- (void)setupGL;
- (void)stopRender;
- (void)startRender;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)render:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

