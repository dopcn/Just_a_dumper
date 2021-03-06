//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, RACSignal;

@interface FTKFlightFilterParameter : NSObject
{
    _Bool _priceFilterEnabled;
    _Bool _departTimeFilterEnabled;
    _Bool _multiFilterEnabled;
    long long _priceFilter;
    long long _departTimeFilter;
    NSArray *_airLines;
    NSArray *_departTimeRanges;
    NSArray *_inboundDepartTimeRanges;
    NSArray *_departureAirport;
    NSArray *_arrivalAirport;
    NSArray *_flightTypeChoices;
    RACSignal *_valueChangedSignal;
}

+ (id)parameter;
@property(retain, nonatomic) RACSignal *valueChangedSignal; // @synthesize valueChangedSignal=_valueChangedSignal;
@property(retain, nonatomic) NSArray *flightTypeChoices; // @synthesize flightTypeChoices=_flightTypeChoices;
@property(retain, nonatomic) NSArray *arrivalAirport; // @synthesize arrivalAirport=_arrivalAirport;
@property(retain, nonatomic) NSArray *departureAirport; // @synthesize departureAirport=_departureAirport;
@property(retain, nonatomic) NSArray *inboundDepartTimeRanges; // @synthesize inboundDepartTimeRanges=_inboundDepartTimeRanges;
@property(retain, nonatomic) NSArray *departTimeRanges; // @synthesize departTimeRanges=_departTimeRanges;
@property(retain, nonatomic) NSArray *airLines; // @synthesize airLines=_airLines;
@property(nonatomic) _Bool multiFilterEnabled; // @synthesize multiFilterEnabled=_multiFilterEnabled;
@property(nonatomic) _Bool departTimeFilterEnabled; // @synthesize departTimeFilterEnabled=_departTimeFilterEnabled;
@property(nonatomic) long long departTimeFilter; // @synthesize departTimeFilter=_departTimeFilter;
@property(nonatomic) _Bool priceFilterEnabled; // @synthesize priceFilterEnabled=_priceFilterEnabled;
@property(nonatomic) long long priceFilter; // @synthesize priceFilter=_priceFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long sortType;
@property(readonly, nonatomic) NSString *filterTypeString;
@property(readonly, nonatomic) NSString *arrivalAirportString;
@property(readonly, nonatomic) NSString *departureAirportString;
@property(readonly, nonatomic) NSString *departTimeRangesString;
@property(readonly, nonatomic) NSString *airLinesString;
- (void)bindMultiFilterSignal;
- (void)resetValueChangedSignal;
- (void)resetFilterParameter;
- (void)resetParameter;
- (void)updateParameterWithSortType:(unsigned long long)arg1;
- (id)init;

@end

