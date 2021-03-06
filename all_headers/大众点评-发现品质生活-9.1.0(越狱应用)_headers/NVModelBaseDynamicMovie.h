//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVModelBaseMovie.h"

@class NSString;

@interface NVModelBaseDynamicMovie : NVModelBaseMovie
{
    _Bool _goToMovieDetail;
    _Bool _hasMovieShow;
    NSString *_favText;
    NSString *_minPrice;
    long long _showCountRemained;
    long long _cinemaCountRemained;
    long long _postFlag;
    NSString *_info;
}

+ (id)metaInfo;
@property(nonatomic) _Bool hasMovieShow; // @synthesize hasMovieShow=_hasMovieShow;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) long long postFlag; // @synthesize postFlag=_postFlag;
@property(nonatomic) long long cinemaCountRemained; // @synthesize cinemaCountRemained=_cinemaCountRemained;
@property(nonatomic) long long showCountRemained; // @synthesize showCountRemained=_showCountRemained;
@property(copy, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(nonatomic) _Bool goToMovieDetail; // @synthesize goToMovieDetail=_goToMovieDetail;
@property(copy, nonatomic) NSString *favText; // @synthesize favText=_favText;
- (void).cxx_destruct;

@end

