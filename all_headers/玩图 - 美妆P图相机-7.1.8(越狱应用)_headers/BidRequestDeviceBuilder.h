//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class BidRequestDevice;

@interface BidRequestDeviceBuilder : PBGeneratedMessageBuilder
{
    BidRequestDevice *resultDevice;
}

@property(retain) BidRequestDevice *resultDevice; // @synthesize resultDevice;
- (void).cxx_destruct;
- (id)clearMac;
- (id)setMac:(id)arg1;
- (id)mac;
- (_Bool)hasMac;
- (id)clearConnType;
- (id)setConnType:(int)arg1;
- (int)connType;
- (_Bool)hasConnType;
- (id)clearLanguage;
- (id)setLanguage:(id)arg1;
- (id)language;
- (_Bool)hasLanguage;
- (id)clearIp;
- (id)setIp:(id)arg1;
- (id)ip;
- (_Bool)hasIp;
- (id)clearUa;
- (id)setUa:(id)arg1;
- (id)ua;
- (_Bool)hasUa;
- (id)clearModel;
- (id)setModel:(id)arg1;
- (id)model;
- (_Bool)hasModel;
- (id)clearVendor;
- (id)setVendor:(id)arg1;
- (id)vendor;
- (_Bool)hasVendor;
- (id)clearOsVersion;
- (id)setOsVersion:(id)arg1;
- (id)osVersion;
- (_Bool)hasOsVersion;
- (id)clearOs;
- (id)setOs:(int)arg1;
- (int)os;
- (_Bool)hasOs;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (id)clearDid;
- (id)setDid:(id)arg1;
- (id)did;
- (_Bool)hasDid;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

