//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNSLProductArrivalNoticeDTO : NSObject
{
    NSString *_mdmCityCode;
    NSString *_partnumber;
    NSString *_shopId;
    NSString *_custNum;
    long long _channel;
    NSString *_entrance;
    NSString *_email;
    NSString *_mobilePhone;
    long long _emailFlag;
    long long _smsFlag;
    long long _leterFlag;
    NSString *_pdType;
    NSString *_shoptType;
}

@property(copy, nonatomic) NSString *shoptType; // @synthesize shoptType=_shoptType;
@property(copy, nonatomic) NSString *pdType; // @synthesize pdType=_pdType;
@property(nonatomic) long long leterFlag; // @synthesize leterFlag=_leterFlag;
@property(nonatomic) long long smsFlag; // @synthesize smsFlag=_smsFlag;
@property(nonatomic) long long emailFlag; // @synthesize emailFlag=_emailFlag;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *entrance; // @synthesize entrance=_entrance;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *custNum; // @synthesize custNum=_custNum;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *partnumber; // @synthesize partnumber=_partnumber;
@property(copy, nonatomic) NSString *mdmCityCode; // @synthesize mdmCityCode=_mdmCityCode;
- (void).cxx_destruct;

@end

