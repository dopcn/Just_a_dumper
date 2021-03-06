//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDBLECommandFactory : NSObject
{
}

+ (id)verifyDeviceBootCommand:(id)arg1;
+ (id)startDeviceBootCommandAutomaticalResponse:(id)arg1;
+ (id)startDeviceBootCommand:(id)arg1 frameIndex:(long long)arg2;
+ (id)connectDeviceBootLoaderCommand;
+ (id)tryDeviceBootLoaderCommand;
+ (id)bleMakeFriendRemindCommand;
+ (id)bleMakeFriendRequestCommand;
+ (id)deviceClearDataCommand;
+ (id)deviceSyncFrameCommand:(long long)arg1;
+ (id)deviceSyncFrameCountCommand;
+ (id)setDeviceDateCommand;
+ (id)setUserDeviceSettingInfoCommand:(id)arg1;
+ (id)setUserInfoCommand;
+ (id)getUserDeviceSettingInfoCommand;
+ (id)getDeviceIDCommand;
+ (id)getDeviceTypeAndVersionCommand;
+ (id)bindRemindDeviceCommand;

@end

