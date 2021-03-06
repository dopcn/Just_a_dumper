//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ONEBaseModel.h"

@class NSArray, NSDate, NSNumber, NSString, SSMDDriverPQInfo;
@protocol ONESmoothPointModel, Optional;

@interface SSMDriverPositionInfoModel : ONEBaseModel
{
    NSDate *_time;
    NSNumber *_orderStat;
    NSNumber *_eta;
    NSNumber *_etaDistance;
    NSString *_etaStr;
    NSNumber<Optional> *_redirect;
    NSNumber *_debugOpen;
    NSArray<ONESmoothPointModel> *_drivers;
    NSNumber *_sds_visual_open;
    NSArray *_grid_infos;
    SSMDDriverPQInfo *_pqInfo;
}

@property(retain, nonatomic) SSMDDriverPQInfo *pqInfo; // @synthesize pqInfo=_pqInfo;
@property(retain, nonatomic) NSArray *grid_infos; // @synthesize grid_infos=_grid_infos;
@property(retain, nonatomic) NSNumber *sds_visual_open; // @synthesize sds_visual_open=_sds_visual_open;
@property(copy, nonatomic) NSArray<ONESmoothPointModel> *drivers; // @synthesize drivers=_drivers;
@property(retain, nonatomic) NSNumber *debugOpen; // @synthesize debugOpen=_debugOpen;
@property(retain, nonatomic) NSNumber<Optional> *redirect; // @synthesize redirect=_redirect;
@property(copy, nonatomic) NSString *etaStr; // @synthesize etaStr=_etaStr;
@property(retain, nonatomic) NSNumber *etaDistance; // @synthesize etaDistance=_etaDistance;
@property(retain, nonatomic) NSNumber *eta; // @synthesize eta=_eta;
@property(retain, nonatomic) NSNumber *orderStat; // @synthesize orderStat=_orderStat;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

