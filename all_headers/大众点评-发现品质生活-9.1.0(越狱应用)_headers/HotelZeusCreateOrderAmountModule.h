//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModule.h"

@class HotelZeusCreateOrderArrivalDateCell, HotelZeusCreateOrderTitleCell, HotelZeusOrderInfoAmountCell, NSString, NVModelBaseZeusOrderFormResult;

@interface HotelZeusCreateOrderAmountModule : NVBaseModule
{
    NVModelBaseZeusOrderFormResult *_result;
    HotelZeusCreateOrderTitleCell *_titleCell;
    HotelZeusCreateOrderArrivalDateCell *_arrivalDateCell;
    HotelZeusOrderInfoAmountCell *_amountCell;
    long long _packageid;
    NSString *_checkindate;
}

@property(copy, nonatomic) NSString *checkindate; // @synthesize checkindate=_checkindate;
@property(nonatomic) long long packageid; // @synthesize packageid=_packageid;
@property(retain, nonatomic) HotelZeusOrderInfoAmountCell *amountCell; // @synthesize amountCell=_amountCell;
@property(retain, nonatomic) HotelZeusCreateOrderArrivalDateCell *arrivalDateCell; // @synthesize arrivalDateCell=_arrivalDateCell;
@property(retain, nonatomic) HotelZeusCreateOrderTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) NVModelBaseZeusOrderFormResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateAmountControl;
- (void)setupModule;

@end

