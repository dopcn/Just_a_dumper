//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISSPlatform-Protocol.h"

@class NSString, SSQZoneAppManager;

@interface QZoneConnection : NSObject <ISSPlatform>
{
    int _type;
    SSQZoneAppManager *_appManager;
}

- (id)registeredApps;
- (id)appForKey:(id)arg1;
- (void)unregisterApp:(id)arg1;
- (_Bool)hasRegisteredWithAppInfo:(id)arg1;
- (id)registerAppWithAccount:(id)arg1 appInfo:(id)arg2;
- (void)setCurrentApp:(id)arg1;
- (id)currentApp;
- (int)type;
- (id)name;
- (id)initWithType:(int)arg1;
- (id)appInfoWithAppKey:(id)arg1 appId:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

