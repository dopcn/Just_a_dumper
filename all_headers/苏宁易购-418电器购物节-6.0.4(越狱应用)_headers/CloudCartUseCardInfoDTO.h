//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CloudCartUseCardInfoDTO : NSObject
{
    NSString *_cardType;
    NSString *_giftCardType;
    NSString *_cardNo;
    NSString *_usedAmount;
    NSString *_availableAmount;
    NSString *_expireTime;
    NSString *_usingTime;
}

@property(retain, nonatomic) NSString *usingTime; // @synthesize usingTime=_usingTime;
@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(retain, nonatomic) NSString *usedAmount; // @synthesize usedAmount=_usedAmount;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *giftCardType; // @synthesize giftCardType=_giftCardType;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

@end

