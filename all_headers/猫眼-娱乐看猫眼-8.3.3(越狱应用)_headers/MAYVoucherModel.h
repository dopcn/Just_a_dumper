//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKBaseModel.h"

#import "MAYGroupVoucherFetcher-Protocol.h"
#import "MAYModelExtraParameters-Protocol.h"
#import "SAKUserBasedModel-Protocol.h"

@class NSString, SAKUser;

@interface MAYVoucherModel : SAKBaseModel <MAYModelExtraParameters, SAKUserBasedModel, MAYGroupVoucherFetcher>
{
}

- (id)codesJSONString:(id)arg1;
- (void)fetchGroupVouchersWithDealID:(long long)arg1 totalFee:(double)arg2 finished:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SAKUser *user;

@end

