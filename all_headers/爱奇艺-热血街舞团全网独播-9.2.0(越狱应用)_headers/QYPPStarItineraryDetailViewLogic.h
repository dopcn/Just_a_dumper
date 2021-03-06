//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QYPPStarDetailItineraryData, QYPPStarDetailItineraryDataManager;

@interface QYPPStarItineraryDetailViewLogic : NSObject
{
    _Bool _isSuccessFullyGetData;
    long long _itineraryId;
    long long _circleId;
    QYPPStarDetailItineraryDataManager *_dataManager;
}

@property(retain, nonatomic) QYPPStarDetailItineraryDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) _Bool isSuccessFullyGetData; // @synthesize isSuccessFullyGetData=_isSuccessFullyGetData;
@property(nonatomic) long long circleId; // @synthesize circleId=_circleId;
@property(nonatomic) long long itineraryId; // @synthesize itineraryId=_itineraryId;
- (void).cxx_destruct;
@property(readonly, nonatomic) QYPPStarDetailItineraryData *starDetailItineraryData;
- (void)requestDeleteItineraryWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

