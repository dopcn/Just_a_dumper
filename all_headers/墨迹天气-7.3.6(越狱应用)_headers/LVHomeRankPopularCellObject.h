//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCellObject.h"

@class NSMutableArray;

@interface LVHomeRankPopularCellObject : IPCTableViewCellObject
{
    NSMutableArray *_rankPopularArray;
    double _popularCellHeight;
}

@property(nonatomic) double popularCellHeight; // @synthesize popularCellHeight=_popularCellHeight;
@property(retain, nonatomic) NSMutableArray *rankPopularArray; // @synthesize rankPopularArray=_rankPopularArray;
- (void).cxx_destruct;
- (double)getCellHeight;
- (Class)cellClass;

@end

