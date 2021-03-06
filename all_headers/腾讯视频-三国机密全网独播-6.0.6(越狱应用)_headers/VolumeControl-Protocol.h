//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ServiceSubscription;
@protocol VolumeControl;

@protocol VolumeControl <NSObject>
- (ServiceSubscription *)subscribeMuteWithSuccess:(void (^)(_Bool))arg1 failure:(void (^)(NSError *))arg2;
- (void)setMute:(_Bool)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)getMuteWithSuccess:(void (^)(_Bool))arg1 failure:(void (^)(NSError *))arg2;
- (ServiceSubscription *)subscribeVolumeWithSuccess:(void (^)(float))arg1 failure:(void (^)(NSError *))arg2;
- (void)setVolume:(float)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)getVolumeWithSuccess:(void (^)(float))arg1 failure:(void (^)(NSError *))arg2;
- (void)volumeDownWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)volumeUpWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (int)volumeControlPriority;
- (id <VolumeControl>)volumeControl;
@end

