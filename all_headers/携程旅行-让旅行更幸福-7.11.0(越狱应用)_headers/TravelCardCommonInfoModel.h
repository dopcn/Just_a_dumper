//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTSBasicCoordinateModel, NSMutableArray, NSString;

@interface TravelCardCommonInfoModel : NSObject
{
    _Bool _isOrderCard;
    _Bool _canFlightCheckIn;
    _Bool _canShareCard;
    _Bool _canEditCard;
    _Bool _canModifyCard;
    _Bool _needShowInCalendar;
    int _ctsOrderStatusStyle;
    NSString *_orderUrl;
    NSString *_orderStatusName;
    NSString *_detailCellName;
    long long _ctsCardOrderId;
    NSMutableArray *_passengerList;
    NSString *_destinationCityName;
    NSString *_placeNameForNavigate;
    CTSBasicCoordinateModel *_destinationCoordinate;
}

@property(retain, nonatomic) CTSBasicCoordinateModel *destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
@property(copy, nonatomic) NSString *placeNameForNavigate; // @synthesize placeNameForNavigate=_placeNameForNavigate;
@property(copy, nonatomic) NSString *destinationCityName; // @synthesize destinationCityName=_destinationCityName;
@property(nonatomic) _Bool needShowInCalendar; // @synthesize needShowInCalendar=_needShowInCalendar;
@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList=_passengerList;
@property(nonatomic) int ctsOrderStatusStyle; // @synthesize ctsOrderStatusStyle=_ctsOrderStatusStyle;
@property(nonatomic) long long ctsCardOrderId; // @synthesize ctsCardOrderId=_ctsCardOrderId;
@property(copy, nonatomic) NSString *detailCellName; // @synthesize detailCellName=_detailCellName;
@property(nonatomic) _Bool canModifyCard; // @synthesize canModifyCard=_canModifyCard;
@property(nonatomic) _Bool canEditCard; // @synthesize canEditCard=_canEditCard;
@property(nonatomic) _Bool canShareCard; // @synthesize canShareCard=_canShareCard;
@property(nonatomic) _Bool canFlightCheckIn; // @synthesize canFlightCheckIn=_canFlightCheckIn;
@property(copy, nonatomic) NSString *orderStatusName; // @synthesize orderStatusName=_orderStatusName;
@property(copy, nonatomic) NSString *orderUrl; // @synthesize orderUrl=_orderUrl;
@property(nonatomic) _Bool isOrderCard; // @synthesize isOrderCard=_isOrderCard;
- (void).cxx_destruct;
- (id)init;

@end

