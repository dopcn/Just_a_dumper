//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCTableViewCellObject.h"

@class NSMutableArray;

@interface LVHomeRankOfficialCellObject : IPCTableViewCellObject
{
    NSMutableArray *_rankOfficialArray;
    double _officialCellHeight;
    long long _homeRankCellType;
}

@property(nonatomic) long long homeRankCellType; // @synthesize homeRankCellType=_homeRankCellType;
@property(nonatomic) double officialCellHeight; // @synthesize officialCellHeight=_officialCellHeight;
@property(retain, nonatomic) NSMutableArray *rankOfficialArray; // @synthesize rankOfficialArray=_rankOfficialArray;
- (void).cxx_destruct;
- (double)getCellHeight;
- (Class)cellClass;

@end

