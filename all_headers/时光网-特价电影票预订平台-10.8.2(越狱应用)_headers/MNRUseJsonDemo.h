//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBRequest.h"

@class NSDictionary, NSNumber, NSString;

@interface MNRUseJsonDemo : MNBRequest
{
    NSString *_stringMovieId;
    NSNumber *_numberLocaitonId;
    NSDictionary *_dicMovieBasic;
    NSDictionary *_dicRelatedGoods;
    NSDictionary *_dicBoxOffice;
    NSDictionary *_dicAd;
}

@property(retain, nonatomic) NSDictionary *dicAd; // @synthesize dicAd=_dicAd;
@property(retain, nonatomic) NSDictionary *dicBoxOffice; // @synthesize dicBoxOffice=_dicBoxOffice;
@property(retain, nonatomic) NSDictionary *dicRelatedGoods; // @synthesize dicRelatedGoods=_dicRelatedGoods;
@property(retain, nonatomic) NSDictionary *dicMovieBasic; // @synthesize dicMovieBasic=_dicMovieBasic;
@property(retain, nonatomic) NSNumber *numberLocaitonId; // @synthesize numberLocaitonId=_numberLocaitonId;
@property(retain, nonatomic) NSString *stringMovieId; // @synthesize stringMovieId=_stringMovieId;
- (void).cxx_destruct;
- (void)handleRequestResult;
- (long long)cacheTimeInSeconds;
- (long long)requestMethod;
- (id)requestArgument;
- (id)requestUrl;

@end

