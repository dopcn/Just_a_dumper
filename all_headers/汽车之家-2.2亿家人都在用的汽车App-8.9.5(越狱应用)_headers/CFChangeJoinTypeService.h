//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHNetworkingFramework/AHBaseService.h>

@class AHServerTimeStampManager;

@interface CFChangeJoinTypeService : AHBaseService
{
    long long _joinType;
    AHServerTimeStampManager *_timeStampManager;
}

@property(retain, nonatomic) AHServerTimeStampManager *timeStampManager; // @synthesize timeStampManager=_timeStampManager;
@property(nonatomic) long long joinType; // @synthesize joinType=_joinType;
- (void).cxx_destruct;
- (void)changeJoinType:(long long)arg1 cyhId:(id)arg2;
- (_Bool)parseJSON:(id)arg1;

@end

