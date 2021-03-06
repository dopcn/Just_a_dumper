//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYYResponse-Protocol.h"

@class NSData, NSString;

@interface AntiPushToClient : NSObject <IYYResponse>
{
    unsigned int _ip;
    unsigned int _timestamp;
    long long _userId;
    NSString *_clientFrom;
    NSString *_serviceName;
    NSData *_data;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)uri;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *clientFrom; // @synthesize clientFrom=_clientFrom;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int ip; // @synthesize ip=_ip;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

