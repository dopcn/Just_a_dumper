//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class FFStatusCheckInObject, NSNumber, NSString;

@interface FStatusDetail : SearchNetResult
{
    NSString *_flightShort;
    NSString *_flightNo;
    NSString *_flightType;
    NSString *_date;
    NSString *_depAirport;
    NSString *_arrAirport;
    NSString *_depAirportShort;
    NSString *_arrAirportShort;
    NSString *_depTime;
    NSString *_arrTime;
    NSString *_dPtime;
    NSString *_aPtime;
    NSString *_spentFlightTime;
    NSString *_surplusFlightTime;
    NSString *_depTerminal;
    NSString *_arrTerminal;
    NSString *_flightStatus;
    NSString *_depStatus;
    NSString *_depTimeStatus;
    NSNumber *_depTimeStautsFlag;
    NSString *_arrStatus;
    NSString *_arrTimeStatus;
    NSNumber *_arrTimeStautsFlag;
    NSString *_depCity;
    NSString *_arrCity;
    NSString *_depTimeZone;
    NSString *_arrTimeZone;
    NSString *_dPtimeZone;
    NSString *_aPtimeZone;
    NSString *_depDateDesc;
    NSString *_arrDateDesc;
    NSString *_dPDateDesc;
    NSString *_aPDateDesc;
    NSString *_depLatitude;
    NSString *_depLongitude;
    NSString *_arrLatitude;
    NSString *_arrLongitude;
    NSString *_flightLocal;
    NSString *_flightLogo;
    NSString *_distance;
    NSString *_flightTime;
    NSString *_depTrafficAirportId;
    NSString *_arrTrafficAirportId;
    NSString *_warmTips;
    NSString *_interWarmTips;
    NSString *_depCityTemp;
    NSString *_arrCityTemp;
    NSString *_depCityTempImageUrl1;
    NSString *_depCityTempImageUrl2;
    NSString *_arrCityTempImageUrl1;
    NSString *_arrCityTempImageUrl2;
    NSString *_depTimeDescribe;
    NSString *_arrTimeDescribe;
    NSNumber *_flightStatusColorCode;
    NSString *_checkinCounter;
    NSString *_boardgate;
    NSString *_baggageTurntable;
    NSString *_correct;
    NSString *_arrPlan;
    NSString *_depPlan;
    NSString *_depAirportCode;
    NSString *_arrAirportCode;
    NSString *_statusWarmTip;
    FFStatusCheckInObject *_checkInObj;
    NSNumber *_isBeforeFlight;
    NSString *_before_flightno;
    NSString *_before_depCity;
    NSString *_before_arrCity;
    NSString *_before_date;
    NSString *_before_desc;
    NSNumber *_isDomestic;
}

