//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MDWGroupInfoValue, MDWMemberListValue;

@interface MDWGroupProfile : JceObjectV2
{
    MDWGroupInfoValue *jcev2_p_0_o_tGroupInfo;
    MDWMemberListValue *jcev2_p_1_o_tMemberList;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_tMemberList, setter=setJce_tMemberList:) MDWMemberListValue *jcev2_p_1_o_tMemberList; // @synthesize jcev2_p_1_o_tMemberList;
@property(retain, nonatomic, getter=jce_tGroupInfo, setter=setJce_tGroupInfo:) MDWGroupInfoValue *jcev2_p_0_o_tGroupInfo; // @synthesize jcev2_p_0_o_tGroupInfo;
- (void).cxx_destruct;

@end

