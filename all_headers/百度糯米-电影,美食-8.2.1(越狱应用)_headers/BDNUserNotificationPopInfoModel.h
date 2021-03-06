//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface BDNUserNotificationPopInfoModel : JSONModel
{
    NSNumber<Optional> *_infoId;
    NSString<Optional> *_title;
    NSString<Optional> *_content;
    NSNumber<Optional> *_startTime;
    NSNumber<Optional> *_endTime;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSNumber<Optional> *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSNumber<Optional> *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber<Optional> *infoId; // @synthesize infoId=_infoId;
- (void).cxx_destruct;
- (id)safeInfoId;
- (_Bool)isMarketingInfoInTime;

@end

