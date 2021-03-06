//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, RCTBridge, RNFPSUtils;

@interface RNPerfMonitor : NSObject
{
    CADisplayLink *_uiDisplayLink;
    CADisplayLink *_jsDisplayLink;
    RNFPSUtils *_uiFPSGraph;
    RNFPSUtils *_jsFPSGraph;
    RCTBridge *_bridge;
    double _uiFPS;
    double _jsFPS;
}

- (void).cxx_destruct;
- (id)performanceLoggerData:(id)arg1;
- (id)performanceInfoWithoutFPSWithBridge:(id)arg1;
- (id)performanceInfo;
- (void)threadUpdate:(id)arg1;
- (void)stopMonitor;
- (void)startMonitorWithBrige:(id)arg1;
- (id)init;

@end

