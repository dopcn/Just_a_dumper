//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBasePerformanceBaseDo : NVBaseModel
{
    NSString *_name;
    long long _performanceID;
    NSString *_priceRange;
    NSString *_showTimeRange;
    NSString *_posterUrl;
    NSString *_link;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *posterUrl; // @synthesize posterUrl=_posterUrl;
@property(copy, nonatomic) NSString *showTimeRange; // @synthesize showTimeRange=_showTimeRange;
@property(copy, nonatomic) NSString *priceRange; // @synthesize priceRange=_priceRange;
@property(nonatomic) long long performanceID; // @synthesize performanceID=_performanceID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

