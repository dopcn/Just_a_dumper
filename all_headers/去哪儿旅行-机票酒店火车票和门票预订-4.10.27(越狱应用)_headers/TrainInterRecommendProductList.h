//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class TrainInterRecommendProduct;

@interface TrainInterRecommendProductList : SearchNetResult
{
    TrainInterRecommendProduct *_flightRecommend;
    TrainInterRecommendProduct *_europePassRecommend;
}

@property(retain, nonatomic) TrainInterRecommendProduct *europePassRecommend; // @synthesize europePassRecommend=_europePassRecommend;
@property(retain, nonatomic) TrainInterRecommendProduct *flightRecommend; // @synthesize flightRecommend=_flightRecommend;
- (void).cxx_destruct;

@end

