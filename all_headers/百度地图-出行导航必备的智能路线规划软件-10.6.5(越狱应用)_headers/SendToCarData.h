//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMToModuleWebPageData.h"

@class NSString;

@interface SendToCarData : BMToModuleWebPageData
{
    NSString *_poiUid;
    NSString *_poiName;
    NSString *_poiAddress;
    NSString *_cityName;
    NSString *_tel;
    struct BMPoint _poiPoint;
}

@property(copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) struct BMPoint poiPoint; // @synthesize poiPoint=_poiPoint;
@property(copy, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *poiUid; // @synthesize poiUid=_poiUid;
- (void).cxx_destruct;
- (void)dealloc;

@end

