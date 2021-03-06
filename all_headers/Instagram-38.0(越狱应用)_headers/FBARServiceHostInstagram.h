//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBARServiceHostBase.h"

#import "FBARAudioServiceHosting-Protocol.h"
#import "FBARAudioServiceOutputDelegate-Protocol.h"
#import "FBARCaptureEventServiceHosting-Protocol.h"
#import "FBARGestureEventServiceHosting-Protocol.h"
#import "FBARServiceConfigurationProvider-Protocol.h"

@class FBARCaptureEventService, FBARGestureEventService, FBARLogger, FBARServiceHostEffect, NSString;
@protocol FBARAnalyticsLogging, FBARAudioServiceHostingAudioOutput, FBAROpenGLTextureCreating;

@interface FBARServiceHostInstagram : FBARServiceHostBase <FBARAudioServiceOutputDelegate, FBARServiceConfigurationProvider, FBARGestureEventServiceHosting, FBARCaptureEventServiceHosting, FBARAudioServiceHosting>
{
    struct shared_ptr<facebook::arservices::apple::CaptureEventServiceCreator> _captureEventServiceCreator;
    struct shared_ptr<facebook::arservices::apple::GestureEventServiceCreator> _gestureEventServiceCreator;
    struct shared_ptr<facebook::arservices::apple::AudioServiceCreator> _audioServiceCreator;
    id <FBARAudioServiceHostingAudioOutput> _audioOutput;
}

@property(nonatomic) __weak id <FBARAudioServiceHostingAudioOutput> audioOutput; // @synthesize audioOutput=_audioOutput;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioRecordingDidStop;
- (void)audioRecordingDidStart;
- (void)audioService:(id)arg1 didRenderAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)updateAudioServicesWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 volumeLevel:(float)arg2;
@property(readonly, nonatomic) FBARCaptureEventService *captureEventService;
@property(readonly, nonatomic) FBARGestureEventService *gestureEventService;
- (void)didFinishRenderingFrame;
- (void)prepareServicesForEffect:(id)arg1;
- (id)configurationForServiceType:(const struct ServiceType *)arg1;
- (struct ServiceCreatorRegistry)newServiceCreatorRegistry;

// Remaining properties
@property(readonly, nonatomic) id <FBARAnalyticsLogging> analyticsLogger;
@property(readonly, nonatomic) FBARServiceHostEffect *currentEffect;
@property(readonly, nonatomic) id <FBAROpenGLTextureCreating> currentGLTextureCreator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct IServiceHost *engineServiceHost;
@property(readonly, nonatomic) shared_ref_5cdfb9eb experimentConfig;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) FBARLogger *logger;
@property(nonatomic) unsigned char optimizationMode;
@property(readonly, nonatomic) shared_ptr_2811b282 performanceLogger;
@property(readonly, nonatomic) Optional_d380e77e renderTimeLogger;
@property(readonly) Class superclass;

@end