@property(readonly, nonatomic, getter=isDomestic) NSNumber *isDomestic; // @synthesize isDomestic=_isDomestic;
@property(readonly, nonatomic, getter=before_desc) NSString *before_desc; // @synthesize before_desc=_before_desc;
@property(readonly, nonatomic, getter=before_date) NSString *before_date; // @synthesize before_date=_before_date;
@property(readonly, nonatomic, getter=before_arrCity) NSString *before_arrCity; // @synthesize before_arrCity=_before_arrCity;
@property(readonly, nonatomic, getter=before_depCity) NSString *before_depCity; // @synthesize before_depCity=_before_depCity;
@property(readonly, nonatomic, getter=before_flightno) NSString *before_flightno; // @synthesize before_flightno=_before_flightno;
@property(readonly, nonatomic, getter=isBeforeFlight) NSNumber *isBeforeFlight; // @synthesize isBeforeFlight=_isBeforeFlight;
@property(readonly, nonatomic, getter=getCheckInObj) FFStatusCheckInObject *checkInObj; // @synthesize checkInObj=_checkInObj;
@property(readonly, nonatomic, getter=getStatusWarmTip) NSString *statusWarmTip; // @synthesize statusWarmTip=_statusWarmTip;
@property(readonly, nonatomic, getter=arrAirportCode) NSString *arrAirportCode; // @synthesize arrAirportCode=_arrAirportCode;
@property(readonly, nonatomic, getter=depAirportCode) NSString *depAirportCode; // @synthesize depAirportCode=_depAirportCode;
@property(readonly, nonatomic, getter=depPlan) NSString *depPlan; // @synthesize depPlan=_depPlan;
@property(readonly, nonatomic, getter=arrPlan) NSString *arrPlan; // @synthesize arrPlan=_arrPlan;
@property(readonly, nonatomic, getter=correct) NSString *correct; // @synthesize correct=_correct;
@property(readonly, nonatomic, getter=baggageTurntable) NSString *baggageTurntable; // @synthesize baggageTurntable=_baggageTurntable;
@property(readonly, nonatomic, getter=boardgate) NSString *boardgate; // @synthesize boardgate=_boardgate;
@property(readonly, nonatomic, getter=checkinCounter) NSString *checkinCounter; // @synthesize checkinCounter=_checkinCounter;
@property(readonly, nonatomic, getter=flightStatusColor) NSNumber *flightStatusColorCode; // @synthesize flightStatusColorCode=_flightStatusColorCode;
@property(readonly, nonatomic, getter=arrTimeDesc) NSString *arrTimeDescribe; // @synthesize arrTimeDescribe=_arrTimeDescribe;
@property(readonly, nonatomic, getter=depTimeDesc) NSString *depTimeDescribe; // @synthesize depTimeDescribe=_depTimeDescribe;
@property(readonly, nonatomic, getter=arrCityWeatherImage2) NSString *arrCityTempImageUrl2; // @synthesize arrCityTempImageUrl2=_arrCityTempImageUrl2;
@property(readonly, nonatomic, getter=arrCityWeatherImage1) NSString *arrCityTempImageUrl1; // @synthesize arrCityTempImageUrl1=_arrCityTempImageUrl1;
@property(readonly, nonatomic, getter=depCityWeatherImage2) NSString *depCityTempImageUrl2; // @synthesize depCityTempImageUrl2=_depCityTempImageUrl2;
@property(readonly, nonatomic, getter=depCityWeatherImage1) NSString *depCityTempImageUrl1; // @synthesize depCityTempImageUrl1=_depCityTempImageUrl1;
@property(readonly, nonatomic, getter=arrCityTemperature) NSString *arrCityTemp; // @synthesize arrCityTemp=_arrCityTemp;
@property(readonly, nonatomic, getter=depCityTemperature) NSString *depCityTemp; // @synthesize depCityTemp=_depCityTemp;
@property(readonly, nonatomic, getter=interWarmTips) NSString *interWarmTips; // @synthesize interWarmTips=_interWarmTips;
@property(readonly, nonatomic, getter=delayTip) NSString *warmTips; // @synthesize warmTips=_warmTips;
@property(readonly, nonatomic, getter=arrAirportInfoID) NSString *arrTrafficAirportId; // @synthesize arrTrafficAirportId=_arrTrafficAirportId;
@property(readonly, nonatomic, getter=depAirportInfoID) NSString *depTrafficAirportId; // @synthesize depTrafficAirportId=_depTrafficAirportId;
@property(readonly, nonatomic, getter=flightTime) NSString *flightTime; // @synthesize flightTime=_flightTime;
@property(readonly, nonatomic, getter=flightDistance) NSString *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic, getter=logoURL) NSString *flightLogo; // @synthesize flightLogo=_flightLogo;
@property(readonly, nonatomic, getter=flightRatio) NSString *flightLocal; // @synthesize flightLocal=_flightLocal;
@property(readonly, nonatomic, getter=arrLongitude) NSString *arrLongitude; // @synthesize arrLongitude=_arrLongitude;
@property(readonly, nonatomic, getter=arrLatitude) NSString *arrLatitude; // @synthesize arrLatitude=_arrLatitude;
@property(readonly, nonatomic, getter=depLongitude) NSString *depLongitude; // @synthesize depLongitude=_depLongitude;
@property(readonly, nonatomic, getter=depLatitude) NSString *depLatitude; // @synthesize depLatitude=_depLatitude;
@property(readonly, nonatomic, getter=aPDateDesc) NSString *aPDateDesc; // @synthesize aPDateDesc=_aPDateDesc;
@property(readonly, nonatomic, getter=dPDateDesc) NSString *dPDateDesc; // @synthesize dPDateDesc=_dPDateDesc;
@property(readonly, nonatomic, getter=arrDateDesc) NSString *arrDateDesc; // @synthesize arrDateDesc=_arrDateDesc;
@property(readonly, nonatomic, getter=depDateDesc) NSString *depDateDesc; // @synthesize depDateDesc=_depDateDesc;
@property(readonly, nonatomic, getter=aPtimeZone) NSString *aPtimeZone; // @synthesize aPtimeZone=_aPtimeZone;
@property(readonly, nonatomic, getter=dPtimeZone) NSString *dPtimeZone; // @synthesize dPtimeZone=_dPtimeZone;
@property(readonly, nonatomic, getter=arrTimeZone) NSString *arrTimeZone; // @synthesize arrTimeZone=_arrTimeZone;
@property(readonly, nonatomic, getter=depTimeZone) NSString *depTimeZone; // @synthesize depTimeZone=_depTimeZone;
@property(readonly, nonatomic, getter=aCity) NSString *arrCity; // @synthesize arrCity=_arrCity;
@property(readonly, nonatomic, getter=dCity) NSString *depCity; // @synthesize depCity=_depCity;
@property(readonly, nonatomic, getter=arrStatusFlag) NSNumber *arrTimeStautsFlag; // @synthesize arrTimeStautsFlag=_arrTimeStautsFlag;
@property(readonly, nonatomic, getter=arrStatusDesc) NSString *arrTimeStatus; // @synthesize arrTimeStatus=_arrTimeStatus;
@property(readonly, nonatomic, getter=arrStatus) NSString *arrStatus; // @synthesize arrStatus=_arrStatus;
@property(readonly, nonatomic, getter=depStatusFlag) NSNumber *depTimeStautsFlag; // @synthesize depTimeStautsFlag=_depTimeStautsFlag;
@property(readonly, nonatomic, getter=depStatusDesc) NSString *depTimeStatus; // @synthesize depTimeStatus=_depTimeStatus;
@property(readonly, nonatomic, getter=depStatus) NSString *depStatus; // @synthesize depStatus=_depStatus;
@property(readonly, nonatomic, getter=fStatus) NSString *flightStatus; // @synthesize flightStatus=_flightStatus;
@property(readonly, nonatomic, getter=aTerminal) NSString *arrTerminal; // @synthesize arrTerminal=_arrTerminal;
@property(readonly, nonatomic, getter=dTerminal) NSString *depTerminal; // @synthesize depTerminal=_depTerminal;
@property(readonly, nonatomic, getter=surplusTime) NSString *surplusFlightTime; // @synthesize surplusFlightTime=_surplusFlightTime;
@property(readonly, nonatomic, getter=spentTime) NSString *spentFlightTime; // @synthesize spentFlightTime=_spentFlightTime;
@property(readonly, nonatomic, getter=arrTimePlan) NSString *aPtime; // @synthesize aPtime=_aPtime;
@property(readonly, nonatomic, getter=depTimePlan) NSString *dPtime; // @synthesize dPtime=_dPtime;
@property(readonly, nonatomic, getter=arrivalTime) NSString *arrTime; // @synthesize arrTime=_arrTime;
@property(readonly, nonatomic, getter=departTime) NSString *depTime; // @synthesize depTime=_depTime;
@property(readonly, nonatomic, getter=aAirportShort) NSString *arrAirportShort; // @synthesize arrAirportShort=_arrAirportShort;
@property(readonly, nonatomic, getter=dAirportShort) NSString *depAirportShort; // @synthesize depAirportShort=_depAirportShort;
@property(readonly, nonatomic, getter=aAirport) NSString *arrAirport; // @synthesize arrAirport=_arrAirport;
@property(readonly, nonatomic, getter=dAirport) NSString *depAirport; // @synthesize depAirport=_depAirport;
@property(readonly, nonatomic, getter=fligthDate) NSString *date; // @synthesize date=_date;
@property(readonly, nonatomic, getter=flightType) NSString *flightType; // @synthesize flightType=_flightType;
@property(readonly, nonatomic, getter=fNumber) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(readonly, nonatomic, getter=sAirline) NSString *flightShort; // @synthesize flightShort=_flightShort;
- (void).cxx_destruct;
- (id)convertSelfToStatusAttention;

@end

