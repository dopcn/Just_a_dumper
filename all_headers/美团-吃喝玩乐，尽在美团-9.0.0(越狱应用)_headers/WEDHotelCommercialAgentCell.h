//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class NSMutableArray, NVModelBaseWeddingHotelAgent;

@interface WEDHotelCommercialAgentCell : GCBaseMarginCell
{
    NVModelBaseWeddingHotelAgent *_weddingHotelAgent;
    NSMutableArray *_agentUnitArray;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NSMutableArray *agentUnitArray; // @synthesize agentUnitArray=_agentUnitArray;
@property(retain, nonatomic) NVModelBaseWeddingHotelAgent *weddingHotelAgent; // @synthesize weddingHotelAgent=_weddingHotelAgent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

