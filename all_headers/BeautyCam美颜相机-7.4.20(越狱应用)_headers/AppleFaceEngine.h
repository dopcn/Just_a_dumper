//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "MTFaceEngineProtocol-Protocol.h"

@class AVCaptureMetadataOutput, NSArray, NSString;
@protocol MTFaceDetectorDelegate, OS_dispatch_queue;

@interface AppleFaceEngine : NSObject <AVCaptureMetadataOutputObjectsDelegate, MTFaceEngineProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_features;
    _Bool _isFaceDetecting;
    _Bool _isNowHasFace;
    _Bool _useBuildinFD;
    _Bool _faceDetectEnable;
    _Bool _faceLightDetectorEnable;
    _Bool _faceSkinColorDetectorEnable;
    _Bool _faceAngleDetectorEnable;
    _Bool _genderDetectEnable;
    id <MTFaceDetectorDelegate> _faceDetectorDelegate;
    AVCaptureMetadataOutput *_metaDataOutput;
}

+ (unsigned char)imageProcessWithAverageThread:(char *)arg1 width:(int)arg2 height:(int)arg3 faceRect:(struct CGRect)arg4;
@property(retain, nonatomic) AVCaptureMetadataOutput *metaDataOutput; // @synthesize metaDataOutput=_metaDataOutput;
@property(nonatomic) _Bool genderDetectEnable; // @synthesize genderDetectEnable=_genderDetectEnable;
@property(nonatomic) _Bool faceAngleDetectorEnable; // @synthesize faceAngleDetectorEnable=_faceAngleDetectorEnable;
@property(nonatomic) _Bool faceSkinColorDetectorEnable; // @synthesize faceSkinColorDetectorEnable=_faceSkinColorDetectorEnable;
@property(nonatomic) _Bool faceLightDetectorEnable; // @synthesize faceLightDetectorEnable=_faceLightDetectorEnable;
@property(nonatomic) _Bool faceDetectEnable; // @synthesize faceDetectEnable=_faceDetectEnable;
@property(nonatomic) _Bool useBuildinFD; // @synthesize useBuildinFD=_useBuildinFD;
@property(nonatomic) __weak id <MTFaceDetectorDelegate> faceDetectorDelegate; // @synthesize faceDetectorDelegate=_faceDetectorDelegate;
- (void).cxx_destruct;
- (void)resetFaceLightDetectSkipFrame;
- (void)clearDetectOldData;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id)transFaceObject:(id)arg1;
- (struct CGRect)reductionFaceRect:(struct CGRect)arg1;
- (void)imageProcessWithSkinAverageThread:(char *)arg1 UVData:(char *)arg2 width:(int)arg3 height:(int)arg4 faceRect:(struct CGRect)arg5 skinValues:(char *)arg6;
- (struct CGRect)realFaceRect:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)faceSkinColorDetect:(char *)arg1 UVPlaneAddress:(char *)arg2 width:(int)arg3 height:(int)arg4 faceInfos:(id)arg5;
- (void)faceLightDetect:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 faceInfos:(id)arg5;
- (void)detectSamplebuffer:(struct opaqueCMSampleBuffer *)arg1 withOrientation:(long long)arg2 isFrontCamera:(_Bool)arg3;
- (id)checkFaceDetectResult:(id)arg1;
- (void)createSerialQueueifNeed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool eyeBlinkDetectorEnable;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

