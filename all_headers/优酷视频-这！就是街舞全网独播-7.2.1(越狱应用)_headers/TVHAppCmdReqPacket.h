//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TVHAppCmdReqPacket : NSObject
{
    long long _packetId;
    long long _requestId;
}

@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) long long packetId; // @synthesize packetId=_packetId;
- (id)encode:(id)arg1;
- (id)initWithRequestId:(long long)arg1 requestId:(long long)arg2;
- (id)initWithPacketId:(long long)arg1;

@end

