//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseUserPointExchangeRule : NVBaseModel
{
    long long _ruleID;
    NSString *_memo;
    double _userPointBalance;
    long long _userPointValue;
}

+ (id)metaInfo;
@property(nonatomic) long long userPointValue; // @synthesize userPointValue=_userPointValue;
@property(nonatomic) double userPointBalance; // @synthesize userPointBalance=_userPointBalance;
@property(copy, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) long long ruleID; // @synthesize ruleID=_ruleID;
- (void).cxx_destruct;

@end

