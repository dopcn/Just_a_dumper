//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NetConnectionConfig : NSObject
{
}

+ (_Bool)netParamConfigFrom:(int)arg1;
+ (id)sharedConfig;
- (_Bool)certTrustUseSSLPolicyOnly;
- (int)netReceiveBufferSize;
- (int)netConnectionTotalNum;
- (int)netConnectionNumPerHost;
- (_Bool)batmanEnabled;
- (_Bool)errPageHttpEnabled;
- (_Bool)netMaxConnDoubleEnabled;
- (_Bool)lentpEnabled;
- (_Bool)webpEnabled;
- (_Bool)switchNetLibOnFailedEnabled;
- (_Bool)bypassFirstImgEnabled;
- (_Bool)IODelayEnabled;
- (_Bool)lowPriorityCallEnabled;
- (_Bool)preConnectEnabled;
- (int)netConnectionType;
- (void)refreshNetParamConfig;
- (void)refreshNetParamConfigForce;
- (void)dealloc;
- (id)init;

@end

