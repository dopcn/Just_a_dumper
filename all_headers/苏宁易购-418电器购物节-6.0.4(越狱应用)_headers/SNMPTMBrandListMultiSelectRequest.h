//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMPTMBrandBaseRequest.h"

@class NSString;

@interface SNMPTMBrandListMultiSelectRequest : SNMPTMBrandBaseRequest
{
    NSString *_collectId;
    NSString *_chanCode;
    NSString *_cityCode;
    long long _pageSize;
    long long _pageNum;
    NSString *_sortType;
    NSString *_targetUserParam;
    NSString *_categParam;
    NSString *_sizeParam;
    NSString *_colorParam;
    NSString *_custNum;
    NSString *_grppurId;
    NSString *_callback;
}

@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *grppurId; // @synthesize grppurId=_grppurId;
@property(copy, nonatomic) NSString *custNum; // @synthesize custNum=_custNum;
@property(copy, nonatomic) NSString *colorParam; // @synthesize colorParam=_colorParam;
@property(copy, nonatomic) NSString *sizeParam; // @synthesize sizeParam=_sizeParam;
@property(copy, nonatomic) NSString *categParam; // @synthesize categParam=_categParam;
@property(copy, nonatomic) NSString *targetUserParam; // @synthesize targetUserParam=_targetUserParam;
@property(copy, nonatomic) NSString *sortType; // @synthesize sortType=_sortType;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *chanCode; // @synthesize chanCode=_chanCode;
@property(copy, nonatomic) NSString *collectId; // @synthesize collectId=_collectId;
- (void).cxx_destruct;
- (id)requestUrl;
- (void)requestDidCompleted;
- (void)commomInit;
- (void)recoverState;
- (id)initWithSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;

@end

