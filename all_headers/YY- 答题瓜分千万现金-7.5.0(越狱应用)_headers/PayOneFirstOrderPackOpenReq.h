//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IEntRequest-Protocol.h"

@class NSDictionary, NSString;

@interface PayOneFirstOrderPackOpenReq : NSObject <IEntRequest>
{
    long long _orderId;
    long long _packId;
    long long _actId;
    NSDictionary *_extendInfo;
}

+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(nonatomic) long long actId; // @synthesize actId=_actId;
@property(nonatomic) long long packId; // @synthesize packId=_packId;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)marshall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

