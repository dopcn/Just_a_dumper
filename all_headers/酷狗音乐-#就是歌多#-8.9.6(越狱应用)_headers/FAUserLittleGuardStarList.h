//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray;
@protocol FAUserLittleGuardStarInfo;

@interface FAUserLittleGuardStarList : FAModel
{
    long long _totalPage;
    long long _totalRows;
    long long _pageNum;
    NSArray<FAUserLittleGuardStarInfo> *_list;
}

@property(retain, nonatomic) NSArray<FAUserLittleGuardStarInfo> *list; // @synthesize list=_list;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long totalRows; // @synthesize totalRows=_totalRows;
@property(nonatomic) long long totalPage; // @synthesize totalPage=_totalPage;
- (void).cxx_destruct;

@end

