//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KQBaseHttpDao.h"

@interface KQFindHttpDao : KQBaseHttpDao
{
}

- (id)requestProvinceAndCityDataWithProvince:(id)arg1 andCity:(id)arg2 andSynchronous:(id *)arg3;
- (id)requestFindKuqunWithLabel:(id)arg1 andPage:(long long)arg2 andPageSize:(long long)arg3 andSynchronous:(id *)arg4;
- (id)requestFindHomeRecentOpenLiveInfoWithLabel:(id)arg1 andLongitude:(id)arg2 andLatitude:(id)arg3 andSortType:(long long)arg4 andRange:(unsigned long long)arg5 andArea:(id)arg6 andAdcode:(id)arg7 andPageSize:(long long)arg8 andSynchronous:(id *)arg9;
- (id)requestFindHomeInfoWithLabel:(id)arg1 andLongitude:(id)arg2 andLatitude:(id)arg3 andSortType:(long long)arg4 andRange:(unsigned long long)arg5 andArea:(id)arg6 andAdcode:(id)arg7 andPage:(long long)arg8 andPageSize:(long long)arg9 andSynchronous:(id *)arg10;

@end

