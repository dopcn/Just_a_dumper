//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FMPostageDO : NSObject
{
    NSString *_postageFeeStr;
    long long _postageFee;
    NSString *_serverTime;
}

@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) long long postageFee; // @synthesize postageFee=_postageFee;
@property(copy, nonatomic) NSString *postageFeeStr; // @synthesize postageFeeStr=_postageFeeStr;
- (void).cxx_destruct;

@end

