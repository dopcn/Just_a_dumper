//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, mf_ResponseHeader;

@interface mf_GetCharmListResp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *charmBillboardArray; // @dynamic charmBillboardArray;
@property(readonly, nonatomic) unsigned long long charmBillboardArray_Count; // @dynamic charmBillboardArray_Count;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) mf_ResponseHeader *response; // @dynamic response;

@end

