//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray;
@protocol YKFStararrivalPostReplyPO;

@interface YKFStararrivalPostRepliesPO : YKFAPIModel
{
    long long _count;
    long long _floor;
    NSArray<YKFStararrivalPostReplyPO> *_replies;
}

@property(retain, nonatomic) NSArray<YKFStararrivalPostReplyPO> *replies; // @synthesize replies=_replies;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

