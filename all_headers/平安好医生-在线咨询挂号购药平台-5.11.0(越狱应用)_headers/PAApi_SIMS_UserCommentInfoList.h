//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PAApi_SIMS_UserCommentInfoList : NSObject
{
    long long _count;
    long long _pageIndex;
    long long _pageSize;
    NSMutableArray *_userCommentInfos;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *userCommentInfos; // @synthesize userCommentInfos=_userCommentInfos;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

