//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol FMMessageEmotionFaceDO;

@interface FMMessageEmotionFaceListDO : NSObject
{
    _Bool _nextPage;
    long long _totalCount;
    NSArray<FMMessageEmotionFaceDO> *_items;
}

@property(copy, nonatomic) NSArray<FMMessageEmotionFaceDO> *items; // @synthesize items=_items;
@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;

@end

