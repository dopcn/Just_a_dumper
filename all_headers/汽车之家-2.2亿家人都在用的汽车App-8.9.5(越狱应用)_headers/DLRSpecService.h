//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CARRootService.h"

@class NSMutableArray;

@interface DLRSpecService : CARRootService
{
    NSMutableArray *specArray;
    long long dealerSellProvinceId;
}

@property(nonatomic) long long dealerSellProvinceId; // @synthesize dealerSellProvinceId;
@property(retain, nonatomic) NSMutableArray *specArray; // @synthesize specArray;
- (void).cxx_destruct;
- (void)getSpecListWithDealerId:(long long)arg1 seriesId:(long long)arg2;
- (_Bool)parseJSON:(id)arg1;
- (id)init;

@end

