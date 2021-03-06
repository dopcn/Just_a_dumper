//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OsInfo : NSObject
{
    int m_deviceType;
    NSString *m_deviceDescription;
    _Bool m_bNetOk;
    _Bool m_bHttpOk;
    _Bool m_bGPRS;
    _Bool m_bConnectting;
    _Bool m_bIsReachable;
    _Bool m_bFirstOpenEdgeFail;
    NSString *m_strInfo;
    int m_nNetWorkType;
    int m_nOperatorType;
    int m_nWaitForEdgeCounter;
}

+ (id)create;
- (void).cxx_destruct;
- (_Bool)isCanSendSMS;
- (id)getDeviceDescription;
- (void)detectDevice;
- (_Bool)isiPhoneDevice;
- (id)getOsDevieInfo;
- (void)showOpenEdgeTips;
- (void)showOpenEdgeTip;
- (void)openEDGE;
- (void)openEdgeInMainThread;
- (void)waitForEdgeBecomeActivity;
- (_Bool)isEdgeOpen;
- (void)setEdgeStateChanged:(_Bool)arg1;
- (void)resetWaitForEdgeCounter;
- (void)reSetConnectType;
- (void)setHttpConnect;
- (_Bool)isWap;
- (_Bool)isNet;
- (void)uploadNetTypeToCBAS;
- (void)setNetWorkInfoType:(int)arg1;
- (int)getNetWorkConnectType;
- (int)getNetworkInfo;
- (void)setNetworkInfo:(_Bool)arg1;
- (_Bool)isReachable;
- (_Bool)isConnectting;
- (_Bool)isGPRS;
- (void)checkNet;
- (void)checkDevice;
- (void)dealloc;
- (void)initidleTimerDisabled;
- (void)initObject;

@end

