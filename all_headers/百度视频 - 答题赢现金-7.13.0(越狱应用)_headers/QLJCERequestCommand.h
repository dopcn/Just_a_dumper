//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, QLJCERequestHead;

@interface QLJCERequestCommand : JceObjectV2
{
    QLJCERequestHead *jcev2_p_0_r_head;
    NSData *jcev2_p_1_o_body;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_body, setter=setJce_body:) NSData *jcev2_p_1_o_body; // @synthesize jcev2_p_1_o_body;
@property(retain, nonatomic, getter=jce_head, setter=setJce_head:) QLJCERequestHead *jcev2_p_0_r_head; // @synthesize jcev2_p_0_r_head;
- (void)dealloc;
- (id)init;

@end

