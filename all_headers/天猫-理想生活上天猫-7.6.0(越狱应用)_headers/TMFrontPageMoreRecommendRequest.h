//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSString;

@interface TMFrontPageMoreRecommendRequest : TBMTOPBaseRequest
{
    NSString *_utdid;
    NSString *_bucketId;
    unsigned long long _page;
    unsigned long long _pageSize;
    NSString *_historyItems;
    NSString *_userId;
    NSString *_imei;
    NSString *_visitNum;
    NSString *_bizType;
    NSString *_hisvvips;
    NSString *_deletedItems;
    NSString *_pageType;
    NSString *_params;
}

@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(retain, nonatomic) NSString *hisvvips; // @synthesize hisvvips=_hisvvips;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *visitNum; // @synthesize visitNum=_visitNum;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *historyItems; // @synthesize historyItems=_historyItems;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
- (void).cxx_destruct;
- (id)init;

@end

