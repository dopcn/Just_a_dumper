//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CTFlightOverKeyboardViewModel : NSObject
{
    NSString *_titleContent;
    NSString *_taxNumber;
    NSString *_titleType;
    long long _passengerInforID;
    long long _infoId;
    NSString *_socialCreditCode;
    NSString *_companyAddress;
    NSString *_companyTelephone;
    NSString *_bankName;
    NSString *_bankAccount;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *bankAccount; // @synthesize bankAccount=_bankAccount;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *companyTelephone; // @synthesize companyTelephone=_companyTelephone;
@property(copy, nonatomic) NSString *companyAddress; // @synthesize companyAddress=_companyAddress;
@property(copy, nonatomic) NSString *socialCreditCode; // @synthesize socialCreditCode=_socialCreditCode;
@property(nonatomic) long long infoId; // @synthesize infoId=_infoId;
@property(nonatomic) long long passengerInforID; // @synthesize passengerInforID=_passengerInforID;
@property(copy, nonatomic) NSString *titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *taxNumber; // @synthesize taxNumber=_taxNumber;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
- (void).cxx_destruct;
- (id)init;

@end

