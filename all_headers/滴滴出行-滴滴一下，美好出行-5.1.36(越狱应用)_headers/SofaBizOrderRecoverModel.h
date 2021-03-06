//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SofaBaseModel.h"

@class NSDictionary, NSNumber, NSString;
@protocol Optional;

@interface SofaBizOrderRecoverModel : SofaBaseModel
{
    NSString<Optional> *_orderId;
    NSString<Optional> *_message;
    NSNumber<Optional> *_type;
    NSDictionary<Optional> *_extra;
    NSString<Optional> *_title;
    NSString<Optional> *_confirmTitle;
    NSString<Optional> *_cancelTitle;
}

@property(copy, nonatomic) NSString<Optional> *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString<Optional> *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDictionary<Optional> *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (unsigned long long)recOrderType;
- (id)getOrderId:(id)arg1;
- (id)initWithOrderRecModel:(id)arg1;

@end

