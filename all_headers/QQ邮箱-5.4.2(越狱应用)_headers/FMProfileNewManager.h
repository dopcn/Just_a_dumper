//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FMProfileNewManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
- (_Bool)isAccountNameIsGmail:(id)arg1;
- (id)getAccountByName:(id)arg1;
- (id)readAccount:(long long)arg1;
- (id)readSystemProxy;
- (id)getDefaultFMWebProxy:(id)arg1;
- (void)resetGmailErrorCount;
- (void)checkProxy:(id)arg1;
- (id)readWebProxy:(id)arg1;
- (_Bool)isGmailNeedProxy;
- (void)fillProfileProxy:(id)arg1;
- (id)getActiveSyncProfileDeviceId;
- (id)getProfile:(long long)arg1;

@end

