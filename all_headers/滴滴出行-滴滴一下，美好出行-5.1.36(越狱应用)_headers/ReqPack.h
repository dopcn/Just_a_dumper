//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface ReqPack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSData *body; // @dynamic body;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasMethod; // @dynamic hasMethod;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) NSMutableArray *headerArray; // @dynamic headerArray;
@property(readonly, nonatomic) unsigned long long headerArray_Count; // @dynamic headerArray_Count;
@property(copy, nonatomic) NSString *method; // @dynamic method;

@end

