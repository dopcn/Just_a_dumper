//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseNetworkApi.h"

@interface TBPassportApi : TBBaseNetworkApi
{
}

- (void)requestFinished:(id)arg1;
- (void)addCommonParams:(id)arg1 request:(id)arg2;
- (void)ssoRedirectToUrl:(id)arg1;
- (void)thirdPartAutoLogin:(id)arg1;
- (void)thirdPartLogin:(id)arg1;
- (void)bindPhone:(id)arg1;
- (void)modifyPassword:(id)arg1;
- (void)verifyIfPhoneVerificationCodeIsRight:(id)arg1;
- (void)verifyShortMessage:(id)arg1;
- (void)logout:(id)arg1;
- (void)login:(id)arg1;
- (void)signUp:(id)arg1;
- (void)sendShortMessage:(id)arg1;
- (void)send:(id)arg1;

@end

