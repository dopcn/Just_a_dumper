//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseFitnessCourse : NVBaseModel
{
    NSArray *_promoList;
    NSString *_stockStatus;
    NSString *_price;
    NSString *_subName;
    NSString *_name;
    NSString *_url;
    NSString *_endTime;
    NSString *_startTime;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *stockStatus; // @synthesize stockStatus=_stockStatus;
@property(retain, nonatomic) NSArray *promoList; // @synthesize promoList=_promoList;
- (void).cxx_destruct;

@end

