//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKBaseModel.h"

#import "SAKUserBasedModel-Protocol.h"

@class NSString, SAKUser;

@interface MTLotteryOrderModel : SAKBaseModel <SAKUserBasedModel>
{
}

- (void)loadCount:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)fetchLotteryOrderListFrom:(long long)arg1 limit:(long long)arg2 winned:(long long)arg3 finished:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SAKUser *user;

@end

