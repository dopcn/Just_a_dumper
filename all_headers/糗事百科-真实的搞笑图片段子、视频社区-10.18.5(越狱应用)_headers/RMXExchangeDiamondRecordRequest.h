//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMXNetworkRequest.h"

@interface RMXExchangeDiamondRecordRequest : RMXNetworkRequest
{
    long long _count;
    long long _size;
}

+ (id)requestWithPageCount:(long long)arg1 pageSize:(long long)arg2;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long count; // @synthesize count=_count;
- (long long)requestMethod;
- (id)requestArgument;
- (id)requestUrl;

@end

