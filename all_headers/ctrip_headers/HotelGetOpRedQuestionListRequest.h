//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelOpRedUserValue, NSString, RequestHead;

@interface HotelGetOpRedQuestionListRequest : CTBusinessBean
{
    _Bool _generalQuestion;
    RequestHead *_head;
    NSString *_bu;
    long long _orderId;
    NSString *_keyword;
    long long _sessionId;
    HotelOpRedUserValue *_value;
    NSString *_caseValue;
    NSString *_preSaleInfo;
}

@property(copy, nonatomic) NSString *preSaleInfo; // @synthesize preSaleInfo=_preSaleInfo;
@property(nonatomic) _Bool generalQuestion; // @synthesize generalQuestion=_generalQuestion;
@property(copy, nonatomic) NSString *caseValue; // @synthesize caseValue=_caseValue;
@property(retain, nonatomic) HotelOpRedUserValue *value; // @synthesize value=_value;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *bu; // @synthesize bu=_bu;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

