//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface ODSFatigueDrivingModel : JSONModel
{
    NSNumber<Optional> *_dayLimitDuration;
    NSNumber<Optional> *_nightLimitDuration;
    NSNumber<Optional> *_mixDuration;
    NSNumber<Optional> *_day;
    NSNumber<Optional> *_night;
    NSNumber<Optional> *_restDuration;
    NSNumber<Optional> *_conversionFactor;
    NSNumber<Optional> *_updatePersentTimeSpan;
    NSNumber<Optional> *_horizontalAccuracy;
    NSNumber<Optional> *_speed;
}

@property(copy, nonatomic) NSNumber<Optional> *speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSNumber<Optional> *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(copy, nonatomic) NSNumber<Optional> *updatePersentTimeSpan; // @synthesize updatePersentTimeSpan=_updatePersentTimeSpan;
@property(copy, nonatomic) NSNumber<Optional> *conversionFactor; // @synthesize conversionFactor=_conversionFactor;
@property(copy, nonatomic) NSNumber<Optional> *restDuration; // @synthesize restDuration=_restDuration;
@property(copy, nonatomic) NSNumber<Optional> *night; // @synthesize night=_night;
@property(copy, nonatomic) NSNumber<Optional> *day; // @synthesize day=_day;
@property(copy, nonatomic) NSNumber<Optional> *mixDuration; // @synthesize mixDuration=_mixDuration;
@property(copy, nonatomic) NSNumber<Optional> *nightLimitDuration; // @synthesize nightLimitDuration=_nightLimitDuration;
@property(copy, nonatomic) NSNumber<Optional> *dayLimitDuration; // @synthesize dayLimitDuration=_dayLimitDuration;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

