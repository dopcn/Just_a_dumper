//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PaoSaoBaseResponse.h"

@class NSDictionary;

@interface PaoSaoWishCreateWishResponse : PaoSaoBaseResponse
{
    long long _anchorId;
    unsigned long long _remainScore;
    unsigned long long _beginTime;
    unsigned long long _remainTime;
    NSDictionary *_extendInfo;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(nonatomic) unsigned long long remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned long long remainScore; // @synthesize remainScore=_remainScore;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;
- (id)description;

@end

