//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTItemNode.h"

@class NSArray;

@interface CTRegionNode : CTItemNode
{
    NSArray *_arrSubRegions;
    long long _level;
}

+ (id)nodeWithCityCantonModel:(id)arg1;
+ (id)nodeWithProvinceModel:(id)arg1;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSArray *arrSubRegions; // @synthesize arrSubRegions=_arrSubRegions;
- (void).cxx_destruct;

@end

