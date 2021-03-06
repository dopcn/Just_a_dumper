//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WnsCarrierInfo;

@interface WnsNetworkHelper : NSObject
{
    NSMutableDictionary *_wwanDict;
    WnsCarrierInfo *_carrierInfo;
}

+ (long long)getNetworkReachable;
+ (long long)getNetworkType;
+ (id)sharedInstance;
@property(retain) WnsCarrierInfo *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
- (void).cxx_destruct;
- (long long)getWWANCarrierTypeWithClientInfo;
- (id)getLocalUserIP;
- (id)getLocalDNS;
- (long long)getWWANType;
- (id)getCarrierName;
- (id)getMNC;
- (long long)getCarrierType;
- (long long)getWiFiCarrierType;
- (long long)getWifiCarrierType:(id)arg1;
- (long long)carrierStringToType:(id)arg1;
- (id)doGetCurrentRadioAccessTechnology:(id)arg1;
- (id)doGetcarrierName:(id)arg1;
- (id)doGetMNC:(id)arg1;
- (long long)doGetCarrierType:(id)arg1;
- (void)updateAsyncCarrierInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)updateCarrierInfo;
- (void)notifyNetworkAbilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initWWANDict;

@end

