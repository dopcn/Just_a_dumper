//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseWeddingTuanGouList : NVBaseModel
{
    _Bool _isEnd;
    _Bool _overdueAutoRefund;
    _Bool _isAutoRefund;
    _Bool _hasHrefFlag;
    _Bool _rectangleOrSquareFlag;
    long long _picHeight;
    long long _picWidth;
    NSString *_hrefContent;
    NSArray *_list;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool rectangleOrSquareFlag; // @synthesize rectangleOrSquareFlag=_rectangleOrSquareFlag;
@property(nonatomic) _Bool hasHrefFlag; // @synthesize hasHrefFlag=_hasHrefFlag;
@property(copy, nonatomic) NSString *hrefContent; // @synthesize hrefContent=_hrefContent;
@property(nonatomic) _Bool isAutoRefund; // @synthesize isAutoRefund=_isAutoRefund;
@property(nonatomic) _Bool overdueAutoRefund; // @synthesize overdueAutoRefund=_overdueAutoRefund;
@property(nonatomic) long long picWidth; // @synthesize picWidth=_picWidth;
@property(nonatomic) long long picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
- (void).cxx_destruct;

@end

