//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSRequest.h"

@class NSString;

@interface VSQueryIntegralListRequest : VSRequest
{
    long long _type;
    long long _page;
    long long _pageSize;
    NSString *_startDate;
    NSString *_endDate;
    NSString *_orederSn;
}

@property(copy, nonatomic) NSString *orederSn; // @synthesize orederSn=_orederSn;
@property(copy, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)responseClass;
- (void)buildParameters:(id)arg1;
- (id)init;
- (void)dealloc;

@end

