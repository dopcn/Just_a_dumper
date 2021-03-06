//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ChooseSeatManager : NSObject
{
    NSMutableArray *_allSeats;
    long long _limitCount;
    long long _columnCount;
    long long _rowCount;
    long long arrWeight[2];
    NSMutableArray *mArraySelectedSeats_;
    NSMutableDictionary *_mDicSeatInfo;
}

+ (id)mtSeatDataArrayCovertedFromSeatItemArray:(id)arg1;
+ (id)seatInfoArrayCovertedFromSeatDataArray:(id)arg1;
+ (id)getSeatDataEntityFromSeatItemEntity:(id)arg1;
+ (id)getSeatsInfoFromMTSeatDataEntity:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *mDicSeatInfo; // @synthesize mDicSeatInfo=_mDicSeatInfo;
@property(retain, nonatomic) NSMutableArray *allSeats; // @synthesize allSeats=_allSeats;
@property(readonly, nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
- (void)deleteFromSelectedSeatsByDisabledRowArray:(id)arg1;
- (void)refreshSeatsDataByNewSeatsInfoArray:(id)arg1 selectedSeatsAry:(id)arg2;
- (id)chooseSeatResultFromEnum:(long long)arg1;
- (void)dealloc;
- (id)getRightSeat:(id)arg1 rightStep:(long long)arg2;
- (id)getLeftSeat:(id)arg1 leftStep:(long long)arg2;
- (long long)getPositionInSeatArray:(long long)arg1 y:(long long)arg2;
- (id)getSeatInfo:(long long)arg1 y:(long long)arg2;
- (id)getSeatInfoKey:(id)arg1;
- (_Bool)canSelect:(id)arg1;
- (_Bool)isSelectByMyselfInNormalMode:(id)arg1;
- (_Bool)isIsland:(id)arg1 rightSeat:(id)arg2;
- (void)deselectAllSeats;
- (void)deselectSeat:(id)arg1;
- (void)selectSeat:(id)arg1;
- (void)unbindSeats:(id)arg1 withSeat:(id)arg2;
- (void)bindSeats:(id)arg1 withSeat:(id)arg2;
- (long long)handle1IslandWhenSelectSeat:(id)arg1;
- (long long)handle2IslandWhenSelectSeat:(id)arg1;
- (long long)handle3IslandWhenSelectSeat:(id)arg1;
- (long long)handle4IslandWhenSelectSeat:(id)arg1;
- (long long)handleLoverSeatWhenSelectSeat:(id)arg1;
- (long long)handleSelectFromMiddleOneByOneWhenCancelSeat:(id)arg1;
- (long long)handleSelectFromRightWallOneByOneWhenCancelSeat:(id)arg1;
- (long long)handleSelectFromLeftWallOneByOneWhenCancelSeat:(id)arg1;
- (long long)handle2IslandSpecialCaseWhenCancelSeat:(id)arg1;
- (long long)handleDouobleSelectWhenCancelSeat:(id)arg1;
- (long long)handleLoverSeatWhenCancelSeat:(id)arg1;
- (long long)performCancelSeat:(id)arg1;
- (long long)performChooseSeat:(id)arg1;
- (long long)chooseSeat:(int)arg1 y:(int)arg2;
- (id)getAllSelectedSeats;
- (void)initSeatsWithSeatsData:(id)arg1 limitCount:(long long)arg2;
- (void)initSeatsWithSeatsData:(id)arg1 limitCount:(long long)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
- (void)clearData;
- (id)init;

@end

