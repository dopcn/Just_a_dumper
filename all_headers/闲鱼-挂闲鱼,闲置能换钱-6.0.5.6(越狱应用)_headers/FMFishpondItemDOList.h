//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCardListDO.h"

@class NSNumber, NSString;

@interface FMFishpondItemDOList : FMCardListDO
{
    _Bool _noData;
    NSString *_serverTime;
    NSString *_updateOption;
    NSNumber *_updateCount;
    NSString *_startTimePoint;
}

@property(copy, nonatomic) NSString *startTimePoint; // @synthesize startTimePoint=_startTimePoint;
@property(nonatomic) _Bool noData; // @synthesize noData=_noData;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(copy, nonatomic) NSString *updateOption; // @synthesize updateOption=_updateOption;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;

@end

