//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMSearchMtopRequestBase.h"

@class NSDictionary, NSString, TMItemSearchFilter;

@interface TMSearchFunnyMtopRequest : TMSearchMtopRequestBase
{
    TMItemSearchFilter *_filter;
    long long _pageNo;
    long long _pageSize;
    NSString *_sessionKey;
    unsigned long long _callType;
    long long _pageDiff;
    NSDictionary *_siftParams;
}

+ (Class)responseClass;
+ (id)methodVersion;
+ (id)methodName;
@property(retain, nonatomic) NSDictionary *siftParams; // @synthesize siftParams=_siftParams;
@property(nonatomic) long long pageDiff; // @synthesize pageDiff=_pageDiff;
@property(nonatomic) unsigned long long callType; // @synthesize callType=_callType;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) TMItemSearchFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)encodedParams;

@end

