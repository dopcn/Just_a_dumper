//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSMutableArray, NativeImageInfoiOS, TaskQueue;
@protocol OS_dispatch_semaphore;

@interface MUControl : NSObject
{
    EAGLContext *_context;
    unsigned int m_OrigTextureID;
    unsigned int m_BeautifyTextureID;
    unsigned int m_pShowTextureID;
    unsigned int m_pTempTextureID;
    struct CMakingUpEffects m_makingUpEffects;
    int _nWidth;
    int _nHeight;
    _Bool m_BeautySwitch[8];
    TaskQueue *_contextQueue;
    _Bool _bOverSeaVersion;
    _Bool _isLowLight;
    int _nFilterAlpha;
    int _nBeautyAlpha;
    int _EffectID;
    _Bool _MeiXing;
    _Bool _isModle;
    NSMutableArray *_selectedFaceIndexs;
    struct CParsingPlist _ParsingPlist;
    _Bool _isBokehProcess;
    NSObject<OS_dispatch_semaphore> *_seampthore;
    _Bool _hasProcessHairDrawing;
    NativeImageInfoiOS *_nativeImageInfo;
}

+ (id)sharedControl;
@property(retain, nonatomic) NativeImageInfoiOS *nativeImageInfo; // @synthesize nativeImageInfo=_nativeImageInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setExtendMateriaBundlePath:(id)arg1;
- (void)setLutNumber:(int)arg1;
- (void)SetFaceDecorateDegree:(int)arg1 degree:(float)arg2;
- (void)SetFaceDecoratePoint:(int)arg1 point:(struct CGPoint)arg2;
- (struct CGPoint)GetFaceDecoratePoint:(int)arg1 isOral:(_Bool)arg2;
- (_Bool)CheckCurrentHavePart:(int *)arg1 typecount:(int)arg2 faceindex:(int)arg3;
- (void)getAlterEyePupil:(struct CGPoint *)arg1 faceIndex:(int)arg2;
- (void)setAlterEyePupil:(struct CGPoint *)arg1 faceIndex:(int)arg2;
- (void)eraserMixMaskImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)getFundationImage:(CDUnknownBlockType)arg1;
- (_Bool)getReslustImage:(CDUnknownBlockType)arg1;
- (_Bool)getResultImage:(CDUnknownBlockType)arg1 needSharp:(_Bool)arg2;
- (void)setWaterMarkPath:(id)arg1;
- (_Bool)isWatermark;
- (void)setMakeupLanguage:(int)arg1;
- (unsigned char)ImageProcessWithAverageThread:(char *)arg1 width:(int)arg2 height:(int)arg3 faceRect:(struct CGRect)arg4 pixelTotal:(unsigned long long)arg5;
- (_Bool)isLowLight;
- (id)getAllFaceRect;
- (struct CGRect)getFaceMaxRect;
- (void)get106LandmarkPoint:(struct CGPoint *)arg1 faceIndex:(int)arg2;
- (void)get83LandmarkPoint:(struct CGPoint *)arg1 faceIndex:(int)arg2;
- (void)set83LandmarkPoint:(struct CGPoint *)arg1 faceIndex:(int)arg2;
- (void)processWithBeautyPointManageAndcompletion:(CDUnknownBlockType)arg1;
- (void)processWithBeautyAlpha:(int)arg1 makingUpAlpha:(int)arg2 isFocusBlur:(_Bool)arg3 faceIndex:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)processHairDrawingAfterSkinBeauty:(CDUnknownBlockType)arg1 beautyAlpha:(int)arg2;
- (void)setBeautySwitch:(int)arg1 switchVal:(_Bool)arg2;
- (void)setMakingupFaceCheck:(id)arg1 faceIndex:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (int)setMakingUpDictionary:(id)arg1 path:(id)arg2 faceIndex:(id)arg3;
- (int)setMakingUpDictionary:(id)arg1 path:(id)arg2;
- (void)setMakingUpPacketPath:(id)arg1 faceIndex:(id)arg2;
- (void)setMakingUpPacketPath:(id)arg1;
- (int)getSuggestBeautyLevel;
- (void)setImage:(id)arg1 cosmParam:(id)arg2 hairMaskGray:(char *)arg3 faceBeautyVersion:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setImage:(id)arg1 cosmParam:(id)arg2 hairMaskGray:(char *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setImage:(id)arg1 cosmParam:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)stringWith83Point;
- (id)createBeautyConfig:(int)arg1 isAbroad:(_Bool)arg2 smartBodyBeauty:(_Bool)arg3;
- (void)removeTempQueue;
- (void)releaseMemory;
- (void)dealloc;
- (void)releaseMUControl;
- (void)deleteTexture:(unsigned int *)arg1;
- (void)deleteTextures;
- (_Bool)useAsCurrentContext;
- (void)glInit;
- (void)runasyncMUControlProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runsyncMUControlProcessingQueue:(CDUnknownBlockType)arg1;
- (id)init;

@end

