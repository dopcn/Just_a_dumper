//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAYDealDetail, MAYDealModel, NSNumber, RACCommand;

@interface MAYDealDetailViewModel : NSObject
{
    NSNumber *_dealId;
    NSNumber *_cinemaId;
    MAYDealDetail *_dealDetail;
    RACCommand *_fetchDealDetailCommand;
    MAYDealModel *_model;
}

@property(retain, nonatomic) MAYDealModel *model; // @synthesize model=_model;
@property(retain, nonatomic) RACCommand *fetchDealDetailCommand; // @synthesize fetchDealDetailCommand=_fetchDealDetailCommand;
@property(retain, nonatomic) MAYDealDetail *dealDetail; // @synthesize dealDetail=_dealDetail;
@property(retain, nonatomic) NSNumber *cinemaId; // @synthesize cinemaId=_cinemaId;
@property(retain, nonatomic) NSNumber *dealId; // @synthesize dealId=_dealId;
- (void).cxx_destruct;
- (id)initWithDealId:(id)arg1 cinemaId:(id)arg2;

@end

