//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@interface NVModelBaseMtRatingModel : NVBaseModel
{
    long long _rateCount;
    double _satisfaction;
    double _rating;
    long long _subCount;
}

+ (id)metaInfo;
@property(nonatomic) long long subCount; // @synthesize subCount=_subCount;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) double satisfaction; // @synthesize satisfaction=_satisfaction;
@property(nonatomic) long long rateCount; // @synthesize rateCount=_rateCount;
- (id)transformToGCMTDealReview;

@end

