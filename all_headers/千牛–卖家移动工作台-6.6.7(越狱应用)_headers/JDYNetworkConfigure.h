//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JDYNetworkConfigure : NSObject
{
    NSString *_JDY_NETWORK_TOP_API_URL;
    NSString *_JDY_NETWORK_YUN_GATEWAY_URL;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *JDY_NETWORK_YUN_GATEWAY_URL; // @synthesize JDY_NETWORK_YUN_GATEWAY_URL=_JDY_NETWORK_YUN_GATEWAY_URL;
@property(copy, nonatomic) NSString *JDY_NETWORK_TOP_API_URL; // @synthesize JDY_NETWORK_TOP_API_URL=_JDY_NETWORK_TOP_API_URL;
- (void).cxx_destruct;
- (void)becomeOnlineConfig;
- (void)becomePreConfig;
- (void)becomeDailyConfig;
- (void)switchToEnvType:(long long)arg1;
- (id)init;

@end

