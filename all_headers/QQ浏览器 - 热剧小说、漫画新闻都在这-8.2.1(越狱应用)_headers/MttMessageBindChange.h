//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttMbItem, NSString;

@interface MttMessageBindChange : JceObjectV2
{
    long long jcev2_p_0_o_eChangeType;
    NSString *jcev2_p_1_o_sGroupName;
    NSString *jcev2_p_2_o_sGroupId;
    MttMbItem *jcev2_p_3_o_item;
    NSString *jcev2_p_4_o_sOldGuid;
    long long jcev2_p_5_o_eMode;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=eMode, setter=setEMode:) long long jcev2_p_5_o_eMode; // @synthesize jcev2_p_5_o_eMode;
@property(retain, nonatomic, getter=sOldGuid, setter=setSOldGuid:) NSString *jcev2_p_4_o_sOldGuid; // @synthesize jcev2_p_4_o_sOldGuid;
@property(retain, nonatomic, getter=item, setter=setItem:) MttMbItem *jcev2_p_3_o_item; // @synthesize jcev2_p_3_o_item;
@property(retain, nonatomic, getter=sGroupId, setter=setSGroupId:) NSString *jcev2_p_2_o_sGroupId; // @synthesize jcev2_p_2_o_sGroupId;
@property(retain, nonatomic, getter=sGroupName, setter=setSGroupName:) NSString *jcev2_p_1_o_sGroupName; // @synthesize jcev2_p_1_o_sGroupName;
@property(nonatomic, getter=eChangeType, setter=setEChangeType:) long long jcev2_p_0_o_eChangeType; // @synthesize jcev2_p_0_o_eChangeType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

