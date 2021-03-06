//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FControlObject, FLabelObject;

@interface FCellRouteModel : NSObject
{
    FControlObject *_objTripType;
    FControlObject *_objDepTime;
    FControlObject *_objDepAirport;
    FControlObject *_objArrowImg;
    FControlObject *_objStop;
    FControlObject *_objStopTime;
    FControlObject *_objArrTime;
    FControlObject *_objCrossDay;
    FControlObject *_objArrAirport;
    FControlObject *_objFlightInfo;
    FControlObject *_objVagueDepTimeArea;
    FControlObject *_objVagueArrTimeArea;
    FControlObject *_objDepCity;
    FControlObject *_objArrCity;
    FControlObject *_objDepTimeTitle;
    FControlObject *_objArrTimeTitle;
    FControlObject *_objTransitTip;
    FControlObject *_objFlightingTime;
    FControlObject *_objTransitCity;
    FControlObject *_objStartTraffic;
    FControlObject *_objEndTraffic;
    FControlObject *_objShare;
    FLabelObject *_objTakeOffStateDes;
    FControlObject *_objTakeOffTimeDes;
    struct CGRect _frameRouteView;
}

@property(retain, nonatomic) FControlObject *objTakeOffTimeDes; // @synthesize objTakeOffTimeDes=_objTakeOffTimeDes;
@property(retain, nonatomic) FLabelObject *objTakeOffStateDes; // @synthesize objTakeOffStateDes=_objTakeOffStateDes;
@property(retain, nonatomic) FControlObject *objShare; // @synthesize objShare=_objShare;
@property(retain, nonatomic) FControlObject *objEndTraffic; // @synthesize objEndTraffic=_objEndTraffic;
@property(retain, nonatomic) FControlObject *objStartTraffic; // @synthesize objStartTraffic=_objStartTraffic;
@property(retain, nonatomic) FControlObject *objTransitCity; // @synthesize objTransitCity=_objTransitCity;
@property(retain, nonatomic) FControlObject *objFlightingTime; // @synthesize objFlightingTime=_objFlightingTime;
@property(retain, nonatomic) FControlObject *objTransitTip; // @synthesize objTransitTip=_objTransitTip;
@property(retain, nonatomic) FControlObject *objArrTimeTitle; // @synthesize objArrTimeTitle=_objArrTimeTitle;
@property(retain, nonatomic) FControlObject *objDepTimeTitle; // @synthesize objDepTimeTitle=_objDepTimeTitle;
@property(retain, nonatomic) FControlObject *objArrCity; // @synthesize objArrCity=_objArrCity;
@property(retain, nonatomic) FControlObject *objDepCity; // @synthesize objDepCity=_objDepCity;
@property(retain, nonatomic) FControlObject *objVagueArrTimeArea; // @synthesize objVagueArrTimeArea=_objVagueArrTimeArea;
@property(retain, nonatomic) FControlObject *objVagueDepTimeArea; // @synthesize objVagueDepTimeArea=_objVagueDepTimeArea;
@property(retain, nonatomic) FControlObject *objFlightInfo; // @synthesize objFlightInfo=_objFlightInfo;
@property(retain, nonatomic) FControlObject *objArrAirport; // @synthesize objArrAirport=_objArrAirport;
@property(retain, nonatomic) FControlObject *objCrossDay; // @synthesize objCrossDay=_objCrossDay;
@property(retain, nonatomic) FControlObject *objArrTime; // @synthesize objArrTime=_objArrTime;
@property(retain, nonatomic) FControlObject *objStopTime; // @synthesize objStopTime=_objStopTime;
@property(retain, nonatomic) FControlObject *objStop; // @synthesize objStop=_objStop;
@property(retain, nonatomic) FControlObject *objArrowImg; // @synthesize objArrowImg=_objArrowImg;
@property(retain, nonatomic) FControlObject *objDepAirport; // @synthesize objDepAirport=_objDepAirport;
@property(retain, nonatomic) FControlObject *objDepTime; // @synthesize objDepTime=_objDepTime;
@property(retain, nonatomic) FControlObject *objTripType; // @synthesize objTripType=_objTripType;
@property(nonatomic) struct CGRect frameRouteView; // @synthesize frameRouteView=_frameRouteView;
- (void).cxx_destruct;
- (id)init;

@end

