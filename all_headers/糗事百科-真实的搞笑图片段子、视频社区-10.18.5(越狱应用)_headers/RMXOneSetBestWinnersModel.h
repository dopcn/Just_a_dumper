//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, RMXUserInfoModel;

@interface RMXOneSetBestWinnersModel : NSObject
{
    RMXUserInfoModel *_user;
    NSNumber *_rewards;
    long long _rank;
}

+ (id)bestWinnersWithCallback:(id)arg1;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSNumber *rewards; // @synthesize rewards=_rewards;
@property(retain, nonatomic) RMXUserInfoModel *user; // @synthesize user=_user;
- (void).cxx_destruct;

@end

