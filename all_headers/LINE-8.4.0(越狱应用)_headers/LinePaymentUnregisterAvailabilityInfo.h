//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LinePaymentUnregisterAvailabilityInfo : NSObject
{
    long long __result;
    NSString *__message;
    struct {
        unsigned int result:1;
        unsigned int message:1;
    } __isSet;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=__message;
@property(nonatomic) long long result; // @synthesize result=__result;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

