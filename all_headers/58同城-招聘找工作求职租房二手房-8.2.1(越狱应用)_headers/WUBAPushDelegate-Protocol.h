//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, WUBAPushMessage;

@protocol WUBAPushDelegate <NSObject>

@optional
- (void)pushDidBindVoipToken:(NSData *)arg1;
- (void)pushDidBindDeviceId:(NSString *)arg1;
- (void)pushDidBindToken:(NSData *)arg1;
- (void)pushOnError:(NSError *)arg1;
- (void)pushDidReceivedMessage:(WUBAPushMessage *)arg1;
@end

