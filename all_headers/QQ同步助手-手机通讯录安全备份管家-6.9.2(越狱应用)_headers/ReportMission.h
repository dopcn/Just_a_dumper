//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QQInfo;

@interface ReportMission : JceObjectV2
{
    QQInfo *jcev2_p_0_r_qq;
    NSArray *jcev2_p_1_r_missions__b0x9i_VOMissionItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_missions, setter=setJce_missions:) NSArray *jcev2_p_1_r_missions__b0x9i_VOMissionItem; // @synthesize jcev2_p_1_r_missions__b0x9i_VOMissionItem;
@property(retain, nonatomic, getter=jce_qq, setter=setJce_qq:) QQInfo *jcev2_p_0_r_qq; // @synthesize jcev2_p_0_r_qq;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

