//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface PL_PieceData : JceObjectV2
{
    NSString *jcev2_p_0_r_description;
    NSData *jcev2_p_1_r_data;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSData *jcev2_p_1_r_data; // @synthesize jcev2_p_1_r_data;
@property(retain, nonatomic, getter=jce_description, setter=setJce_description:) NSString *jcev2_p_0_r_description; // @synthesize jcev2_p_0_r_description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

