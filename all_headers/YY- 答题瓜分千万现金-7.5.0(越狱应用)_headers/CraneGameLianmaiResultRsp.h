//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EntNetworkBaseObject.h"

#import "IEntResultResponse-Protocol.h"

@class NSDictionary, NSString;

@interface CraneGameLianmaiResultRsp : EntNetworkBaseObject <IEntResultResponse>
{
    long long _result;
    NSString *_msg;
    NSDictionary *_extendInfo;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

