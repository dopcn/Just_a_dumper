//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MDWUserId, NSString;

@interface MDWFriendsReq : JceObjectV2
{
    MDWUserId *jcev2_p_0_o_tUserId;
    NSString *jcev2_p_1_o_sLatestVersionMd5;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_sLatestVersionMd5, setter=setJce_sLatestVersionMd5:) NSString *jcev2_p_1_o_sLatestVersionMd5; // @synthesize jcev2_p_1_o_sLatestVersionMd5;
@property(retain, nonatomic, getter=jce_tUserId, setter=setJce_tUserId:) MDWUserId *jcev2_p_0_o_tUserId; // @synthesize jcev2_p_0_o_tUserId;
- (void).cxx_destruct;
- (id)init;

@end

