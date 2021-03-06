//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMBaseEntity.h"

@class NSString;

@interface CMContactBankEntity : CMBaseEntity
{
    long long _bankId;
    long long _cardType;
    NSString *_contactNum;
    long long _contactType;
    NSString *_contactDes;
    long long _contactID;
    NSString *_contactTitle;
    NSString *_msgTemplate;
    long long _sequence;
}

+ (id)getPrimaryKey;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *msgTemplate; // @synthesize msgTemplate=_msgTemplate;
@property(copy, nonatomic) NSString *contactTitle; // @synthesize contactTitle=_contactTitle;
@property(nonatomic) long long contactID; // @synthesize contactID=_contactID;
@property(copy, nonatomic) NSString *contactDes; // @synthesize contactDes=_contactDes;
@property(nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(copy, nonatomic) NSString *contactNum; // @synthesize contactNum=_contactNum;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long bankId; // @synthesize bankId=_bankId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

