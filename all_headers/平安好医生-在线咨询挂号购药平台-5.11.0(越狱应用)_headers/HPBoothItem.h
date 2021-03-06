//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseModel.h"

@class NSArray, NSString;

@interface HPBoothItem : PDBaseModel
{
    _Bool _bannerAd;
    long long _itemID;
    NSString *_title;
    NSString *_status;
    NSString *_summary;
    NSString *_bizCode;
    NSString *_boothContent;
    NSString *_operation;
    NSString *_operationContent;
    NSString *_showType;
    NSString *_imgUrl;
    long long _serialNo;
    double _timingOnDate;
    double _timingOffDate;
    NSArray *_ext;
}

+ (id)extJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)boothItemWithResp:(id)arg1;
@property(nonatomic, getter=isBannerAd) _Bool bannerAd; // @synthesize bannerAd=_bannerAd;
@property(retain, nonatomic) NSArray *ext; // @synthesize ext=_ext;
@property(nonatomic) double timingOffDate; // @synthesize timingOffDate=_timingOffDate;
@property(nonatomic) double timingOnDate; // @synthesize timingOnDate=_timingOnDate;
@property(nonatomic) long long serialNo; // @synthesize serialNo=_serialNo;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *operationContent; // @synthesize operationContent=_operationContent;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *boothContent; // @synthesize boothContent=_boothContent;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (_Bool)isEnterpriseItem;

@end

