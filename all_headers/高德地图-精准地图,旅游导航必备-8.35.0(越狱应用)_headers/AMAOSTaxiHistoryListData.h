//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseData.h"

@class NSMutableArray;

@interface AMAOSTaxiHistoryListData : AMAOSBaseData
{
    NSMutableArray *_historyListData;
    long long _totalNum;
}

@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSMutableArray *historyListData; // @synthesize historyListData=_historyListData;
- (void).cxx_destruct;
- (id)init;

@end

