//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol KWNetDriveManagerDelegate <NSObject>

@optional
- (void)cloudDriveDelegate:(id)arg1;
- (void)uploadCancel;
- (void)uploadFaild;
- (void)uploadFinish;
- (void)logoutFaild:(NSDictionary *)arg1;
- (void)cloudDriveLogoutSuccessed:(NSDictionary *)arg1;
- (void)loginFaild:(NSDictionary *)arg1;
- (void)loginSuccess:(NSDictionary *)arg1;
- (void)reloadDriveData;
@end

