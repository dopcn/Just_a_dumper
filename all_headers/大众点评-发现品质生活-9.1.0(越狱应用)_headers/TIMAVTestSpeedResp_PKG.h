//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMAVRespSerialization-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface TIMAVTestSpeedResp_PKG : NSObject <TIMAVRespSerialization>
{
    unsigned char _cTaskType;
    unsigned char _cClientIsp;
    unsigned char _cTracert;
    unsigned char _cInterfaceNum;
    unsigned short _wClientCountryId;
    unsigned short _wClientProvinceId;
    unsigned short _wReverseLen;
    unsigned short _wReserve;
    unsigned int _dwClientIp;
    unsigned int _dwInterval;
    unsigned int _dwTimeOut;
    unsigned int _dwSendPkgNum;
    unsigned int _dwPkgLen;
    NSData *_buffPkg;
    NSMutableArray *_interfaceMachines;
    NSData *_buffReverse;
}

+ (id)serializedFrom:(id)arg1;
@property(nonatomic) unsigned short wReserve; // @synthesize wReserve=_wReserve;
@property(retain, nonatomic) NSData *buffReverse; // @synthesize buffReverse=_buffReverse;
@property(nonatomic) unsigned short wReverseLen; // @synthesize wReverseLen=_wReverseLen;
@property(retain, nonatomic) NSMutableArray *interfaceMachines; // @synthesize interfaceMachines=_interfaceMachines;
@property(nonatomic) unsigned char cInterfaceNum; // @synthesize cInterfaceNum=_cInterfaceNum;
@property(nonatomic) unsigned char cTracert; // @synthesize cTracert=_cTracert;
@property(retain, nonatomic) NSData *buffPkg; // @synthesize buffPkg=_buffPkg;
@property(nonatomic) unsigned int dwPkgLen; // @synthesize dwPkgLen=_dwPkgLen;
@property(nonatomic) unsigned int dwSendPkgNum; // @synthesize dwSendPkgNum=_dwSendPkgNum;
@property(nonatomic) unsigned int dwTimeOut; // @synthesize dwTimeOut=_dwTimeOut;
@property(nonatomic) unsigned int dwInterval; // @synthesize dwInterval=_dwInterval;
@property(nonatomic) unsigned short wClientProvinceId; // @synthesize wClientProvinceId=_wClientProvinceId;
@property(nonatomic) unsigned short wClientCountryId; // @synthesize wClientCountryId=_wClientCountryId;
@property(nonatomic) unsigned char cClientIsp; // @synthesize cClientIsp=_cClientIsp;
@property(nonatomic) unsigned int dwClientIp; // @synthesize dwClientIp=_dwClientIp;
@property(nonatomic) unsigned char cTaskType; // @synthesize cTaskType=_cTaskType;
- (void).cxx_destruct;
- (void)statisticalSpeedResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

