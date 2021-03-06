//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSNumber, NSString;

@interface SellerPayTipsInfo : NSObject
{
    _Bool _fromStock;
    unsigned long long _orderId;
    long long _buyer;
    long long _buyerYNum;
    NSString *_buyerNick;
    NSString *_message;
    NSString *_passport;
    NSString *_sign;
    NSString *_avator;
    NSAttributedString *_text;
    long long _position;
    long long _showTemplate;
    long long _priority;
    double _duration;
    NSString *_action;
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long showTemplate; // @synthesize showTemplate=_showTemplate;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(nonatomic) _Bool fromStock; // @synthesize fromStock=_fromStock;
@property(retain, nonatomic) NSString *avator; // @synthesize avator=_avator;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *passport; // @synthesize passport=_passport;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *buyerNick; // @synthesize buyerNick=_buyerNick;
@property(nonatomic) long long buyerYNum; // @synthesize buyerYNum=_buyerYNum;
@property(nonatomic) long long buyer; // @synthesize buyer=_buyer;
@property(nonatomic) unsigned long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSNumber *isPaid;

@end

