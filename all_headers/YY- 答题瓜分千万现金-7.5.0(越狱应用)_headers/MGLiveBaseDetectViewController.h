//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MGLiveDetectionDelegate-Protocol.h"
#import "MGVideoDelegate-Protocol.h"

@class AVCaptureVideoPreviewLayer, MGLiveDetectionManager, MGVideoManager, NSString;

@interface MGLiveBaseDetectViewController : UIViewController <MGLiveDetectionDelegate, MGVideoDelegate>
{
    int _actionType;
    MGVideoManager *_videoManager;
    MGLiveDetectionManager *_liveManager;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSString *_videoPathStr;
    long long _currentActionIndex;
}

@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(retain, nonatomic) NSString *videoPathStr; // @synthesize videoPathStr=_videoPathStr;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) MGLiveDetectionManager *liveManager; // @synthesize liveManager=_liveManager;
@property(retain, nonatomic) MGVideoManager *videoManager; // @synthesize videoManager=_videoManager;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)detectionManagerSucessLiveDetection:(id)arg1 liveDetectionType:(long long)arg2;
- (void)detectionManager:(id)arg1 checkError:(id)arg2;
- (void)detectionManager:(id)arg1 liveChangeAction:(int)arg2 timeOut:(unsigned long long)arg3 currentActionStep:(unsigned long long)arg4;
- (void)detectionManager:(id)arg1 finishWithError:(int)arg2;
- (void)detectionManager:(id)arg1 frameWithImage:(id)arg2;
- (void)detectionManager:(id)arg1 finishWithStep:(long long)arg2;
- (void)MGCaptureOutput:(id)arg1 error:(long long)arg2;
- (void)MGCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)liveDetectionFinishQuality;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(long long)arg3 videoPath:(id)arg4;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(long long)arg3;
- (void)startLiveError:(long long)arg1;
- (void)qualitayErrorMessage:(id)arg1;
- (void)starAnimation:(int)arg1 step:(long long)arg2 timeOut:(unsigned long long)arg3;
- (void)liveDetectionFinishAction:(int)arg1 index:(long long)arg2 success:(_Bool)arg3 errorType:(int)arg4;
- (void)liveFaceDetection;
- (void)cancelDetect;
- (void)stopVideoWriter;
- (void)willStatLiveness;
- (void)userLockORBackHome:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)defaultSetting;
- (id)initWithDefauleSetting;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

