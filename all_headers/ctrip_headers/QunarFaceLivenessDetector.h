//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "MGLivenessProtocolDelegate-Protocol.h"
#import "QCFaceNetDelgt-Protocol.h"

@class AVAudioPlayer, AVCaptureConnection, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, CMMotionManager, MGFaceQualityManager, MGLivenessDetector, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, QCFaceParam;
@protocol QunarFaceLivenessDetectorDelegate;

@interface QunarFaceLivenessDetector : NSObject <QCFaceNetDelgt, MGLivenessProtocolDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVAudioPlayerDelegate>
{
    _Bool _canDetectImage;
    _Bool _beginLiveFace;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    id <QunarFaceLivenessDetectorDelegate> _delegate;
    MGFaceQualityManager *_qualityManager;
    MGLivenessDetector *_livenessDetector;
    CMMotionManager *_motionManager;
    AVAudioPlayer *_audioPlayer;
    double _motionY;
    NSMutableArray *_tempArray;
    NSArray *_errorArray;
    long long _step;
    NSArray *_steps;
    double _brightness;
    QCFaceParam *_param;
    long long _countDownCount;
    NSDictionary *_typeTitle;
    AVCaptureSession *_session;
    AVCaptureConnection *_connection;
    AVCaptureDeviceInput *_deviceInput;
    NSTimer *_timer;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSDictionary *typeTitle; // @synthesize typeTitle=_typeTitle;
@property(nonatomic) long long countDownCount; // @synthesize countDownCount=_countDownCount;
@property(nonatomic) _Bool beginLiveFace; // @synthesize beginLiveFace=_beginLiveFace;
@property(retain, nonatomic) QCFaceParam *param; // @synthesize param=_param;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) _Bool canDetectImage; // @synthesize canDetectImage=_canDetectImage;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSArray *errorArray; // @synthesize errorArray=_errorArray;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
@property(nonatomic) double motionY; // @synthesize motionY=_motionY;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) MGLivenessDetector *livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(retain, nonatomic) MGFaceQualityManager *qualityManager; // @synthesize qualityManager=_qualityManager;
@property(nonatomic) id <QunarFaceLivenessDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
- (void).cxx_destruct;
- (long long)getImageOrientation;
- (long long)getVideoOrietation;
- (double)getMotionYWithAccelerometerData:(id)arg1;
- (void)playSoundForType:(int)arg1 next:(_Bool)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)backStepTypeMessageWithStep:(unsigned long long)arg1;
- (void)backMGFrameMessage:(id)arg1;
- (void)backToDelegate:(id)arg1;
- (void)removeResource;
- (id)errprStringWithType:(long long)arg1;
- (id)getMaxType:(id)arg1;
- (id)checkImgWithMGFrame:(id)arg1 motionY:(double)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getQCFaceNetBack:(id)arg1 forInfo:(id)arg2;
- (void)beginNetForLiveness:(id)arg1 failedType:(long long)arg2;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (void)onDetectionFailed:(int)arg1;
- (int)onDetectionSuccess:(id)arg1;
- (void)changeScreenRotate;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActiveNoti;
- (void)changeCountDown;
- (void)startCountDown;
- (void)resetScreenBrightness;
- (void)setScreenBrigttness;
- (void)beginLiveness;
- (void)qnpinitSession;
- (void)initLivenessDetector;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopDetector;
- (id)initQunarFaceLivenessDector:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

