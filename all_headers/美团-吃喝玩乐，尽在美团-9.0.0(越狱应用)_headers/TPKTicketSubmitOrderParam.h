//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TPKTicketPriceCalendarModel;

@interface TPKTicketSubmitOrderParam : NSObject
{
    _Bool _showRedDot;
    long long _dealId;
    long long _poiId;
    long long _vSpuId;
    long long _spuId;
    NSString *_tagIdListString;
    NSString *_selectedDateString;
    TPKTicketPriceCalendarModel *_priceCalendarModel;
    long long _amount;
    NSString *_title;
    unsigned long long _entryType;
    NSString *_levelRefID;
    NSString *_travelDateString;
    NSString *_rawSeat;
    long long _quantity;
    NSString *_stid;
    NSString *_ctpoi;
    NSString *_promotionSource;
    NSString *_dpSource;
    long long _holidayCityId;
}

@property(nonatomic) long long holidayCityId; // @synthesize holidayCityId=_holidayCityId;
@property(copy, nonatomic) NSString *dpSource; // @synthesize dpSource=_dpSource;
@property(copy, nonatomic) NSString *promotionSource; // @synthesize promotionSource=_promotionSource;
@property(copy, nonatomic) NSString *ctpoi; // @synthesize ctpoi=_ctpoi;
@property(copy, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *rawSeat; // @synthesize rawSeat=_rawSeat;
@property(copy, nonatomic) NSString *travelDateString; // @synthesize travelDateString=_travelDateString;
@property(copy, nonatomic) NSString *levelRefID; // @synthesize levelRefID=_levelRefID;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) TPKTicketPriceCalendarModel *priceCalendarModel; // @synthesize priceCalendarModel=_priceCalendarModel;
@property(copy, nonatomic) NSString *selectedDateString; // @synthesize selectedDateString=_selectedDateString;
@property(copy, nonatomic) NSString *tagIdListString; // @synthesize tagIdListString=_tagIdListString;
@property(nonatomic) long long spuId; // @synthesize spuId=_spuId;
@property(nonatomic) long long vSpuId; // @synthesize vSpuId=_vSpuId;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
@property(nonatomic) long long dealId; // @synthesize dealId=_dealId;
- (void).cxx_destruct;

@end

