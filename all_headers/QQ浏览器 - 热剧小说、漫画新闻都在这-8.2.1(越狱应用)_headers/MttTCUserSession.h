//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttTCUserSession : JceObjectV2
{
    NSString *jcev2_p_0_r_sSessionKey;
    NSString *jcev2_p_1_r_sSessionAuth;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sSessionAuth, setter=setSSessionAuth:) NSString *jcev2_p_1_r_sSessionAuth; // @synthesize jcev2_p_1_r_sSessionAuth;
@property(retain, nonatomic, getter=sSessionKey, setter=setSSessionKey:) NSString *jcev2_p_0_r_sSessionKey; // @synthesize jcev2_p_0_r_sSessionKey;
- (void).cxx_destruct;
- (id)init;

@end

