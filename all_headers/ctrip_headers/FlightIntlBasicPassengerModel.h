//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlighIntlPassengerRegisterInformationModel, NSMutableArray, NSString;

@interface FlightIntlBasicPassengerModel : CTBusinessBean
{
    int passengerID;
    NSString *passengerName;
    NSString *passengerNameEN;
    int passengerEType;
    NSString *birthday;
    int cardEType;
    NSString *cardNumber;
    int genderEType;
    NSString *nationality;
    NSMutableArray *fFPNoInfoList;
    int promptNum;
    NSString *verifyResult;
    NSString *iDCardTimelimit;
    NSString *contactPhone;
    NSString *countryCode;
    long long flag;
    long long infoId;
    FlighIntlPassengerRegisterInformationModel *passengerRegisterInfoModel;
    NSMutableArray *mutilCardList;
    int cardNewType;
}

@property(nonatomic) int cardNewType; // @synthesize cardNewType;
@property(retain, nonatomic) NSMutableArray *mutilCardList; // @synthesize mutilCardList;
@property(retain, nonatomic) FlighIntlPassengerRegisterInformationModel *passengerRegisterInfoModel; // @synthesize passengerRegisterInfoModel;
@property(nonatomic) long long infoId; // @synthesize infoId;
@property(nonatomic) long long flag; // @synthesize flag;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone;
@property(copy, nonatomic) NSString *iDCardTimelimit; // @synthesize iDCardTimelimit;
@property(copy, nonatomic) NSString *verifyResult; // @synthesize verifyResult;
@property(nonatomic) int promptNum; // @synthesize promptNum;
@property(retain, nonatomic) NSMutableArray *fFPNoInfoList; // @synthesize fFPNoInfoList;
@property(copy, nonatomic) NSString *nationality; // @synthesize nationality;
@property(nonatomic) int genderEType; // @synthesize genderEType;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber;
@property(nonatomic) int cardEType; // @synthesize cardEType;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday;
@property(nonatomic) int passengerEType; // @synthesize passengerEType;
@property(copy, nonatomic) NSString *passengerNameEN; // @synthesize passengerNameEN;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName;
@property(nonatomic) int passengerID; // @synthesize passengerID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

