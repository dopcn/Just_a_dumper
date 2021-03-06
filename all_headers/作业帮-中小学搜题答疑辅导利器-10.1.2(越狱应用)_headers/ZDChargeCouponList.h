//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString, ZDChargeCouponListButtonItem;
@protocol Optional, ZDChargeCouponListBannerItem, ZDChargeCouponListDataItem;

@interface ZDChargeCouponList : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _status;
    NSString *_msg;
    ZDChargeCouponListButtonItem *_button;
    NSArray<ZDChargeCouponListBannerItem> *_banner;
    NSArray<ZDChargeCouponListDataItem> *_data;
}

@property(retain, nonatomic) NSArray<ZDChargeCouponListDataItem> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSArray<ZDChargeCouponListBannerItem> *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) ZDChargeCouponListButtonItem *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

