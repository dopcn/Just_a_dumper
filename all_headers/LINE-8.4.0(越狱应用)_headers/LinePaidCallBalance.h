//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LinePaidCallBalance : NSObject
{
    long long __productType;
    NSString *__productName;
    NSString *__unit;
    int __limitedPaidBalance;
    int __limitedFreeBalance;
    int __unlimitedPaidBalance;
    int __unlimitedFreeBalance;
    long long __startTime;
    long long __endTime;
    _Bool __autopayEnabled;
    struct {
        unsigned int productType:1;
        unsigned int productName:1;
        unsigned int unit:1;
        unsigned int limitedPaidBalance:1;
        unsigned int limitedFreeBalance:1;
        unsigned int unlimitedPaidBalance:1;
        unsigned int unlimitedFreeBalance:1;
        unsigned int startTime:1;
        unsigned int endTime:1;
        unsigned int autopayEnabled:1;
    } __isSet;
}

@property(nonatomic, getter=isAutopayEnabled) _Bool autopayEnabled; // @synthesize autopayEnabled=__autopayEnabled;
@property(nonatomic) long long endTime; // @synthesize endTime=__endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=__startTime;
@property(nonatomic) int unlimitedFreeBalance; // @synthesize unlimitedFreeBalance=__unlimitedFreeBalance;
@property(nonatomic) int unlimitedPaidBalance; // @synthesize unlimitedPaidBalance=__unlimitedPaidBalance;
@property(nonatomic) int limitedFreeBalance; // @synthesize limitedFreeBalance=__limitedFreeBalance;
@property(nonatomic) int limitedPaidBalance; // @synthesize limitedPaidBalance=__limitedPaidBalance;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=__unit;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=__productName;
@property(nonatomic) long long productType; // @synthesize productType=__productType;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

