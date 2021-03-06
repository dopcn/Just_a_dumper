//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, RMXNetworkHostMeta;

@interface RMXNetworkHostModel : NSObject
{
    long long _hostType;
    RMXNetworkHostMeta *_remixHost;
    RMXNetworkHostMeta *_withdrawHost;
    RMXNetworkHostMeta *_liveKitHost;
    RMXNetworkHostMeta *_remixPayHost;
    RMXNetworkHostMeta *_qbIAPPayHost;
    RMXNetworkHostMeta *_qbzfbWXPayHost;
}

+ (id)modelWithRemixHost:(id)arg1 withdrawHost:(id)arg2 liveKitHost:(id)arg3 remixPayHost:(id)arg4 qbIAPPayHost:(id)arg5 qbzfbWXPayHost:(id)arg6 hostType:(long long)arg7;
@property(retain, nonatomic) RMXNetworkHostMeta *qbzfbWXPayHost; // @synthesize qbzfbWXPayHost=_qbzfbWXPayHost;
@property(retain, nonatomic) RMXNetworkHostMeta *qbIAPPayHost; // @synthesize qbIAPPayHost=_qbIAPPayHost;
@property(retain, nonatomic) RMXNetworkHostMeta *remixPayHost; // @synthesize remixPayHost=_remixPayHost;
@property(retain, nonatomic) RMXNetworkHostMeta *liveKitHost; // @synthesize liveKitHost=_liveKitHost;
@property(retain, nonatomic) RMXNetworkHostMeta *withdrawHost; // @synthesize withdrawHost=_withdrawHost;
@property(retain, nonatomic) RMXNetworkHostMeta *remixHost; // @synthesize remixHost=_remixHost;
@property(nonatomic) long long hostType; // @synthesize hostType=_hostType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *descTitle;
- (void)dealloc;

@end

