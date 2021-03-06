//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface TPKPOIFeedBack : SAKDomainObject
{
    _Bool _showSegmentReviewList;
    double _score;
    long long _poiID;
    NSString *_poiName;
    long long _reviewCount;
    NSString *_reviewCountInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *reviewCountInfo; // @synthesize reviewCountInfo=_reviewCountInfo;
@property(nonatomic) long long reviewCount; // @synthesize reviewCount=_reviewCount;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) _Bool showSegmentReviewList; // @synthesize showSegmentReviewList=_showSegmentReviewList;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)convertToHPXTabSegmentTitle;

@end

