//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomShareDataProvider.h"

@class UCCityInfoNode, UCWeatherDataNode, UIImage;

@interface WeatherShareDataProvider : CustomShareDataProvider
{
    UCWeatherDataNode *_weatherInfo;
    UIImage *_thumbImage;
    UCCityInfoNode *_cityInfo;
}

@property(retain, nonatomic) UCCityInfoNode *cityInfo; // @synthesize cityInfo=_cityInfo;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UCWeatherDataNode *weatherInfo; // @synthesize weatherInfo=_weatherInfo;
- (CDUnknownBlockType)shareCallBack;
- (id)item;
- (_Bool)urlIsNeedEncryptForActiveKey:(id)arg1;
- (id)thumbImageForActiveKey:(id)arg1;
- (id)contentForActiveKey:(id)arg1 limitLength:(long long)arg2;
- (id)titleForActiveKey:(id)arg1 limitLength:(long long)arg2;
- (id)getCityName;
- (id)urlForActiveKey:(id)arg1;
- (void)dealloc;

@end

