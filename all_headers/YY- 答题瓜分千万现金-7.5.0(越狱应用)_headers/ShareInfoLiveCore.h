//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCore.h"

#import "IShareInfoLiveCore-Protocol.h"

@class NSString, YYHttpClient;

@interface ShareInfoLiveCore : BaseCore <IShareInfoLiveCore>
{
    YYHttpClient *_httpClient;
}

@property(retain, nonatomic) YYHttpClient *httpClient; // @synthesize httpClient=_httpClient;
- (void).cxx_destruct;
- (id)configurationList;
- (id)configurableDescription;
- (id)configurableName;
- (id)configurableKey;
- (void)requestShareTinyVideoResultStatusWithSid:(id)arg1 ssid:(id)arg2 anchorUID:(long long)arg3 timestamp:(double)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)getChannelShareUrlWithUid:(long long)arg1 topSid:(unsigned int)arg2 subSid:(unsigned int)arg3 timestamp:(double)arg4 sharedKey:(id)arg5;
- (id)getChannelShareUrlWithUid:(long long)arg1 topSid:(unsigned int)arg2 subSid:(unsigned int)arg3 timestamp:(double)arg4 pid:(id)arg5;
- (id)getChannelShareUrlWithUid:(long long)arg1 topSid:(unsigned int)arg2 subSid:(unsigned int)arg3 timestamp:(double)arg4;
- (id)getChannelShareUrl;
- (void)requestShareInfoLiveChannelId:(id)arg1 subChannelId:(id)arg2 anchorId:(long long)arg3 template:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

