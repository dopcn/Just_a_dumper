//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString;

@interface QLJCEDynamicItemResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_itemList__b0x9i_VOQLJCEDynamicItemInfo;
    NSDictionary *jcev2_p_2_o_replaceItemList__b0x9i_M09ONSStringOQLJCEDynamicItemInfo;
    NSString *jcev2_p_3_o_context;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_context, setter=setJce_context:) NSString *jcev2_p_3_o_context; // @synthesize jcev2_p_3_o_context;
@property(retain, nonatomic, getter=jce_replaceItemList, setter=setJce_replaceItemList:) NSDictionary *jcev2_p_2_o_replaceItemList__b0x9i_M09ONSStringOQLJCEDynamicItemInfo; // @synthesize jcev2_p_2_o_replaceItemList__b0x9i_M09ONSStringOQLJCEDynamicItemInfo;
@property(retain, nonatomic, getter=jce_itemList, setter=setJce_itemList:) NSArray *jcev2_p_1_o_itemList__b0x9i_VOQLJCEDynamicItemInfo; // @synthesize jcev2_p_1_o_itemList__b0x9i_VOQLJCEDynamicItemInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

