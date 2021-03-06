//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MDLocalDNSService-Protocol.h"

@class MDThreadSafeDictionary, NSDictionary, NSString;

@interface MDLocalDNSServiceIMP : NSObject <MDLocalDNSService>
{
    NSDictionary *_backupDic;
    MDThreadSafeDictionary *_portsMap;
}

@property(retain, nonatomic) MDThreadSafeDictionary *portsMap; // @synthesize portsMap=_portsMap;
@property(retain, nonatomic) NSDictionary *backupDic; // @synthesize backupDic=_backupDic;
- (void).cxx_destruct;
- (id)modelFromIDCOrCDNArray:(id)arg1 hostName:(id)arg2;
- (void)setupBackupDic;
- (id)apPorts;
- (void)registerPorts:(id)arg1 forHost:(id)arg2;
- (id)backupModelForHost:(id)arg1;
- (id)defaultModelForHost:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

