//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEDProductBaseFilterItem.h"

@class NSString;

@interface WEDProductRegionFilterItem : WEDProductBaseFilterItem
{
    long long _regionId;
    NSString *_regionName;
}

+ (id)parseFilterList:(id)arg1;
+ (id)parseFilterItem:(id)arg1;
@property(copy, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(nonatomic) long long regionId; // @synthesize regionId=_regionId;
- (void).cxx_destruct;

@end

