//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PAApi_ACTCENTER_ChatGroupList : NSObject
{
    NSMutableArray *_chatGroupList;
    long long _count;
    long long _pageQueryTime;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(nonatomic) long long pageQueryTime; // @synthesize pageQueryTime=_pageQueryTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *chatGroupList; // @synthesize chatGroupList=_chatGroupList;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

