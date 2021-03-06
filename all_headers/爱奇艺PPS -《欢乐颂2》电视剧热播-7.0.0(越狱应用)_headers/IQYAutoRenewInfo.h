//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IQYPayFirstDutInfo, NSArray, NSMutableArray, NSString;

@interface IQYAutoRenewInfo : NSObject
{
    NSArray *_payTypeInfo;
    NSString *_price;
    NSString *_doPayTime;
    NSString *_deadline;
    NSString *_html;
    NSString *_uid;
    NSString *_status;
    NSString *_iconUrl;
    NSString *_statusTip;
    NSString *_propaPicUrl;
    NSString *_originalDutPrice;
    NSString *_ruleTips;
    NSString *_productName;
    NSMutableArray *_payDutTypeInfos;
    NSArray *_supportToAddPayInfos;
    IQYPayFirstDutInfo *_firstDutInfo;
}

+ (id)parseAddPayInfoForArray:(id)arg1;
+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) IQYPayFirstDutInfo *firstDutInfo; // @synthesize firstDutInfo=_firstDutInfo;
@property(retain, nonatomic) NSArray *supportToAddPayInfos; // @synthesize supportToAddPayInfos=_supportToAddPayInfos;
@property(retain, nonatomic) NSMutableArray *payDutTypeInfos; // @synthesize payDutTypeInfos=_payDutTypeInfos;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *ruleTips; // @synthesize ruleTips=_ruleTips;
@property(retain, nonatomic) NSString *originalDutPrice; // @synthesize originalDutPrice=_originalDutPrice;
@property(retain, nonatomic) NSString *propaPicUrl; // @synthesize propaPicUrl=_propaPicUrl;
@property(retain, nonatomic) NSString *statusTip; // @synthesize statusTip=_statusTip;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) NSString *deadline; // @synthesize deadline=_deadline;
@property(retain, nonatomic) NSString *doPayTime; // @synthesize doPayTime=_doPayTime;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSArray *payTypeInfo; // @synthesize payTypeInfo=_payTypeInfo;
- (void).cxx_destruct;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

