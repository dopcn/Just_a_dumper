//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SWeatherEngineDelegate <NSObject>
- (void)businessAudioRequestCompleted:(_Bool)arg1 dicData:(NSDictionary *)arg2;
- (void)cityAudioRequestCompleted:(_Bool)arg1 cityCode:(NSString *)arg2 dicData:(NSDictionary *)arg3;
@end

