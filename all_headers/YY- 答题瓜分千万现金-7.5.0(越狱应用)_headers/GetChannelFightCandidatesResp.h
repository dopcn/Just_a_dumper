//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32Array, ResponseHeader;

@interface GetChannelFightCandidatesResp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32Array *femaleArray; // @dynamic femaleArray;
@property(readonly, nonatomic) unsigned long long femaleArray_Count; // @dynamic femaleArray_Count;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) GPBUInt32Array *maleArray; // @dynamic maleArray;
@property(readonly, nonatomic) unsigned long long maleArray_Count; // @dynamic maleArray_Count;
@property(retain, nonatomic) ResponseHeader *response; // @dynamic response;

@end

