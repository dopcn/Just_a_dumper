//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPILiveRedEnvelopeConfiguration : NSObject
{
    _Bool _isOn;
    long long _minCoins;
    long long _maxCoins;
    long long _minCount;
    long long _maxCount;
    NSString *_defaultTip;
    long long _giftID;
    NSString *_giftName;
    NSString *_giftDescription;
    NSString *_giftPicURL;
    long long _giftOffset;
}

@property(nonatomic) long long giftOffset; // @synthesize giftOffset=_giftOffset;
@property(retain, nonatomic) NSString *giftPicURL; // @synthesize giftPicURL=_giftPicURL;
@property(retain, nonatomic) NSString *giftDescription; // @synthesize giftDescription=_giftDescription;
@property(retain, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) long long giftID; // @synthesize giftID=_giftID;
@property(retain, nonatomic) NSString *defaultTip; // @synthesize defaultTip=_defaultTip;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(nonatomic) long long maxCoins; // @synthesize maxCoins=_maxCoins;
@property(nonatomic) long long minCoins; // @synthesize minCoins=_minCoins;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

