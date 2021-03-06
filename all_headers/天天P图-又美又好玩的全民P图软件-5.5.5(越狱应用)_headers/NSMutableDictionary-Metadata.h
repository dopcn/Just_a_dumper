//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class CLLocation, NSDictionary, NSString;

@interface NSMutableDictionary (Metadata)
+ (id)defaultTiffDictionary;
+ (id)defaultTiff:(id)arg1 make:(id)arg2 model:(id)arg3;
+ (id)tiffDateTimeFormate;
+ (id)gpsDestLocationFromLocation:(id)arg1 saveDic:(id)arg2;
+ (id)gpsLocationFromLocation:(id)arg1 saveDic:(id)arg2;
+ (id)mutableDicitonaryFromDictionary:(id)arg1;
- (void)setIptcAddress:(id)arg1 city:(id)arg2 country:(id)arg3;
- (void)setIptcKeywords:(id)arg1;
- (void)setTiffDescription:(id)arg1;
- (void)setTiffMake:(id)arg1 model:(id)arg2 software:(id)arg3;
- (void)setExifPixelDimension:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *exifUserComment;
- (void)setImageOrientationToMetadata:(long long)arg1;
@property(nonatomic) double gpsImageHeading;
@property(retain, nonatomic) CLLocation *gpsDestLocation;
@property(retain, nonatomic) CLLocation *gpsLocation;
- (id)mutableDicitonaryValueForKey:(id)arg1;
@property(retain, nonatomic) NSDictionary *gpsDic;
@property(retain, nonatomic) NSDictionary *iptcDic;
@property(retain, nonatomic) NSDictionary *tiffDic;
@property(retain, nonatomic) NSMutableDictionary *exifMutableDic;
@property(retain, nonatomic) NSDictionary *exifDic;
- (id)initWithOriginMetadata:(id)arg1;
- (id)initWithImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

