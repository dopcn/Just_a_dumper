//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface YDAd : NSObject
{
    _Bool _isBootAd;
    _Bool _isDownloading;
    NSString *_adId;
    NSString *_clickUrl;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_advType;
    NSString *_entity;
    NSString *_memberId;
    NSString *_closeLink;
    NSString *_monitorUrl;
    NSString *_monitorClickUrl;
    NSString *_imageUrl;
    NSString *_mimeType;
    NSString *_title;
    NSString *_desc;
    NSString *_landingUrl;
    NSString *_weight;
    NSString *_modTime;
    NSArray *_monitorImprUrls;
    NSArray *_monitorClickUrls;
    NSString *_imgFileName;
}

@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) NSString *imgFileName; // @synthesize imgFileName=_imgFileName;
@property(retain, nonatomic) NSArray *monitorClickUrls; // @synthesize monitorClickUrls=_monitorClickUrls;
@property(retain, nonatomic) NSArray *monitorImprUrls; // @synthesize monitorImprUrls=_monitorImprUrls;
@property(copy, nonatomic) NSString *modTime; // @synthesize modTime=_modTime;
@property(copy, nonatomic) NSString *weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *landingUrl; // @synthesize landingUrl=_landingUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) _Bool isBootAd; // @synthesize isBootAd=_isBootAd;
@property(retain, nonatomic) NSString *monitorClickUrl; // @synthesize monitorClickUrl=_monitorClickUrl;
@property(retain, nonatomic) NSString *monitorUrl; // @synthesize monitorUrl=_monitorUrl;
@property(retain, nonatomic) NSString *closeLink; // @synthesize closeLink=_closeLink;
@property(retain, nonatomic) NSString *memberId; // @synthesize memberId=_memberId;
@property(retain, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSString *advType; // @synthesize advType=_advType;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (void)closeAd;
- (_Bool)isAvailableAtDate:(id)arg1;
- (_Bool)isShownTodayOrTomorrow;
- (void)parseFormDictionary:(id)arg1;
- (id)getDictionary;
- (_Bool)isImageData:(id)arg1;
- (void)setAndParseImageUrl:(id)arg1;
- (void)logClick;
- (void)logShown;
- (void)logSelfShown;
- (_Bool)syncDownloadImage;
- (void)asyncDownloadImage;
- (id)imagePath;
- (_Bool)imageDownloaded;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

