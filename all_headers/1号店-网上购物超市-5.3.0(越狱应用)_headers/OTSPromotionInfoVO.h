//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString;

@interface OTSPromotionInfoVO : OTSValueObject
{
    _Bool _isShowSinglesDay;
    NSNumber *_conditionType;
    NSNumber *_conditionValue;
    NSNumber *_contentType;
    NSNumber *_subExtType;
    NSDate *_endDate;
    NSMutableArray *_giftList;
    NSNumber *_merchantId;
    NSString *_promotionMessage;
    NSDate *_startDate;
    NSNumber *_contentValue;
    NSString *_promotionH5Url;
    NSNumber *_promotionId;
}

+ (Class)classForCollectionProperty:(id)arg1;
@property(nonatomic) _Bool isShowSinglesDay; // @synthesize isShowSinglesDay=_isShowSinglesDay;
@property(retain, nonatomic) NSNumber *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSString *promotionH5Url; // @synthesize promotionH5Url=_promotionH5Url;
@property(retain, nonatomic) NSNumber *contentValue; // @synthesize contentValue=_contentValue;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *promotionMessage; // @synthesize promotionMessage=_promotionMessage;
@property(retain, nonatomic) NSNumber *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSMutableArray *giftList; // @synthesize giftList=_giftList;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSNumber *subExtType; // @synthesize subExtType=_subExtType;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *conditionValue; // @synthesize conditionValue=_conditionValue;
@property(retain, nonatomic) NSNumber *conditionType; // @synthesize conditionType=_conditionType;
- (void).cxx_destruct;

@end

