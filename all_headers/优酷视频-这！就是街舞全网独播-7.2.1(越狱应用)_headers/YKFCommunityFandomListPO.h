//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, YKFModelResponsePagingPO;
@protocol YKFCommunityFandomPO;

@interface YKFCommunityFandomListPO : YKFAPIModel
{
    NSArray<YKFCommunityFandomPO> *_fandoms;
    YKFModelResponsePagingPO *_paging;
}

@property(retain, nonatomic) YKFModelResponsePagingPO *paging; // @synthesize paging=_paging;
@property(retain, nonatomic) NSArray<YKFCommunityFandomPO> *fandoms; // @synthesize fandoms=_fandoms;
- (void).cxx_destruct;

@end

