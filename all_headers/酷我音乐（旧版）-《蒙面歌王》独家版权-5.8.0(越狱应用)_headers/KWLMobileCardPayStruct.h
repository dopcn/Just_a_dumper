//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol KWLMobileCardPayDelegate;

@interface KWLMobileCardPayStruct : NSObject
{
    int _cardType;
    int _money;
    id <KWLMobileCardPayDelegate> _target;
    id _userData;
    unsigned long long _userId;
    unsigned long long _sessionId;
    NSString *_loginName;
    NSString *_cardNo;
    NSString *_cardPwd;
    unsigned long long _customerid;
}

@property(nonatomic) unsigned long long customerid; // @synthesize customerid=_customerid;
@property(retain, nonatomic) NSString *cardPwd; // @synthesize cardPwd=_cardPwd;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(nonatomic) int money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) id <KWLMobileCardPayDelegate> target; // @synthesize target=_target;
- (void)clear;
- (void)dealloc;
- (id)initWith:(id)arg1 userData:(id)arg2;

@end

