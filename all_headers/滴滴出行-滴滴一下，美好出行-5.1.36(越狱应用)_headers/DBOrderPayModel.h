//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString;
@protocol Optional;

@interface DBOrderPayModel : TRBaseModel
{
    NSString<Optional> *_prepayid;
    NSString<Optional> *_partnerid;
    NSString<Optional> *_appid;
    NSString<Optional> *_nonce_str;
    NSString<Optional> *_package;
    NSString<Optional> *_timestamp;
    NSString<Optional> *_sign;
    NSString<Optional> *_prepay_status;
    NSString<Optional> *_prepay_message;
    NSString<Optional> *_pay_id;
    NSString<Optional> *_pay_string;
    NSString<Optional> *_select_channel;
}

@property(copy, nonatomic) NSString<Optional> *select_channel; // @synthesize select_channel=_select_channel;
@property(copy, nonatomic) NSString<Optional> *pay_string; // @synthesize pay_string=_pay_string;
@property(copy, nonatomic) NSString<Optional> *pay_id; // @synthesize pay_id=_pay_id;
@property(copy, nonatomic) NSString<Optional> *prepay_message; // @synthesize prepay_message=_prepay_message;
@property(copy, nonatomic) NSString<Optional> *prepay_status; // @synthesize prepay_status=_prepay_status;
@property(copy, nonatomic) NSString<Optional> *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString<Optional> *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString<Optional> *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString<Optional> *nonce_str; // @synthesize nonce_str=_nonce_str;
@property(copy, nonatomic) NSString<Optional> *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString<Optional> *partnerid; // @synthesize partnerid=_partnerid;
@property(copy, nonatomic) NSString<Optional> *prepayid; // @synthesize prepayid=_prepayid;
- (void).cxx_destruct;

@end

