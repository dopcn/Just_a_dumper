//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBaseRequest.h"

#import "SNRequestProtocol-Protocol.h"

@class NSString;

@interface SNUserSettingRequest : SNBaseRequest <SNRequestProtocol>
{
    unsigned long long _userSettingModeType;
}

@property(nonatomic) unsigned long long userSettingModeType; // @synthesize userSettingModeType=_userSettingModeType;
- (id)sn_parameters;
- (id)sn_requestUrl;
- (id)sn_baseUrl;
- (long long)sn_responseType;
- (long long)sn_requestMethod;
- (id)initWithUserSettingMode:(unsigned long long)arg1 andModeString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

