//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class DBAirport, NSString;

@interface DBEndpointInfo : JceObjectV2
{
    DBAirport *jcev2_p_0_r_sAirport;
    NSString *jcev2_p_1_r_strTerminal;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=strTerminal, setter=setStrTerminal:) NSString *jcev2_p_1_r_strTerminal; // @synthesize jcev2_p_1_r_strTerminal;
@property(retain, nonatomic, getter=sAirport, setter=setSAirport:) DBAirport *jcev2_p_0_r_sAirport; // @synthesize jcev2_p_0_r_sAirport;
- (void).cxx_destruct;
- (id)init;

@end

