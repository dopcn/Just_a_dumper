//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseItem.h"

@class NSArray, NSNumber;

@interface PDLiveGuestVideoListItem : PDBaseItem
{
    NSNumber *_applyStatus;
    NSNumber *_waitingStatus;
    NSNumber *_szroomNum;
    NSArray *_szroomList;
}

@property(retain, nonatomic) NSArray *szroomList; // @synthesize szroomList=_szroomList;
@property(retain, nonatomic) NSNumber *szroomNum; // @synthesize szroomNum=_szroomNum;
@property(retain, nonatomic) NSNumber *waitingStatus; // @synthesize waitingStatus=_waitingStatus;
@property(retain, nonatomic) NSNumber *applyStatus; // @synthesize applyStatus=_applyStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

