//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZModel.h"

@class NSString;

@interface VBLocalBoxUDP : CDZModel
{
    unsigned short _port;
    NSString *_vboxid;
    NSString *_sn;
    NSString *_type;
    NSString *_userid;
    NSString *_ip;
    NSString *_ssid;
    NSString *_bssid;
    double _allocTime;
}

+ (id)keyForProperty:(id)arg1;
@property(nonatomic) double allocTime; // @synthesize allocTime=_allocTime;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(retain, nonatomic) NSString *vboxid; // @synthesize vboxid=_vboxid;
- (void).cxx_destruct;
- (id)vboxClass;
- (double)liveTime;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)uniqueCode;

@end

