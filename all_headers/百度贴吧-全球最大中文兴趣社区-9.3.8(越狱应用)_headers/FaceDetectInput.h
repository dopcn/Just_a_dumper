//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LMGPUImageInput-Protocol.h"

@class LMGPUImageFramebuffer, LMShader, NSString;
@protocol FaceDetector, FaceRecognizeDelegate, OS_dispatch_queue;

@interface FaceDetectInput : NSObject <LMGPUImageInput>
{
    struct CGSize _inputSize;
    struct CGSize _actualFramebufferSize;
    LMGPUImageFramebuffer *_inputFramebuffer;
    LMShader *shader;
    unsigned int _vertexBuffer;
    unsigned int _indiceBuffer;
    LMGPUImageFramebuffer *_outputFramebuffer;
    id <FaceDetector> _faceDetector;
    double _maxSideLength;
    char *_detectData;
    unsigned long long _detectDataLen;
    _Bool _keepTracking;
    double _lastSamplingAngle;
    NSObject<OS_dispatch_queue> *_computeQueue;
    _Bool _computing;
    _Bool _enable;
    id <FaceRecognizeDelegate> _delegate;
}

@property(nonatomic) __weak id <FaceRecognizeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)enabled;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (long long)nextAvailableTextureIndex;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)dispatchExternalFaces:(struct lm_ext_faces *)arg1;
- (double)angleForFaceDetection:(long long)arg1;
- (void)computeData:(char *)arg1 w:(int)arg2 height:(int)arg3 stride:(int)arg4;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setupVBO;
- (void)dealloc;
- (id)initWithFaceDetector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

