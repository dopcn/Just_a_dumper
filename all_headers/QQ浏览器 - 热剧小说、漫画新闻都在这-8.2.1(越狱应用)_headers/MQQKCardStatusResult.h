//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQKCardStatusResult : NSObject
{
    _Bool _isKingCard;
    NSString *_phoneNumber;
    long long _kCardType;
    long long _kCardStatus;
}

@property(nonatomic) long long kCardStatus; // @synthesize kCardStatus=_kCardStatus;
@property(nonatomic) long long kCardType; // @synthesize kCardType=_kCardType;
@property(nonatomic) _Bool isKingCard; // @synthesize isKingCard=_isKingCard;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)dealloc;

@end

