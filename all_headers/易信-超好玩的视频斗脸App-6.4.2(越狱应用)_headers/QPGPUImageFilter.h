//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPGPUImageOutput.h"

#import "GPUImageInput-Protocol.h"

@class NSMutableDictionary, NSString, QPGLProgram;

@interface QPGPUImageFilter : QPGPUImageOutput <GPUImageInput>
{
    unsigned int filterSourceTexture;
    unsigned int filterFramebuffer;
    QPGLProgram *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    _Bool preparedToCaptureImage;
    struct __CVOpenGLESTextureCache *filterTextureCache;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    struct CGSize currentFilterSize;
    int inputRotation;
    _Bool currentlyReceivingMonochromeInput;
    NSMutableDictionary *uniformStateRestorationBlocks;
    _Bool _preventRendering;
}

+ (const float *)textureCoordinatesForRotation:(int)arg1;
@property(nonatomic) _Bool currentlyReceivingMonochromeInput; // @synthesize currentlyReceivingMonochromeInput;
@property(nonatomic) _Bool preventRendering; // @synthesize preventRendering=_preventRendering;
@property(readonly) struct __CVBuffer *renderTarget; // @synthesize renderTarget;
- (void).cxx_destruct;
- (_Bool)wantsMonochromeInput;
- (void)conserveMemoryForNextFrame;
- (void)setTextureDelegate:(id)arg1 atIndex:(long long)arg2;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)deleteOutputTexture;
- (void)cleanupOutputImage;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (struct CGPoint)rotatedPoint:(struct CGPoint)arg1 forRotation:(int)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)recreateFilterFBO;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(CDUnknownBlockType)arg3;
- (void)setInteger:(int)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(int)arg3 program:(id)arg4;
- (void)setVec4:(struct QPGPUVector4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setVec3:(struct QPGPUVector3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setSize:(struct CGSize)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setPoint:(struct CGPoint)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloat:(float)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setMatrix4f:(struct QPGPUMatrix4x4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setMatrix3f:(struct QPGPUMatrix3x3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(id)arg3;
- (void)setFloatVec4:(struct QPGPUVector4)arg1 forUniform:(id)arg2;
- (void)setFloatVec3:(struct QPGPUVector3)arg1 forUniformName:(id)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUniformName:(id)arg2;
- (void)setSize:(struct CGSize)arg1 forUniformName:(id)arg2;
- (void)setFloat:(float)arg1 forUniformName:(id)arg2;
- (void)setInteger:(int)arg1 forUniformName:(id)arg2;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)prepareForImageCapture;
- (struct CGSize)outputFrameSize;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (void)releaseInputTexturesIfNeeded;
- (void)setOutputFBO;
- (void)setFilterFBO;
- (void)destroyFilterFBO;
- (void)createFilterFBOofSize:(struct CGSize)arg1;
- (struct CGSize)sizeOfFBO;
- (struct CGImage *)newCGImageByFilteringCGImage:(struct CGImage *)arg1 orientation:(long long)arg2;
- (struct CGImage *)newCGImageByFilteringCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutputWithOrientation:(long long)arg1;
- (void)dealloc;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)initializeAttributes;
- (id)init;
- (id)initWithFragmentShaderFromFile:(id)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

