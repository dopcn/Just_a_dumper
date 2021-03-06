//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMRankListHttpRequest.h"

@class NSArray, NSString;
@protocol SNPMRankListGoodRateRequestDelegate;

@interface SNPMRankListGoodRateRequest : SNPMRankListHttpRequest
{
    id <SNPMRankListGoodRateRequestDelegate> _requestDelegate;
    NSArray *_goodsIdArray;
    NSString *_goodRates;
    NSArray *_products;
}

@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSString *goodRates; // @synthesize goodRates=_goodRates;
@property(retain, nonatomic) NSArray *goodsIdArray; // @synthesize goodsIdArray=_goodsIdArray;
@property(nonatomic) __weak id <SNPMRankListGoodRateRequestDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
- (void).cxx_destruct;
- (void)requestDidFailed;
- (void)requestDidCompleted;
- (id)requestUrl;
- (void)startWithProducts:(id)arg1;
- (void)startWithGoodsIds:(id)arg1;

@end

