//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMDaijiaOptionEntity, NSDate, NSMutableDictionary, NSString;

@interface EDJLocationInfo : NSObject
{
    NSString *_startPositionName;
    NSString *_endPositionName;
    BMDaijiaOptionEntity *_couponEntity;
    BMDaijiaOptionEntity *_systemCountEntity;
    NSMutableDictionary *_couponDict;
    NSDate *_userSeletedTime;
    struct BMPoint _startPositionPoint;
    struct BMPoint _endPositionPoint;
}

+ (void)removeInstance;
+ (id)instance;
@property(retain, nonatomic) NSDate *userSeletedTime; // @synthesize userSeletedTime=_userSeletedTime;
@property(retain, nonatomic) NSMutableDictionary *couponDict; // @synthesize couponDict=_couponDict;
@property(retain, nonatomic) BMDaijiaOptionEntity *systemCountEntity; // @synthesize systemCountEntity=_systemCountEntity;
@property(retain, nonatomic) BMDaijiaOptionEntity *couponEntity; // @synthesize couponEntity=_couponEntity;
@property(copy, nonatomic) NSString *endPositionName; // @synthesize endPositionName=_endPositionName;
@property(copy, nonatomic) NSString *startPositionName; // @synthesize startPositionName=_startPositionName;
@property(nonatomic) struct BMPoint endPositionPoint; // @synthesize endPositionPoint=_endPositionPoint;
@property(nonatomic) struct BMPoint startPositionPoint; // @synthesize startPositionPoint=_startPositionPoint;
- (void).cxx_destruct;
- (id)getHomePageCouponSetting;
- (id)getEstimateCostParam;
- (id)getCoupon;
- (void)setcoupon:(id)arg1 isUserSelected:(_Bool)arg2;
- (id)getUniqueCounpon;
- (void)makeSeletedTime:(id)arg1;
- (void)makeEndPosition:(struct BMPoint)arg1 EndPositionName:(id)arg2;
- (void)makeStartPosition:(struct BMPoint)arg1 startPositionName:(id)arg2;
- (_Bool)iSEvaluate;
- (void)exChangeStartPositionWithEndPosition;
- (void)clearEndPosition;
- (id)init;

@end

