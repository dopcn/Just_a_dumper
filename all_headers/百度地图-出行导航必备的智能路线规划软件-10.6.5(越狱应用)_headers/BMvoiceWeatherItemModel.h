//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface BMvoiceWeatherItemModel : JSONModel
{
    NSString *_date;
    NSString *_weatherIcon;
    NSString *_maxTemperature;
    NSString *_minTemperature;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *minTemperature; // @synthesize minTemperature=_minTemperature;
@property(retain, nonatomic) NSString *maxTemperature; // @synthesize maxTemperature=_maxTemperature;
@property(retain, nonatomic) NSString *weatherIcon; // @synthesize weatherIcon=_weatherIcon;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

