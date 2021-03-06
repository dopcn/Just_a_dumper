//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLBaseService.h"

@class HTLHotelDealModel, SAKDealDAO;

@interface HTLHotelDealService : HTLBaseService
{
    HTLHotelDealModel *_model;
    SAKDealDAO *_dealDAO;
}

@property(retain, nonatomic) SAKDealDAO *dealDAO; // @synthesize dealDAO=_dealDAO;
@property(retain, nonatomic) HTLHotelDealModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)getDealIntroduction:(CDUnknownBlockType)arg1;
- (void)loadHotelDealPictureInfoByDeal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadDealWithoutBranchesByDealID:(long long)arg1 pageType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadDealWithoutBranchesByDealID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadDealByDealID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

