//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBaseCellModel.h"

@class FOrderCommonPassengerData, FOrderInterPsgEditCell, FTTSInterAVResult;

@interface FOrderInterPsgFillListModelOne : FBaseCellModel
{
    _Bool _isLastItem;
    FOrderCommonPassengerData *_passengerData;
    FTTSInterAVResult *_interAVResult;
    FOrderInterPsgEditCell *_cell;
}

@property(nonatomic) _Bool isLastItem; // @synthesize isLastItem=_isLastItem;
@property(retain, nonatomic) FOrderInterPsgEditCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) FTTSInterAVResult *interAVResult; // @synthesize interAVResult=_interAVResult;
@property(retain, nonatomic) FOrderCommonPassengerData *passengerData; // @synthesize passengerData=_passengerData;
- (void).cxx_destruct;
- (_Bool)isPassengersDataFillComplete;
- (double)cellHeight;

@end

