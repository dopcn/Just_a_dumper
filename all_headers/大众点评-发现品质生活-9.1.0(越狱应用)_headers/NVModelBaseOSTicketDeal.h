//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseOSTicketDeal : NVBaseModel
{
    _Bool _isOfficial;
    NSArray *_titleExtInfos;
    NSString *_returnInfo;
    NSString *_ticketType;
    long long _multiChoiceFlag;
    long long _oneChoiceFlag;
    long long _saleCount;
    double _marketPrice;
    NSString *_buyUrl;
    NSArray *_infoList;
    NSArray *_promoTagList;
    NSString *_titleTag;
    double _price;
    NSString *_ticketTitle;
    NSString *_url;
    long long _dealId;
}

+ (id)metaInfo;
@property(nonatomic) long long dealId; // @synthesize dealId=_dealId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *ticketTitle; // @synthesize ticketTitle=_ticketTitle;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *titleTag; // @synthesize titleTag=_titleTag;
@property(retain, nonatomic) NSArray *promoTagList; // @synthesize promoTagList=_promoTagList;
@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList=_infoList;
@property(copy, nonatomic) NSString *buyUrl; // @synthesize buyUrl=_buyUrl;
@property(nonatomic) double marketPrice; // @synthesize marketPrice=_marketPrice;
@property(nonatomic) long long saleCount; // @synthesize saleCount=_saleCount;
@property(nonatomic) long long oneChoiceFlag; // @synthesize oneChoiceFlag=_oneChoiceFlag;
@property(nonatomic) long long multiChoiceFlag; // @synthesize multiChoiceFlag=_multiChoiceFlag;
@property(nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(copy, nonatomic) NSString *ticketType; // @synthesize ticketType=_ticketType;
@property(copy, nonatomic) NSString *returnInfo; // @synthesize returnInfo=_returnInfo;
@property(retain, nonatomic) NSArray *titleExtInfos; // @synthesize titleExtInfos=_titleExtInfos;
- (void).cxx_destruct;

@end

