//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPDBModel.h"

@class NSString;

@interface MttHomePageFeedsCircleLikeModel : LPDBModel
{
    _Bool _isLiked;
    NSString *_itemId;
    NSString *_qbId;
    double _timestamp;
}

+ (void)cleanModel;
+ (id)likeResultForFeedsRecords:(id)arg1;
+ (id)primaryKey;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(copy, nonatomic) NSString *qbId; // @synthesize qbId=_qbId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

