//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface CHouseInfo : NSObject <NSCoding>
{
    _Bool _has_agent;
    _Bool _isHui;
    _Bool _hasRead;
    float _avgPrice;
    NSString *_fId;
    NSString *_hid;
    NSString *_thumbUrl;
    NSString *_fcover;
    NSString *_name;
    NSString *_address;
    NSString *_openDate;
    NSString *_avgPriceNew;
    NSString *_pricerange;
    NSString *_priceStr;
    double _latitude;
    double _longitude;
    NSString *_discount;
    NSString *_direction;
    NSMutableArray *_tagArray;
    long long _signedNum;
    long long _wantGroupNum;
    long long _isTXDiscnt;
    long long _saleStatus;
    long long _jiejing;
    NSString *_price_pre;
    NSString *_price_value;
    NSString *_price_unit;
    long long _topLeftIconType;
    NSString *_murl;
    NSString *_businessArea;
}

@property(copy, nonatomic) NSString *businessArea; // @synthesize businessArea=_businessArea;
@property(copy, nonatomic) NSString *murl; // @synthesize murl=_murl;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(nonatomic) long long topLeftIconType; // @synthesize topLeftIconType=_topLeftIconType;
@property(nonatomic) _Bool isHui; // @synthesize isHui=_isHui;
@property(nonatomic) _Bool has_agent; // @synthesize has_agent=_has_agent;
@property(copy, nonatomic) NSString *price_unit; // @synthesize price_unit=_price_unit;
@property(copy, nonatomic) NSString *price_value; // @synthesize price_value=_price_value;
@property(copy, nonatomic) NSString *price_pre; // @synthesize price_pre=_price_pre;
@property(nonatomic) long long jiejing; // @synthesize jiejing=_jiejing;
@property(nonatomic) long long saleStatus; // @synthesize saleStatus=_saleStatus;
@property(nonatomic) long long isTXDiscnt; // @synthesize isTXDiscnt=_isTXDiscnt;
@property(nonatomic) long long wantGroupNum; // @synthesize wantGroupNum=_wantGroupNum;
@property(nonatomic) long long signedNum; // @synthesize signedNum=_signedNum;
@property(retain, nonatomic) NSMutableArray *tagArray; // @synthesize tagArray=_tagArray;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *priceStr; // @synthesize priceStr=_priceStr;
@property(copy, nonatomic) NSString *pricerange; // @synthesize pricerange=_pricerange;
@property(copy, nonatomic) NSString *avgPriceNew; // @synthesize avgPriceNew=_avgPriceNew;
@property(copy, nonatomic) NSString *openDate; // @synthesize openDate=_openDate;
@property(nonatomic) float avgPrice; // @synthesize avgPrice=_avgPrice;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *fcover; // @synthesize fcover=_fcover;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(copy, nonatomic) NSString *fId; // @synthesize fId=_fId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

