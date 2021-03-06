//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseNearByWiFiItem : NVBaseModel
{
    long long _type;
    NSString *_detailInfoSchema;
    NSString *_picUrl;
    long long _tagType;
    NSArray *_tags;
    NSString *_subTitle;
    NSString *_mainTitle;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *detailInfoSchema; // @synthesize detailInfoSchema=_detailInfoSchema;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

