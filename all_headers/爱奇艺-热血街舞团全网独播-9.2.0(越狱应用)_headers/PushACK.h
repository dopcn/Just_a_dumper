//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QYUniversalFramework/GPBMessage.h>

@class NSString;

@interface PushACK : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceid; // @dynamic deviceid;
@property(nonatomic) _Bool hasDeviceid; // @dynamic hasDeviceid;
@property(nonatomic) _Bool hasIPushToken; // @dynamic hasIPushToken;
@property(nonatomic) _Bool hasPushid; // @dynamic hasPushid;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(copy, nonatomic) NSString *iPushToken; // @dynamic iPushToken;
@property(nonatomic) long long pushid; // @dynamic pushid;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end

