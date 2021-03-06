//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GDTVAMonitorDataProtocol-Protocol.h"

@class GDTTrackingInfoService, GDTVAMonitorConfig, GDTViewabilityService, GDT_SDKConfig, GDT_TaskQueue, NSMutableDictionary, NSString, NSTimer;

@interface GDTMobileTracking : NSObject <GDTVAMonitorDataProtocol>
{
    _Bool _isTrackLocation;
    GDT_SDKConfig *_sdkConfig;
    NSString *_sdkConfigURL;
    GDT_TaskQueue *_sendQueue;
    GDT_TaskQueue *_failedQueue;
    GDTTrackingInfoService *_trackingInfoService;
    NSTimer *_failedQueueTimer;
    NSTimer *_sendQueueTimer;
    GDTVAMonitorConfig *_viewabilityConfig;
    GDTViewabilityService *_viewabilityService;
    NSMutableDictionary *_impressionDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *impressionDictionary; // @synthesize impressionDictionary=_impressionDictionary;
@property(retain, nonatomic) GDTViewabilityService *viewabilityService; // @synthesize viewabilityService=_viewabilityService;
@property(retain, nonatomic) GDTVAMonitorConfig *viewabilityConfig; // @synthesize viewabilityConfig=_viewabilityConfig;
@property(nonatomic) _Bool isTrackLocation; // @synthesize isTrackLocation=_isTrackLocation;
@property(retain, nonatomic) NSTimer *sendQueueTimer; // @synthesize sendQueueTimer=_sendQueueTimer;
@property(retain, nonatomic) NSTimer *failedQueueTimer; // @synthesize failedQueueTimer=_failedQueueTimer;
@property(retain, nonatomic) GDTTrackingInfoService *trackingInfoService; // @synthesize trackingInfoService=_trackingInfoService;
@property(retain, nonatomic) GDT_TaskQueue *failedQueue; // @synthesize failedQueue=_failedQueue;
@property(retain, nonatomic) GDT_TaskQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(retain, nonatomic) NSString *sdkConfigURL; // @synthesize sdkConfigURL=_sdkConfigURL;
@property(retain) GDT_SDKConfig *sdkConfig; // @synthesize sdkConfig=_sdkConfig;
- (void).cxx_destruct;
- (id)generateTrackingURL:(id)arg1 edid:(id)arg2;
- (void)pushTask:(id)arg1 edid:(id)arg2;
- (id)confirmCompany:(id)arg1;
- (void)filterURL:(id)arg1 edid:(id)arg2;
- (id)getValueFromUrl:(id)arg1 withCompany:(id)arg2 withArgumentKey:(id)arg3;
- (_Bool)isExitKey:(id)arg1 inURL:(id)arg2 withCompany:(id)arg3;
- (id)monitorHandleWithURL:(id)arg1 data:(id)arg2 redirectURL:(id)arg3;
- (id)handleImpressURL:(id)arg1 impression:(id)arg2 redirectURL:(id)arg3 additionKey:(_Bool)arg4;
- (void)monitor:(id)arg1 didReceiveData:(id)arg2 edid:(id)arg3;
- (void)view:(id)arg1 ad:(id)arg2 isVideo:(_Bool)arg3 videoPlayType:(long long)arg4 handleResult:(id)arg5 edid:(id)arg6;
- (void)stop:(id)arg1;
- (void)viewVideo:(id)arg1 ad:(id)arg2 videoPlayType:(long long)arg3 edid:(id)arg4;
- (id)vbFilterURL:(id)arg1 isForViewability:(_Bool)arg2 isVideo:(_Bool)arg3;
- (id)getAdIDForURL:(id)arg1;
- (_Bool)clearErrorList;
- (_Bool)clearAll;
- (void)enableLog:(_Bool)arg1;
- (void)didEnterForeground;
- (void)willTerminate;
- (void)didEnterBackground;
- (void)handleSendQueueTimer:(id)arg1;
- (void)handleFailedQueueTimer:(id)arg1;
- (void)initTimer;
- (void)initQueue;
- (void)initViewabilityService;
- (void)initSdkConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

